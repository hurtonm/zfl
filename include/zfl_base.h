/*  =========================================================================
    zfl_base.h - ZFL base class

    Copyright (c) 1991-2010 iMatix Corporation and contributors

    This file is part of the ZeroMQ Function Library: http://zfl.zeromq.org

    This is free software; you can redistribute it and/or modify it under
    the terms of the Lesser GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This software is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    Lesser GNU General Public License for more details.

    You should have received a copy of the Lesser GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
    =========================================================================
*/

#ifndef __ZFL_BASE_H_INCLUDED__
#define __ZFL_BASE_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif

//  Opaque class structure
typedef struct _zfl_base_t zfl_base_t;

//  Constructor and destructor
zfl_base_t *
     zfl_base_new           (void);
void zfl_base_destroy       (zfl_base_t **self_p);

//  Class methods
int  zfl_base_filler        (zfl_base_t *self);
void zfl_base_filler_set    (zfl_base_t *self, int newvalue);

//  Selftest method
int  zfl_base_test          (void);

#ifdef __cplusplus
}
#endif

#endif