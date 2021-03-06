/*  Copyright 2010, 2011 Lawrence Sebald

    This file is part of Yabause.

    Yabause is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Yabause is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Yabause; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
*/

#ifndef PerCocoa_h
#define PerCocoa_h

#include "peripheral.h"

#define PERCORE_COCOA 42
extern PerInterface_struct PERCocoa;

/* Update a key mapping */
void PERCocoaSetKey(u32 key, u8 name, int port);
u32 PERCocoaGetKey(u8 n, int p);

#endif /* !PerCocoa_h */
