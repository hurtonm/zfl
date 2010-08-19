/*  =========================================================================
    zfl_json.h - ZFL json class

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

#ifndef __ZFL_JSON_H_INCLUDED__
#define __ZFL_JSON_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif

//  Opaque class structure
typedef struct _zfl_json_t zfl_json_t;

//  Constructor and destructor
zfl_json_t *
     zfl_json_new           (void);
void zfl_json_destroy       (zfl_json_t **self_p);

//  Class methods
int  zfl_json_dummy         (zfl_json_t *self);

//  Selftest method
int  zfl_json_test          (void);

#ifdef __cplusplus
}
#endif

#endif