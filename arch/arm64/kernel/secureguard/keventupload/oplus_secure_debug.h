/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2018-2020 Oplus. All rights reserved.
 */
#ifndef _OPLUS_SECURE_GUARD_DEBUG_H
#define _OPLUS_SECURE_GUARD_DEBUG_H

#define OPLUS_SECURE_GUARD_DEGBU


void print_format(unsigned char * temp,unsigned int len);

#ifdef OPLUS_SECURE_GUARD_DEGBU
#define  PRINT_FORMAT(t, l)		        print_format(t, l)
#else
#define  PRINT_BUF(t, l)
#endif
#endif
