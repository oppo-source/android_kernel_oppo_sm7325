/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2018-2020 Oplus. All rights reserved.
 */
#ifndef OPLUS_SECURITY_H_
#define OPLUS_SECURITY_H_
struct task_security_struct {
    u32 osid;		/* SID prior to last execve */
    u32 sid;		/* current SID */
    u32 exec_sid;		/* exec SID */
    u32 create_sid;		/* fscreate SID */
    u32 keycreate_sid;	/* keycreate SID */
    u32 sockcreate_sid;	/* fscreate SID */
};

extern int get_current_security_context(char **context, u32 *context_len);

#endif /*OPLUS_SECURITY_H_*/