/*
 * File: widget_editor.h
 * Author:  Li XianJing <xianjimli@hotmail.com>
 * Brief: widget property editor.
 *
 * Copyright (c) 2009 - 2011  Li XianJing <xianjimli@hotmail.com>
 *
 * Licensed under the Academic Free License version 2.1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
 * History:
 * ================================================================
 * 2011-09-27 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#ifndef WIDGET_EDITOR_H
#define WIDGET_EDITOR_H

#include "ftk.h"

FTK_BEGIN_DECLS

Ret ftk_widget_editor_new(FtkWidget* parent, int last_x, int last_y);
Ret ftk_widget_editor_edit(FtkWidget* parent, FtkWidget* widget);

FTK_END_DECLS

#endif
