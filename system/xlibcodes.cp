/*
** This module is part of EFCP.
**

     Copyright 2007 Avshalom Houri, Marilyn Safran
     Weizmann Institute of Science, Rehovot, Israel

** EFCP is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
** 
** EFCP is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
** GNU General Public License for more details.
** 
** You should have received a copy of the GNU General Public License
** along with EFCP; if not, see:

       http://www.gnu.org/licenses

** or write to:



       Free Software Foundation, Inc.
       51 Franklin Street, Fifth Floor
       Boston, MA 02110-1301 USA

       contact: bill@wisdom.weizmann.ac.il

**
*/

-includable(true).
-language(nil).

XLIB_Null                               => 1.
XLIB_Success                            => 2.
XLIB_Complex                            => 3.
XLIB_CoordModeOrigin                    => 4.
XLIB_AllPlanes                          => 5.
XLIB_XYPixmap                           => 6.
XLIB_XYBitmap                           => 7.
XLIB_GCFunction                         => 8.
XLIB_GCPlaneMask                        => 9.
XLIB_GCForeground                       => 10.
XLIB_GCBackground                       => 11.
XLIB_GCLineWidth                        => 12.
XLIB_GCLineStyle                        => 13.
XLIB_GCCapStyle                         => 14.
XLIB_GCJoinStyle                        => 15.
XLIB_GCFillStyle                        => 16.
XLIB_GCFillRule                         => 17.
XLIB_GCTile                             => 18.
XLIB_GCStipple                          => 19.
XLIB_GCTileStipXOrigin                  => 20.
XLIB_GCTileStipYOrigin                  => 21.
XLIB_GCFont                             => 22.
XLIB_GCSubwindowMode                    => 23.
XLIB_GCGraphicsExposures                => 24.
XLIB_GCClipXOrigin                      => 25.
XLIB_GCClipYOrigin                      => 26.
XLIB_GCClipMask                         => 27.
XLIB_GCDashOffset                       => 28.
XLIB_GCDashList                         => 29.
XLIB_GCArcMode                          => 30.
XLIB_GXclear                            => 31.
XLIB_GXand                              => 32.
XLIB_GXandReverse                       => 33.
XLIB_GXcopy                             => 34.
XLIB_GXandInverted                      => 35.
XLIB_GXnoop                             => 36.
XLIB_GXxor                              => 37.
XLIB_GXor                               => 38.
XLIB_GXnor                              => 39.
XLIB_GXequiv                            => 40.
XLIB_GXinvert                           => 41.
XLIB_GXorReverse                        => 42.
XLIB_GXcopyInverted                     => 43.
XLIB_GXorInverted                       => 44.
XLIB_GXnand                             => 45.
XLIB_GXset                              => 46.
XLIBCI_ATTRIB_MAX_DEFS                  => 46.
XLIBM_XGCValues                         => 1.
XLIBM_XColor                            => 2.
XLIBM_XFontStruct                       => 3.
XLIBM_XCharStruct                       => 4.
XLIBM_XPoint                            => 5.
XLIBM_XImage                            => 6.
XLIBM_XGC                               => 7.
XLIBM_XWindowAttributes                 => 8.
XLIBM_int                               => 9.
XLIBM_char                              => 10.
XLIBM_unsigned                          => 11.
XLIBM_long                              => 12.
XLIBM_short                             => 13.
XLIBM_XGCValues_function                => 100.
XLIBM_XGCValues_plane_mask              => 101.
XLIBM_XGCValues_background              => 102.
XLIBM_XGCValues_foreground              => 103.
XLIBM_XGCValues_line_width              => 104.
XLIBM_XGCValues_line_style              => 105.
XLIBM_XGCValues_cap_style               => 106.
XLIBM_XGCValues_join_style              => 107.
XLIBM_XGCValues_fill_style              => 108.
XLIBM_XGCValues_fill_rule               => 109.
XLIBM_XGCValues_arc_mode                => 110.
XLIBM_XGCValues_tile                    => 111.
XLIBM_XGCValues_stipple                 => 112.
XLIBM_XGCValues_ts_x_origin             => 113.
XLIBM_XGCValues_ts_y_origin             => 114.
XLIBM_XGCValues_font                    => 115.
XLIBM_XGCValues_subwindow_mode          => 116.
XLIBM_XGCValues_graphics_exposures      => 117.
XLIBM_XGCValues_clip_x_origin           => 118.
XLIBM_XGCValues_clip_y_origin           => 119.
XLIBM_XGCValues_clip_mask               => 120.
XLIBM_XGCValues_dash_offset             => 121.
XLIBM_XGCValues_dashes                  => 122.
XLIBM_XColor_pixel                      => 123.
XLIBM_XColor_red                        => 124.
XLIBM_XColor_green                      => 125.
XLIBM_XColor_blue                       => 126.
XLIBM_XColor_flags                      => 127.
XLIBM_XColor_pad                        => 128.
XLIBM_XFontStruct_ext_data              => 129.
XLIBM_XFontStruct_fid                   => 130.
XLIBM_XFontStruct_direction             => 131.
XLIBM_XFontStruct_min_char_or_byte2     => 132.
XLIBM_XFontStruct_max_char_or_byte2     => 133.
XLIBM_XFontStruct_min_byte1             => 134.
XLIBM_XFontStruct_max_byte1             => 135.
XLIBM_XFontStruct_all_chars_exist       => 136.
XLIBM_XFontStruct_default_char          => 137.
XLIBM_XFontStruct_n_properties          => 138.
XLIBM_XFontStruct_properties            => 139.
XLIBM_XFontStruct_min_bounds            => 140.
XLIBM_XFontStruct_max_bounds            => 141.
XLIBM_XFontStruct_per_char              => 142.
XLIBM_XFontStruct_ascent                => 143.
XLIBM_XFontStruct_descent               => 144.
XLIBM_XCharStruct_lbearing              => 145.
XLIBM_XCharStruct_rbearing              => 146.
XLIBM_XCharStruct_width                 => 147.
XLIBM_XCharStruct_ascent                => 148.
XLIBM_XCharStruct_descent               => 149.
XLIBM_XCharStruct_attributes            => 150.
XLIBM_XPoint_x                          => 151.
XLIBM_XPoint_y                          => 152.
XLIBM_XImage_width                      => 153.
XLIBM_XImage_height                     => 154.
XLIBM_XImage_xoffset                    => 155.
XLIBM_XImage_format                     => 156.
XLIBM_XImage_data                       => 157.
XLIBM_XImage_byte_order                 => 158.
XLIBM_XImage_bitmap_unit                => 159.
XLIBM_XImage_bitmap_bit_order           => 160.
XLIBM_XImage_bitmap_pad                 => 161.
XLIBM_XImage_depth                      => 162.
XLIBM_XImage_bytes_per_line             => 163.
XLIBM_XImage_bits_per_pixel             => 164.
XLIBM_XImage_red_mask                   => 165.
XLIBM_XImage_green_mask                 => 166.
XLIBM_XImage_blue_mask                  => 167.
XLIBM_XImage_obdata                     => 168.
XLIBM_XGC_values                        => 169.
XLIBM_XGC_ext_data                      => 170.
XLIBM_XGC_gid                           => 171.
XLIBM_XGC_rects                         => 172.
XLIBM_XGC_dashes                        => 173.
XLIBM_XGC_dirty                         => 174.
XLIBM_XWindowAttributes_x               => 175.
XLIBM_XWindowAttributes_y               => 176.
XLIBM_XWindowAttributes_width           => 177.
XLIBM_XWindowAttributes_height          => 178.
XLIBM_XWindowAttributes_border_width    => 179.
XLIBM_XWindowAttributes_depth           => 180.
XLIBM_XWindowAttributes_visual          => 181.
XLIBM_XWindowAttributes_root            => 182.
XLIBM_XWindowAttributes_class           => 183.
XLIBM_XWindowAttributes_bit_gravity     => 184.
XLIBM_XWindowAttributes_win_gravity     => 185.
XLIBM_XWindowAttributes_backing_store   => 186.
XLIBM_XWindowAttributes_backing_planes  => 187.
XLIBM_XWindowAttributes_backing_pixel   => 188.
XLIBM_XWindowAttributes_save_under      => 189.
XLIBM_XWindowAttributes_colormap        => 190.
XLIBM_XWindowAttributes_map_installed   => 191.
XLIBM_XWindowAttributes_map_state       => 192.
XLIBM_XWindowAttributes_all_event_masks => 193.
XLIBM_XWindowAttributes_your_event_mask => 194.
XLIBM_XWindowAttributes_do_not_propagate_mask =>     195.
XLIBM_XWindowAttributes_override_redirect => 196.
XLIBM_XWindowAttributes_screen          => 197.
XLIBCI_XAllocNamedColor                 => 1.
XLIBCI_XCreateGC                        => 2.
XLIBCI_XGetGCValues                     => 3.
XLIBCI_XChangeGC                        => 4.
XLIBCI_XGetWindowAttributes             => 5.
XLIBCI_XSetForeground                   => 6.
XLIBCI_XSetBackground                   => 7.
XLIBCI_XSetFont                         => 8.
XLIBCI_XDrawString                      => 9.
XLIBCI_XDrawLine                        => 10.
XLIBCI_XDrawLines                       => 11.
XLIBCI_XFillPolygon                     => 12.
XLIBCI_XDrawArc                         => 13.
XLIBCI_XFillArc                         => 14.
XLIBCI_XDrawRectangle                   => 15.
XLIBCI_XFillRectangle                   => 16.
XLIBCI_XReadBitmapFile                  => 17.
XLIBCI_XCreateImage                     => 18.
XLIBCI_XGetImage                        => 19.
XLIBCI_XPutImage                        => 20.
XLIBCI_XFreePixmap                      => 21.
XLIBCI_XFree                            => 22.
XLIBCI_XDestroyImage                    => 23.
XLIBCI_XDefaultColormap                 => 24.
XLIBCI_XMaxRequestSize                  => 25.
XLIBCI_XDefaultVisual                   => 26.
XLIBCI_add_elements                     => 27.
XLIBCI_XParseColor                      => 28.
XLIBCI_XAllocColorCells                 => 29.
XLIBCI_XStoreColor                      => 30.
XLIBCI_XSetPlaneMask                    => 31.
XLIBCI_XSetFunction                     => 32.
XLIBCI_MAX_FUNC_DEFS                    => 32.
