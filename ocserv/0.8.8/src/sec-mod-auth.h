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
#ifndef AUTH_H
# define AUTH_H

#include <main.h>

#define MAX_AUTH_REQS 8
#define MAX_GROUPS 32

struct auth_mod_st {
	unsigned int type;
	int (*auth_init)(void** ctx, void *pool, const char* username, const char* ip, void* additional);
	int (*auth_msg)(void* ctx, char* msg, size_t msg_size);
	int (*auth_pass)(void* ctx, const char* pass, unsigned pass_len);
	int (*auth_group)(void* ctx, const char *suggested, char *groupname, int groupname_size);
	int (*auth_user)(void* ctx, char *groupname, int groupname_size);

	int (*open_session)(void *ctx); /* optional, may be null */
	void (*close_session)(void *ctx); /* optional */

	void (*auth_deinit)(void* ctx);
	void (*group_list)(void *pool, void *additional, char ***groupname, unsigned *groupname_size);
};

void main_auth_init(main_server_st *s);
void proc_auth_deinit(main_server_st* s, struct proc_st* proc);

/* The authentication with the worker thread is shown in ipc.proto.
 */
#endif