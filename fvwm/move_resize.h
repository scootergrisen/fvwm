/* This program is free software; you can redistribute it and/or modify
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

#ifndef _MOVE_RESIZE_
#define _MOVE_RESIZE_

#include "menus.h"

void switch_move_resize_grid(Bool state);
void AnimatedMoveOfWindow(
	Window w,int startX,int startY,int endX, int endY,Bool fWarpPointerToo,
	int cusDelay, float *ppctMovement,
	MenuRepaintTransparentParameters *pmrtp);
void AnimatedMoveFvwmWindow(
	FvwmWindow *fw, Window w, int startX, int startY, int endX, int endY,
	Bool fWarpPointerToo, int cmsDelay, float *ppctMovement);
Bool __move_loop(
	const exec_context_t *exc, int XOffset, int YOffset, int Width,
	int Height, int *FinalX, int *FinalY,Bool do_move_opaque);
int is_window_sticky_across_pages(FvwmWindow *fw);
int is_window_sticky_across_desks(FvwmWindow *fw);
void handle_stick(
	F_CMD_ARGS, int toggle_page, int toggle_desk, int do_not_draw,
	int do_silently);
void resize_geometry_window(void);
void __move_icon(
	FvwmWindow *fw, int x, int y, int old_x, int old_y,
	Bool do_move_animated, Bool do_warp_pointer);

#endif /* _MOVE_RESIZE_ */
