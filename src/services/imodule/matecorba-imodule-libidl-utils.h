/*
 * matecorba-imodule-libidl-utils.h: cut and paste code from libIDL
 *
 * Copyright (C) 1998 - 2002, Andrew T. Veliath
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef __MATECORBA_IMODULE_LIBIDL_UTILS_H__
#define __MATECORBA_IMODULE_LIBIDL_UTILS_H__

#include <glib.h>
#include <libIDL/IDL.h>

#ifdef __cplusplus
extern "C" {
#endif

IDL_tree _IDL_binop_eval   (enum IDL_binop   op,
			    IDL_tree         a,
			    IDL_tree         b);

IDL_tree _IDL_unaryop_eval (enum IDL_unaryop op,
			    IDL_tree         a);

#ifdef __cplusplus
}
#endif

#endif /* __MATECORBA_IMODULE_LIBIDL_UTILS_H__ */
