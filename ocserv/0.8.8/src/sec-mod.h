/*
 * Copyright (C) 2013 Nikos Mavrogiannopoulos
 *
 * Author: Nikos Mavrogiannopoulos
 *
 * This file is part of ocserv.
 *
 * The GnuTLS is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */
#ifndef SEC_MOD_H

#include <cookies.h>
#include <gnutls/abstract.h>

typedef struct sec_mod_st {
	gnutls_datum_t dcookie_key; /* the key to generate cookies */
	uint8_t cookie_key[COOKIE_KEY_SIZE];

	struct cfg_st *config;
	gnutls_privkey_t *key;
	unsigned key_size;
	void *client_db;
	void *ban_db;

	int fd;
} sec_mod_st;


typedef struct client_entry_st {
	/* A unique session identifier used to distinguish sessions
	 * prior to authentication. It is sent as cookie to the client
	 * who re-uses it when it performs authentication in multiple
	 * sessions.
	 */
	uint8_t sid[SID_SIZE];
	void * auth_ctx; /* the context of authentication */
	unsigned have_session; /* whether an auth session is initialized */
	unsigned tls_auth_ok;

	unsigned status; /* PS_AUTH_ */

	char ip[MAX_IP_STR]; /* the user's IP */
	char hostname[MAX_HOSTNAME_SIZE]; /* the requested hostname */
	char username[MAX_USERNAME_SIZE]; /* the owner */
	char groupname[MAX_GROUPNAME_SIZE]; /* the owner's group */
	uint8_t *cookie; /* the cookie associated with the session */
	unsigned cookie_size;

	uint8_t dtls_session_id[GNUTLS_MAX_SESSION_ID];

	time_t time;
} client_entry_st;

void *sec_mod_client_db_init(void *pool);
void sec_mod_client_db_deinit(void *db);
unsigned sec_mod_client_db_elems(void *_db);
client_entry_st * new_client_entry(void *_db, const char *ip);
client_entry_st * find_client_entry(void *_db, uint8_t sid[SID_SIZE]);
void del_client_entry(void *_db, client_entry_st * e);
void cleanup_client_entries(void *_db);

#ifdef __GNUC__
# define seclog(prio, fmt, ...) \
	syslog(prio, "sec-mod: "fmt, ##__VA_ARGS__)
#else
# define seclog syslog
#endif

void sec_auth_init(struct cfg_st *config);

int handle_sec_auth_init(sec_mod_st *sec, const SecAuthInitMsg * req);
int handle_sec_auth_cont(sec_mod_st *sec, const SecAuthContMsg * req);
int handle_sec_auth_session_cmd(sec_mod_st * sec, const SecAuthSessionMsg * req, unsigned cmd);
void sec_auth_user_deinit(client_entry_st * e);

void sec_mod_server(void *main_pool, struct cfg_st *config, const char *socket_file,
		    uint8_t cookie_key[COOKIE_KEY_SIZE]);

void cleanup_banned_entries(void *_db);
unsigned check_if_banned(void *_db, const char *ip);
void add_ip_to_ban_list(void *_db, const char *ip, time_t reenable_time);
void *sec_mod_ban_db_init(void *pool);
void sec_mod_ban_db_deinit(void *_db);
unsigned sec_mod_ban_db_elems(void *_db);

#endif
