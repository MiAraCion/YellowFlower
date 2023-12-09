/*
 * wingdi.h
 *
 * Declarations supporting the Windows Graphical Device Interface API.
 *
 * $Id: wingdi.h,v 065a665f8c52 2017/06/04 17:51:20 keithmarshall $
 *
 * Written by Anders Norlander <anorland@hem2.passagen.se>
 * Copyright (C) 1998-2009, 2011, 2012, 2016, 2017, MinGW.org Project
 *
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 */
#ifndef _WINGDI_H
#pragma GCC system_header
#define _WINGDI_H
#define _WINGDI_

/* For effective self-containment, <wingdi.h> is dependent on the core set
 * of Windows' custom type definitions...
 */
#include <windef.h>

_BEGIN_C_DECLS

#ifndef WINGDIAPI
# ifdef __W32API_USE_DLLIMPORT__
#  define WINGDIAPI  DECLSPEC_IMPORT
# else
#  define WINGDIAPI
# endif
#endif

#ifdef UNICODE
typedef WCHAR  BCHAR;
#else  /* ! UNICODE */
typedef BYTE  BCHAR;
#endif /* ! UNICODE */

#define BI_RGB						 0
#define BI_RLE8 					 1
#define BI_RLE4 					 2
#define BI_BITFIELDS					 3
#define BI_JPEG 					 4
#define BI_PNG						 5
#define LF_FACESIZE					32
#define LF_FULLFACESIZE 				64
#define CA_NEGATIVE					 1
#define CA_LOG_FILTER					 2
#define ILLUMINANT_DEVICE_DEFAULT			 0
#define ILLUMINANT_A					 1
#define ILLUMINANT_B					 2
#define ILLUMINANT_C					 3
#define ILLUMINANT_D50					 4
#define ILLUMINANT_D55					 5
#define ILLUMINANT_D65					 6
#define ILLUMINANT_D75					 7
#define ILLUMINANT_F2					 8
#define ILLUMINANT_MAX_INDEX		     ILLUMINANT_F2
#define ILLUMINANT_TUNGSTEN		      ILLUMINANT_A
#define ILLUMINANT_DAYLIGHT		      ILLUMINANT_C
#define ILLUMINANT_FLUORESCENT		     ILLUMINANT_F2
#define ILLUMINANT_NTSC 		      ILLUMINANT_C
#define RGB_GAMMA_MIN				      2500
#define RGB_GAMMA_MAX				     65000
#define REFERENCE_WHITE_MIN			      6000
#define REFERENCE_WHITE_MAX			     10000
#define REFERENCE_BLACK_MIN				 0
#define REFERENCE_BLACK_MAX			      4000
#define COLOR_ADJ_MIN				     (-100)
#define COLOR_ADJ_MAX				       100
#define CCHDEVICENAME					32
#define CCHFORMNAME					32
#define DI_COMPAT					 4
#define DI_DEFAULTSIZE					 8
#define DI_IMAGE					 2
#define DI_MASK 					 1
#define DI_NORMAL					 3
#define DI_APPBANDING					 1
#define EMR_HEADER					 1
#define EMR_POLYBEZIER					 2
#define EMR_POLYGON					 3
#define EMR_POLYLINE					 4
#define EMR_POLYBEZIERTO				 5
#define EMR_POLYLINETO					 6
#define EMR_POLYPOLYLINE				 7
#define EMR_POLYPOLYGON 				 8
#define EMR_SETWINDOWEXTEX				 9
#define EMR_SETWINDOWORGEX				10
#define EMR_SETVIEWPORTEXTEX				11
#define EMR_SETVIEWPORTORGEX				12
#define EMR_SETBRUSHORGEX				13
#define EMR_EOF 					14
#define EMR_SETPIXELV					15
#define EMR_SETMAPPERFLAGS				16
#define EMR_SETMAPMODE					17
#define EMR_SETBKMODE					18
#define EMR_SETPOLYFILLMODE				19
#define EMR_SETROP2					20
#define EMR_SETSTRETCHBLTMODE				21
#define EMR_SETTEXTALIGN				22
#define EMR_SETCOLORADJUSTMENT				23
#define EMR_SETTEXTCOLOR				24
#define EMR_SETBKCOLOR					25
#define EMR_OFFSETCLIPRGN				26
#define EMR_MOVETOEX					27
#define EMR_SETMETARGN					28
#define EMR_EXCLUDECLIPRECT				29
#define EMR_INTERSECTCLIPRECT				30
#define EMR_SCALEVIEWPORTEXTEX				31
#define EMR_SCALEWINDOWEXTEX				32
#define EMR_SAVEDC					33
#define EMR_RESTOREDC					34
#define EMR_SETWORLDTRANSFORM				35
#define EMR_MODIFYWORLDTRANSFORM			36
#define EMR_SELECTOBJECT				37
#define EMR_CREATEPEN					38
#define EMR_CREATEBRUSHINDIRECT 			39
#define EMR_DELETEOBJECT				40
#define EMR_ANGLEARC					41
#define EMR_ELLIPSE					42
#define EMR_RECTANGLE					43
#define EMR_ROUNDRECT					44
#define EMR_ARC 					45
#define EMR_CHORD					46
#define EMR_PIE 					47
#define EMR_SELECTPALETTE				48
#define EMR_CREATEPALETTE				49
#define EMR_SETPALETTEENTRIES				50
#define EMR_RESIZEPALETTE				51
#define EMR_REALIZEPALETTE				52
#define EMR_EXTFLOODFILL				53
#define EMR_LINETO					54
#define EMR_ARCTO					55
#define EMR_POLYDRAW					56
#define EMR_SETARCDIRECTION				57
#define EMR_SETMITERLIMIT				58
#define EMR_BEGINPATH					59
#define EMR_ENDPATH					60
#define EMR_CLOSEFIGURE 				61
#define EMR_FILLPATH					62
#define EMR_STROKEANDFILLPATH				63
#define EMR_STROKEPATH					64
#define EMR_FLATTENPATH 				65
#define EMR_WIDENPATH					66
#define EMR_SELECTCLIPPATH				67
#define EMR_ABORTPATH					68
#define EMR_GDICOMMENT					70
#define EMR_FILLRGN					71
#define EMR_FRAMERGN					72
#define EMR_INVERTRGN					73
#define EMR_PAINTRGN					74
#define EMR_EXTSELECTCLIPRGN				75
#define EMR_BITBLT					76
#define EMR_STRETCHBLT					77
#define EMR_MASKBLT					78
#define EMR_PLGBLT					79
#define EMR_SETDIBITSTODEVICE				80
#define EMR_STRETCHDIBITS				81
#define EMR_EXTCREATEFONTINDIRECTW			82
#define EMR_EXTTEXTOUTA 				83
#define EMR_EXTTEXTOUTW 				84
#define EMR_POLYBEZIER16				85
#define EMR_POLYGON16					86
#define EMR_POLYLINE16					87
#define EMR_POLYBEZIERTO16				88
#define EMR_POLYLINETO16				89
#define EMR_POLYPOLYLINE16				90
#define EMR_POLYPOLYGON16				91
#define EMR_POLYDRAW16					92
#define EMR_CREATEMONOBRUSH				93
#define EMR_CREATEDIBPATTERNBRUSHPT			94
#define EMR_EXTCREATEPEN				95
#define EMR_POLYTEXTOUTA				96
#define EMR_POLYTEXTOUTW				97
#define EMR_SETICMMODE					98
#define EMR_CREATECOLORSPACE				99
#define EMR_SETCOLORSPACE			       100
#define EMR_DELETECOLORSPACE			       101
#define EMR_GLSRECORD				       102
#define EMR_GLSBOUNDEDRECORD			       103
#define EMR_PIXELFORMAT 			       104
#define ENHMETA_SIGNATURE			1179469088
#define EPS_SIGNATURE				0x46535045

#define META_SETBKCOLOR 			     0x201
#define META_SETBKMODE				     0x102
#define META_SETMAPMODE 			     0x103
#define META_SETROP2				     0x104
#define META_SETRELABS				     0x105
#define META_SETPOLYFILLMODE			     0x106
#define META_SETSTRETCHBLTMODE			     0x107
#define META_SETTEXTCHAREXTRA			     0x108
#define META_SETTEXTCOLOR			     0x209
#define META_SETTEXTJUSTIFICATION		     0x20A
#define META_SETWINDOWORG			     0x20B
#define META_SETWINDOWEXT			     0x20C
#define META_SETVIEWPORTORG			     0x20D
#define META_SETVIEWPORTEXT			     0x20E
#define META_OFFSETWINDOWORG			     0x20F
#define META_SCALEWINDOWEXT			     0x410
#define META_OFFSETVIEWPORTORG			     0x211
#define META_SCALEVIEWPORTEXT			     0x412
#define META_LINETO				     0x213
#define META_MOVETO				     0x214
#define META_EXCLUDECLIPRECT			     0x415
#define META_INTERSECTCLIPRECT			     0x416
#define META_ARC				     0x817
#define META_ELLIPSE				     0x418
#define META_FLOODFILL				     0x419
#define META_PIE				     0x81A
#define META_RECTANGLE				     0x41B
#define META_ROUNDRECT				     0x61C
#define META_PATBLT				     0x61D
#define META_SAVEDC				      0x1E
#define META_SETPIXEL				     0x41F
#define META_OFFSETCLIPRGN			     0x220
#define META_TEXTOUT				     0x521
#define META_BITBLT				     0x922
#define META_STRETCHBLT 			     0xB23
#define META_POLYGON				     0x324
#define META_POLYLINE				     0x325
#define META_ESCAPE				     0x626
#define META_RESTOREDC				     0x127
#define META_FILLREGION 			     0x228
#define META_FRAMEREGION			     0x429
#define META_INVERTREGION			     0x12A
#define META_PAINTREGION			     0x12B
#define META_SELECTCLIPREGION			     0x12C
#define META_SELECTOBJECT			     0x12D
#define META_SETTEXTALIGN			     0x12E
#define META_CHORD				     0x830
#define META_SETMAPPERFLAGS			     0x231
#define META_EXTTEXTOUT 			     0xA32
#define META_SETDIBTODEV			     0xD33
#define META_SELECTPALETTE			     0x234
#define META_REALIZEPALETTE			      0x35
#define META_ANIMATEPALETTE			     0x436
#define META_SETPALENTRIES			      0x37
#define META_POLYPOLYGON			     0x538
#define META_RESIZEPALETTE			     0x139
#define META_DIBBITBLT				     0x940
#define META_DIBSTRETCHBLT			     0xB41
#define META_DIBCREATEPATTERNBRUSH		     0x142
#define META_STRETCHDIB 			     0xF43
#define META_EXTFLOODFILL			     0x548
#define META_DELETEOBJECT			     0x1F0
#define META_CREATEPALETTE			      0xF7
#define META_CREATEPATTERNBRUSH 		     0x1F9
#define META_CREATEPENINDIRECT			     0x2FA
#define META_CREATEFONTINDIRECT 		     0x2FB
#define META_CREATEBRUSHINDIRECT		     0x2FC
#define META_CREATEREGION			     0x6FF
#define PT_MOVETO					 6
#define PT_LINETO					 2
#define PT_BEZIERTO					 4
#define PT_CLOSEFIGURE					 1
#define ELF_VENDOR_SIZE 				 4
#define ELF_VERSION					 0
#define ELF_CULTURE_LATIN				 0
#define PFD_TYPE_RGBA					 0
#define PFD_TYPE_COLORINDEX				 1
#define PFD_MAIN_PLANE					 0
#define PFD_OVERLAY_PLANE				 1
#define PFD_UNDERLAY_PLANE			       (-1)
#define PFD_DOUBLEBUFFER				 1
#define PFD_STEREO					 2
#define PFD_DRAW_TO_WINDOW				 4
#define PFD_DRAW_TO_BITMAP				 8
#define PFD_SUPPORT_GDI 				16
#define PFD_SUPPORT_OPENGL				32
#define PFD_GENERIC_FORMAT				64
#define PFD_NEED_PALETTE			       128
#define PFD_NEED_SYSTEM_PALETTE 		0x00000100
#define PFD_SWAP_EXCHANGE			0x00000200
#define PFD_SWAP_COPY				0x00000400
#define PFD_SWAP_LAYER_BUFFERS			0x00000800
#define PFD_GENERIC_ACCELERATED 		0x00001000
#define PFD_DEPTH_DONTCARE			0x20000000
#define PFD_DOUBLEBUFFER_DONTCARE		0x40000000
#define PFD_STEREO_DONTCARE			0x80000000
#define SP_ERROR				       (-1)
#define SP_OUTOFDISK				       (-4)
#define SP_OUTOFMEMORY				       (-5)
#define SP_USERABORT				       (-3)
#define SP_APPABORT				       (-2)
#define BLACKNESS				0x00000042
#define NOTSRCERASE				0x001100A6
#define NOTSRCCOPY				0x00330008
#define SRCERASE				0x00440328
#define DSTINVERT				0x00550009
#define PATINVERT				0x005A0049
#define SRCINVERT				0x00660046
#define SRCAND					0x008800C6
#define MERGEPAINT				0x00BB0226
#define MERGECOPY				0x00C000CA
#define SRCCOPY 				0x00CC0020
#define SRCPAINT				0x00EE0086
#define PATCOPY 				0x00F00021
#define PATPAINT				0x00FB0A09
#define WHITENESS				0x00FF0062
#define CAPTUREBLT				0x40000000
#define NOMIRRORBITMAP				0x80000000
#define R2_BLACK					 1
#define R2_COPYPEN					13
#define R2_MASKNOTPEN					 3
#define R2_MASKPEN					 9
#define R2_MASKPENNOT					 5
#define R2_MERGENOTPEN					12
#define R2_MERGEPEN					15
#define R2_MERGEPENNOT					14
#define R2_NOP						11
#define R2_NOT						 6
#define R2_NOTCOPYPEN					 4
#define R2_NOTMASKPEN					 8
#define R2_NOTMERGEPEN					 2
#define R2_NOTXORPEN					10
#define R2_WHITE					16
#define R2_XORPEN					 7
#define CM_OUT_OF_GAMUT 			       255
#define CM_IN_GAMUT					 0
#define RGN_AND 					 1
#define RGN_COPY					 5
#define RGN_DIFF					 4
#define RGN_OR						 2
#define RGN_XOR 					 3
#define NULLREGION					 1
#define SIMPLEREGION					 2
#define COMPLEXREGION					 3
#define ERROR						 0
#define CBM_INIT					 4
#define DIB_PAL_COLORS					 1
#define DIB_RGB_COLORS					 0
#define FW_DONTCARE					 0
#define FW_THIN 				       100
#define FW_EXTRALIGHT				       200
#define FW_ULTRALIGHT			     FW_EXTRALIGHT
#define FW_LIGHT				       300
#define FW_NORMAL			               400
#define FW_REGULAR				       400
#define FW_MEDIUM				       500
#define FW_SEMIBOLD				       600
#define FW_DEMIBOLD			       FW_SEMIBOLD
#define FW_BOLD 				       700
#define FW_EXTRABOLD				       800
#define FW_ULTRABOLD			      FW_EXTRABOLD
#define FW_HEAVY				       900
#define FW_BLACK			          FW_HEAVY
#define ANSI_CHARSET					 0
#define DEFAULT_CHARSET 				 1
#define SYMBOL_CHARSET					 2
#define SHIFTJIS_CHARSET			       128
#define HANGEUL_CHARSET 			       129
#define HANGUL_CHARSET				       129
#define GB2312_CHARSET				       134
#define CHINESEBIG5_CHARSET			       136
#define GREEK_CHARSET				       161
#define TURKISH_CHARSET 			       162
#define HEBREW_CHARSET				       177
#define ARABIC_CHARSET				       178
#define BALTIC_CHARSET				       186
#define RUSSIAN_CHARSET 			       204
#define THAI_CHARSET				       222
#define EASTEUROPE_CHARSET			       238
#define OEM_CHARSET				       255
#define JOHAB_CHARSET				       130
#define VIETNAMESE_CHARSET			       163
#define MAC_CHARSET					77
#define OUT_DEFAULT_PRECIS				 0
#define OUT_STRING_PRECIS				 1
#define OUT_CHARACTER_PRECIS				 2
#define OUT_STROKE_PRECIS				 3
#define OUT_TT_PRECIS					 4
#define OUT_DEVICE_PRECIS				 5
#define OUT_RASTER_PRECIS				 6
#define OUT_TT_ONLY_PRECIS				 7
#define OUT_OUTLINE_PRECIS				 8
/* http://www.pinvoke.net/default.aspx/Structures/LOGFONT.html */
#define OUT_PS_ONLY_PRECIS				10
#define CLIP_DEFAULT_PRECIS				 0
#define CLIP_CHARACTER_PRECIS				 1
#define CLIP_STROKE_PRECIS				 2
#define CLIP_MASK					15
#define CLIP_LH_ANGLES					16
#define CLIP_TT_ALWAYS					32
#define CLIP_EMBEDDED				       128
#define DEFAULT_QUALITY 				 0
#define DRAFT_QUALITY					 1
#define PROOF_QUALITY					 2
#define NONANTIALIASED_QUALITY				 3
#define ANTIALIASED_QUALITY				 4

#define DEFAULT_PITCH					 0
#define FIXED_PITCH					 1
#define VARIABLE_PITCH					 2
#define MONO_FONT					 8
#define FF_DECORATIVE					80
#define FF_DONTCARE					 0
#define FF_MODERN					48
#define FF_ROMAN					16
#define FF_SCRIPT					64
#define FF_SWISS					32
#define PANOSE_COUNT					10
#define PAN_FAMILYTYPE_INDEX				 0
#define PAN_SERIFSTYLE_INDEX				 1
#define PAN_WEIGHT_INDEX				 2
#define PAN_PROPORTION_INDEX				 3
#define PAN_CONTRAST_INDEX				 4
#define PAN_STROKEVARIATION_INDEX			 5
#define PAN_ARMSTYLE_INDEX				 6
#define PAN_LETTERFORM_INDEX				 7
#define PAN_MIDLINE_INDEX				 8
#define PAN_XHEIGHT_INDEX				 9
#define PAN_CULTURE_LATIN				 0
#define PAN_ANY 					 0
#define PAN_NO_FIT					 1
#define PAN_FAMILY_TEXT_DISPLAY 			 2
#define PAN_FAMILY_SCRIPT				 3
#define PAN_FAMILY_DECORATIVE				 4
#define PAN_FAMILY_PICTORIAL				 5
#define PAN_SERIF_COVE					 2
#define PAN_SERIF_OBTUSE_COVE				 3
#define PAN_SERIF_SQUARE_COVE				 4
#define PAN_SERIF_OBTUSE_SQUARE_COVE			 5
#define PAN_SERIF_SQUARE				 6
#define PAN_SERIF_THIN					 7
#define PAN_SERIF_BONE					 8
#define PAN_SERIF_EXAGGERATED				 9
#define PAN_SERIF_TRIANGLE				10
#define PAN_SERIF_NORMAL_SANS				11
#define PAN_SERIF_OBTUSE_SANS				12
#define PAN_SERIF_PERP_SANS				13
#define PAN_SERIF_FLARED				14
#define PAN_SERIF_ROUNDED				15
#define PAN_WEIGHT_VERY_LIGHT				 2
#define PAN_WEIGHT_LIGHT				 3
#define PAN_WEIGHT_THIN 				 4
#define PAN_WEIGHT_BOOK 				 5
#define PAN_WEIGHT_MEDIUM				 6
#define PAN_WEIGHT_DEMI 				 7
#define PAN_WEIGHT_BOLD 				 8
#define PAN_WEIGHT_HEAVY				 9
#define PAN_WEIGHT_BLACK				10
#define PAN_WEIGHT_NORD 				11
#define PAN_PROP_OLD_STYLE				 2
#define PAN_PROP_MODERN 				 3
#define PAN_PROP_EVEN_WIDTH				 4
#define PAN_PROP_EXPANDED				 5
#define PAN_PROP_CONDENSED				 6
#define PAN_PROP_VERY_EXPANDED				 7
#define PAN_PROP_VERY_CONDENSED 			 8
#define PAN_PROP_MONOSPACED				 9
#define PAN_CONTRAST_NONE				 2
#define PAN_CONTRAST_VERY_LOW				 3
#define PAN_CONTRAST_LOW				 4
#define PAN_CONTRAST_MEDIUM_LOW 			 5
#define PAN_CONTRAST_MEDIUM				 6
#define PAN_CONTRAST_MEDIUM_HIGH			 7
#define PAN_CONTRAST_HIGH				 8
#define PAN_CONTRAST_VERY_HIGH				 9
#define PAN_STROKE_GRADUAL_DIAG 			 2
#define PAN_STROKE_GRADUAL_TRAN 			 3
#define PAN_STROKE_GRADUAL_VERT 			 4
#define PAN_STROKE_GRADUAL_HORZ 			 5
#define PAN_STROKE_RAPID_VERT				 6
#define PAN_STROKE_RAPID_HORZ				 7
#define PAN_STROKE_INSTANT_VERT 			 8
#define PAN_STRAIGHT_ARMS_HORZ				 2
#define PAN_STRAIGHT_ARMS_WEDGE 			 3
#define PAN_STRAIGHT_ARMS_VERT				 4
#define PAN_STRAIGHT_ARMS_SINGLE_SERIF			 5
#define PAN_STRAIGHT_ARMS_DOUBLE_SERIF			 6
#define PAN_BENT_ARMS_HORZ				 7
#define PAN_BENT_ARMS_WEDGE				 8
#define PAN_BENT_ARMS_VERT				 9
#define PAN_BENT_ARMS_SINGLE_SERIF			10
#define PAN_BENT_ARMS_DOUBLE_SERIF			11
#define PAN_LETT_NORMAL_CONTACT 			 2
#define PAN_LETT_NORMAL_WEIGHTED			 3
#define PAN_LETT_NORMAL_BOXED				 4
#define PAN_LETT_NORMAL_FLATTENED			 5
#define PAN_LETT_NORMAL_ROUNDED 			 6
#define PAN_LETT_NORMAL_OFF_CENTER			 7
#define PAN_LETT_NORMAL_SQUARE				 8
#define PAN_LETT_OBLIQUE_CONTACT			 9
#define PAN_LETT_OBLIQUE_WEIGHTED			10
#define PAN_LETT_OBLIQUE_BOXED				11
#define PAN_LETT_OBLIQUE_FLATTENED			12
#define PAN_LETT_OBLIQUE_ROUNDED			13
#define PAN_LETT_OBLIQUE_OFF_CENTER			14
#define PAN_LETT_OBLIQUE_SQUARE 			15
#define PAN_MIDLINE_STANDARD_TRIMMED			 2
#define PAN_MIDLINE_STANDARD_POINTED			 3
#define PAN_MIDLINE_STANDARD_SERIFED			 4
#define PAN_MIDLINE_HIGH_TRIMMED			 5
#define PAN_MIDLINE_HIGH_POINTED			 6
#define PAN_MIDLINE_HIGH_SERIFED			 7
#define PAN_MIDLINE_CONSTANT_TRIMMED			 8
#define PAN_MIDLINE_CONSTANT_POINTED			 9
#define PAN_MIDLINE_CONSTANT_SERIFED			10
#define PAN_MIDLINE_LOW_TRIMMED 			11
#define PAN_MIDLINE_LOW_POINTED 			12
#define PAN_MIDLINE_LOW_SERIFED 			13
#define PAN_XHEIGHT_CONSTANT_SMALL			 2
#define PAN_XHEIGHT_CONSTANT_STD			 3
#define PAN_XHEIGHT_CONSTANT_LARGE			 4
#define PAN_XHEIGHT_DUCKING_SMALL			 5
#define PAN_XHEIGHT_DUCKING_STD 			 6
#define PAN_XHEIGHT_DUCKING_LARGE			 7
#define FS_LATIN1					 1
#define FS_LATIN2					 2
#define FS_CYRILLIC					 4
#define FS_GREEK					 8
#define FS_TURKISH					16
#define FS_HEBREW					32
#define FS_ARABIC					64
#define FS_BALTIC				       128
#define FS_THAI 				   0x10000
#define FS_JISJAPAN				   0x20000
#define FS_CHINESESIMP				   0x40000
#define FS_WANSUNG				   0x80000
#define FS_CHINESETRAD				  0x100000
#define FS_JOHAB				  0x200000
#define FS_SYMBOL				0x80000000
#define HS_BDIAGONAL					 3
#define HS_CROSS					 4
#define HS_DIAGCROSS					 5
#define HS_FDIAGONAL					 2
#define HS_HORIZONTAL					 0
#define HS_VERTICAL					 1
#define PS_GEOMETRIC				     65536
#define PS_COSMETIC					 0
#define PS_ALTERNATE					 8
#define PS_SOLID					 0
#define PS_DASH 					 1
#define PS_DOT						 2
#define PS_DASHDOT					 3
#define PS_DASHDOTDOT					 4
#define PS_NULL 					 5
#define PS_USERSTYLE					 7
#define PS_INSIDEFRAME					 6
#define PS_ENDCAP_ROUND 				 0
#define PS_ENDCAP_SQUARE			       256
#define PS_ENDCAP_FLAT				       512
#define PS_JOIN_BEVEL				      4096
#define PS_JOIN_MITER				      8192
#define PS_JOIN_ROUND					 0
#define PS_STYLE_MASK					15
#define PS_ENDCAP_MASK				      3840
#define PS_TYPE_MASK				    983040
#define ALTERNATE					 1
#define WINDING 					 2
#define DC_BINNAMES					12
#define DC_BINS 					 6
#define DC_COPIES					18
#define DC_DRIVER					11
#define DC_DATATYPE_PRODUCED				21
#define DC_DUPLEX					 7
#define DC_EMF_COMPLIANT				20
#define DC_ENUMRESOLUTIONS				13
#define DC_EXTRA					 9
#define DC_FIELDS					 1
#define DC_FILEDEPENDENCIES				14
#define DC_MAXEXTENT					 5
#define DC_MINEXTENT					 4
#define DC_ORIENTATION					17
#define DC_PAPERNAMES					16
#define DC_PAPERS					 2
#define DC_PAPERSIZE					 3
#define DC_SIZE 					 8
#define DC_TRUETYPE					15
#define DCTT_BITMAP					 1
#define DCTT_DOWNLOAD					 2
#define DCTT_SUBDEV					 4
#define DCTT_DOWNLOAD_OUTLINE				 8
#define DC_VERSION					10
#define DC_BINADJUST					19
#define DC_EMF_COMPLIANT				20
#define DC_DATATYPE_PRODUCED				21
#define DC_MANUFACTURER 				23
#define DC_MODEL					24

#define DCBA_FACEUPNONE 				 0
#define DCBA_FACEUPCENTER				 1
#define DCBA_FACEUPLEFT 				 2
#define DCBA_FACEUPRIGHT				 3
#define DCBA_FACEDOWNNONE			       256
#define DCBA_FACEDOWNCENTER			       257
#define DCBA_FACEDOWNLEFT			       258
#define DCBA_FACEDOWNRIGHT			       259
#define FLOODFILLBORDER 				 0
#define FLOODFILLSURFACE				 1
#define ETO_CLIPPED				    0x0004
#define ETO_GLYPH_INDEX 			    0x0010
#define ETO_OPAQUE				    0x0002
#define ETO_NUMERICSLATIN			    0x0800
#define ETO_NUMERICSLOCAL			    0x0400
#define ETO_RTLREADING				    0x0080

#define GDICOMMENT_WINDOWS_METAFILE	      (-2147483647)
#define GDICOMMENT_BEGINGROUP				 2
#define GDICOMMENT_ENDGROUP				 3
#define GDICOMMENT_MULTIFORMATS 		1073741828
#define GDICOMMENT_IDENTIFIER			1128875079
#define AD_COUNTERCLOCKWISE				 1
#define AD_CLOCKWISE					 2
#define RDH_RECTANGLES					 1
#define GCPCLASS_LATIN					 1
#define GCPCLASS_HEBREW 				 2
#define GCPCLASS_ARABIC 				 2
#define GCPCLASS_NEUTRAL				 3
#define GCPCLASS_LOCALNUMBER				 4
#define GCPCLASS_LATINNUMBER				 5
#define GCPCLASS_LATINNUMERICTERMINATOR 		 6
#define GCPCLASS_LATINNUMERICSEPARATOR			 7
#define GCPCLASS_NUMERICSEPARATOR			 8
#define GCPCLASS_PREBOUNDLTR			       128
#define GCPCLASS_PREBOUNDRTL				64
#define GCPCLASS_POSTBOUNDLTR				32
#define GCPCLASS_POSTBOUNDRTL				16
#define GCPGLYPH_LINKBEFORE			    0x8000
#define GCPGLYPH_LINKAFTER			    0x4000
#define DCB_DISABLE					 8
#define DCB_ENABLE					 4
#define DCB_RESET					 1
#define DCB_SET 					 3
#define DCB_ACCUMULATE					 2
#define DCB_DIRTY					 2
#define OBJ_BRUSH					 2
#define OBJ_PEN 					 1
#define OBJ_PAL 					 5
#define OBJ_FONT					 6
#define OBJ_BITMAP					 7
#define OBJ_EXTPEN					11
#define OBJ_REGION					 8
#define OBJ_DC						 3
#define OBJ_MEMDC					10
#define OBJ_METAFILE					 9
#define OBJ_METADC					 4
#define OBJ_ENHMETAFILE 				13
#define OBJ_ENHMETADC					12
#define DRIVERVERSION					 0
#define TECHNOLOGY					 2
#define DT_PLOTTER					 0
#define DT_RASDISPLAY					 1
#define DT_RASPRINTER					 2
#define DT_RASCAMERA					 3
#define DT_CHARSTREAM					 4
#define DT_METAFILE					 5
#define DT_DISPFILE					 6
#define HORZSIZE					 4
#define VERTSIZE					 6
#define HORZRES 				   	 8
#define VERTRES 					10
#define LOGPIXELSX					88
#define LOGPIXELSY					90
#define BITSPIXEL					12
#define PLANES						14
#define NUMBRUSHES					16
#define NUMPENS 					18
#define NUMFONTS					22
#define NUMCOLORS					24
#define NUMMARKERS					20
#define ASPECTX 					40
#define ASPECTY 					42
#define ASPECTXY					44
#define PDEVICESIZE					26
#define CLIPCAPS					36
#define SIZEPALETTE				       104
#define NUMRESERVED				       106
#define COLORRES				       108
#define PHYSICALWIDTH				       110
#define PHYSICALHEIGHT				       111
#define PHYSICALOFFSETX 			       112
#define PHYSICALOFFSETY 			       113
#define SCALINGFACTORX				       114
#define SCALINGFACTORY				       115
#define VREFRESH				       116
#define DESKTOPHORZRES				       118
#define DESKTOPVERTRES				       117
#define BLTALIGNMENT				       119

#define RASTERCAPS					38
#define RC_BANDING					 2
#define RC_BITBLT					 1
#define RC_BITMAP64					 8
#define RC_DI_BITMAP				       128
#define RC_DIBTODEV				       512
#define RC_FLOODFILL				      4096
#define RC_GDI20_OUTPUT 				16
#define RC_PALETTE				       256
#define RC_SCALING					 4
#define RC_STRETCHBLT				      2048
#define RC_STRETCHDIB				      8192
#define RC_DEVBITS				    0x8000
#define RC_OP_DX_OUTPUT 			    0x4000
#define CURVECAPS					28
#define CC_NONE 					 0
#define CC_CIRCLES					 1
#define CC_PIE						 2
#define CC_CHORD					 4
#define CC_ELLIPSES					 8
#define CC_WIDE 					16
#define CC_STYLED					32
#define CC_WIDESTYLED					64
#define CC_INTERIORS				       128
#define CC_ROUNDRECT				       256
#define LINECAPS					30
#define LC_NONE 					 0
#define LC_POLYLINE					 2
#define LC_MARKER					 4
#define LC_POLYMARKER					 8
#define LC_WIDE 					16
#define LC_STYLED					32
#define LC_WIDESTYLED					64
#define LC_INTERIORS				       128
#define POLYGONALCAPS					32
#define RC_BANDING					 2
#define RC_BIGFONT				      1024
#define RC_BITBLT					 1
#define RC_BITMAP64					 8
#define RC_DEVBITS				    0x8000
#define RC_DI_BITMAP				       128
#define RC_GDI20_OUTPUT 				16
#define RC_GDI20_STATE					32
#define RC_NONE 					 0
#define RC_OP_DX_OUTPUT 			    0x4000
#define RC_PALETTE				       256
#define RC_SAVEBITMAP					64
#define RC_SCALING					 4
#define PC_NONE 					 0
#define PC_POLYGON					 1
#define PC_POLYPOLYGON				       256
#define PC_PATHS				       512
#define PC_RECTANGLE					 2
#define PC_WINDPOLYGON					 4
#define PC_SCANLINE					 8
#define PC_TRAPEZOID					 4
#define PC_WIDE 					16
#define PC_STYLED					32
#define PC_WIDESTYLED					64
#define PC_INTERIORS				       128
#define PC_PATHS				       512
#define TEXTCAPS					34
#define TC_OP_CHARACTER 				 1
#define TC_OP_STROKE					 2
#define TC_CP_STROKE					 4
#define TC_CR_90					 8
#define TC_CR_ANY					16
#define TC_SF_X_YINDEP					32
#define TC_SA_DOUBLE					64
#define TC_SA_INTEGER				       128
#define TC_SA_CONTIN				       256
#define TC_EA_DOUBLE				       512
#define TC_IA_ABLE				      1024
#define TC_UA_ABLE				      2048
#define TC_SO_ABLE				      4096
#define TC_RA_ABLE				      8192
#define TC_VA_ABLE				     16384
#define TC_RESERVED				     32768
#define TC_SCROLLBLT				     65536
#define GCP_DBCS					 1
#define GCP_ERROR				    0x8000
#define GCP_CLASSIN				   0x80000
#define GCP_DIACRITIC				       256
#define GCP_DISPLAYZWG				  0x400000
#define GCP_GLYPHSHAPE					16
#define GCP_JUSTIFY				   0x10000
#define GCP_JUSTIFYIN				  0x200000
#define GCP_KASHIDA				      1024
#define GCP_LIGATE					32
#define GCP_MAXEXTENT				  0x100000
#define GCP_NEUTRALOVERRIDE			 0x2000000
#define GCP_NUMERICOVERRIDE			 0x1000000
#define GCP_NUMERICSLATIN			 0x4000000
#define GCP_NUMERICSLOCAL			 0x8000000
#define GCP_REORDER					 2
#define GCP_SYMSWAPOFF				  0x800000
#define GCP_USEKERNING					 8
#define FLI_GLYPHS				   0x40000
#define FLI_MASK				    0x103B
#define GGO_METRICS					 0
#define GGO_BITMAP					 1
#define GGO_NATIVE					 2
#define GGO_BEZIER					 3
#define GGO_GRAY2_BITMAP				 4
#define GGO_GRAY4_BITMAP				 5
#define GGO_GRAY8_BITMAP				 6
#define GGO_GLYPH_INDEX 			       128

#define GM_COMPATIBLE					 1
#define GM_ADVANCED					 2
#define MM_ANISOTROPIC					 8
#define MM_HIENGLISH					 5
#define MM_HIMETRIC					 3
#define MM_ISOTROPIC					 7
#define MM_LOENGLISH					 4
#define MM_LOMETRIC					 2
#define MM_TEXT 					 1
#define MM_TWIPS					 6
#define MM_MAX_FIXEDSCALE			  MM_TWIPS
#define ABSOLUTE					 1
#define RELATIVE					 2
#define PC_EXPLICIT					 2
#define PC_NOCOLLAPSE					 4
#define PC_RESERVED					 1
#define CLR_NONE				0xFFFFFFFF
#define CLR_INVALID				  CLR_NONE
#define CLR_DEFAULT				0xFF000000
#define PT_MOVETO					 6
#define PT_LINETO					 2
#define PT_BEZIERTO					 4
#define PT_CLOSEFIGURE					 1
#define TT_AVAILABLE					 1
#define TT_ENABLED					 2
#define BLACK_BRUSH					 4
#define DKGRAY_BRUSH					 3
#define GRAY_BRUSH					 2
#define HOLLOW_BRUSH					 5
#define LTGRAY_BRUSH					 1
#define NULL_BRUSH					 5
#define WHITE_BRUSH					 0
#define BLACK_PEN					 7
#define NULL_PEN					 8
#define WHITE_PEN					 6
#define ANSI_FIXED_FONT 				11
#define ANSI_VAR_FONT					12
#define DEVICE_DEFAULT_FONT				14
#define DEFAULT_GUI_FONT				17
#define OEM_FIXED_FONT					10
#define SYSTEM_FONT					13
#define SYSTEM_FIXED_FONT				16
#define DEFAULT_PALETTE 				15

#define SYSPAL_ERROR					 0
#define SYSPAL_STATIC					 1
#define SYSPAL_NOSTATIC 				 2
#define SYSPAL_NOSTATIC256				 3
#define TA_BASELINE					24
#define TA_BOTTOM					 8
#define TA_TOP						 0
#define TA_CENTER					 6
#define TA_LEFT 					 0
#define TA_RIGHT					 2
#define TA_RTLREADING				       256
#define TA_NOUPDATECP					 0
#define TA_UPDATECP					 1

#define TA_MASK			(TA_BASELINE+TA_CENTER+TA_UPDATECP+TA_RTLREADING)

#define VTA_BASELINE					24
#define VTA_CENTER					 6
#define VTA_LEFT				 TA_BOTTOM
#define VTA_RIGHT				    TA_TOP
#define VTA_BOTTOM				  TA_RIGHT
#define VTA_TOP 				   TA_LEFT
#define MWT_IDENTITY					 1
#define MWT_LEFTMULTIPLY				 2
#define MWT_RIGHTMULTIPLY				 3
#define OPAQUE						 2
#define TRANSPARENT					 1
#define BLACKONWHITE					 1
#define WHITEONBLACK					 2
#define COLORONCOLOR					 3
#define HALFTONE					 4
#define MAXSTRETCHBLTMODE				 4
#define STRETCH_ANDSCANS				 1
#define STRETCH_DELETESCANS				 3
#define STRETCH_HALFTONE				 4
#define STRETCH_ORSCANS 				 2
#define TCI_SRCCHARSET					 1
#define TCI_SRCCODEPAGE 				 2
#define TCI_SRCFONTSIG					 3
#define ICM_ON						 2
#define ICM_OFF 					 1
#define ICM_QUERY					 3
#define NEWFRAME					 1
#define ABORTDOC					 2
#define NEXTBAND					 3
#define SETCOLORTABLE					 4
#define GETCOLORTABLE					 5
#define FLUSHOUTPUT					 6
#define DRAFTMODE					 7
#define QUERYESCSUPPORT 				 8
#define SETABORTPROC					 9
#define STARTDOC					10
#define ENDDOC						11
#define GETPHYSPAGESIZE 				12
#define GETPRINTINGOFFSET				13
#define GETSCALINGFACTOR				14
#define MFCOMMENT					15
#define GETPENWIDTH					16
#define SETCOPYCOUNT					17
#define SELECTPAPERSOURCE				18
#define DEVICEDATA					19
#define PASSTHROUGH					19
#define GETTECHNOLGY					20
#define GETTECHNOLOGY					20
#define SETLINECAP					21
#define SETLINEJOIN					22
#define SETMITERLIMIT					23
#define BANDINFO					24
#define DRAWPATTERNRECT 				25
#define GETVECTORPENSIZE				26
#define GETVECTORBRUSHSIZE				27
#define ENABLEDUPLEX					28
#define GETSETPAPERBINS 				29
#define GETSETPRINTORIENT				30
#define ENUMPAPERBINS					31
#define SETDIBSCALING					32
#define EPSPRINTING					33
#define ENUMPAPERMETRICS				34
#define GETSETPAPERMETRICS				35
#define POSTSCRIPT_DATA 				37
#define POSTSCRIPT_IGNORE				38
#define MOUSETRAILS					39
#define GETDEVICEUNITS					42
#define GETEXTENDEDTEXTMETRICS			       256
#define GETEXTENTTABLE				       257
#define GETPAIRKERNTABLE			       258
#define GETTRACKKERNTABLE			       259
#define EXTTEXTOUT				       512
#define GETFACENAME				       513
#define DOWNLOADFACE				       514
#define ENABLERELATIVEWIDTHS			       768
#define ENABLEPAIRKERNING			       769
#define SETKERNTRACK				       770
#define SETALLJUSTVALUES			       771
#define SETCHARSET				       772
#define STRETCHBLT				      2048
#define GETSETSCREENPARAMS			      3072
#define QUERYDIBSUPPORT 			      3073
#define BEGIN_PATH				      4096
#define CLIP_TO_PATH				      4097
#define END_PATH				      4098
#define EXT_DEVICE_CAPS 			      4099
#define RESTORE_CTM				      4100
#define SAVE_CTM				      4101
#define SET_ARC_DIRECTION			      4102
#define SET_BACKGROUND_COLOR			      4103
#define SET_POLY_MODE				      4104
#define SET_SCREEN_ANGLE			      4105
#define SET_SPREAD				      4106
#define TRANSFORM_CTM				      4107
#define SET_CLIP_BOX				      4108
#define SET_BOUNDS				      4109
#define SET_MIRROR_MODE 			      4110
#define OPENCHANNEL				      4110
#define DOWNLOADHEADER				      4111
#define CLOSECHANNEL				      4112
#define POSTSCRIPT_PASSTHROUGH			      4115
#define ENCAPSULATED_POSTSCRIPT 		      4116
#define QDI_SETDIBITS					 1
#define QDI_GETDIBITS					 2
#define QDI_DIBTOSCREEN 				 4
#define QDI_STRETCHDIB					 8
#define SP_NOTREPORTED				    0x4000
#define PR_JOBSTATUS					 0
#define ASPECT_FILTERING				 1
#define BS_SOLID					 0
#define BS_NULL 					 1
#define BS_HOLLOW					 1
#define BS_HATCHED					 2
#define BS_PATTERN					 3
#define BS_INDEXED					 4
#define BS_DIBPATTERN					 5
#define BS_DIBPATTERNPT 				 6
#define BS_PATTERN8X8					 7
#define BS_DIBPATTERN8X8				 8
#define LCS_CALIBRATED_RGB				 0
#define LCS_DEVICE_RGB					 1
#define LCS_DEVICE_CMYK 				 2
#define LCS_GM_BUSINESS 				 1
#define LCS_GM_GRAPHICS 				 2
#define LCS_GM_IMAGES					 4
#define RASTER_FONTTYPE 				 1
#define DEVICE_FONTTYPE 				 2
#define TRUETYPE_FONTTYPE				 4
#define DMORIENT_PORTRAIT				 1
#define DMORIENT_LANDSCAPE				 2
#define DMPAPER_FIRST					 1
#define DMPAPER_LETTER					 1
#define DMPAPER_LETTERSMALL				 2
#define DMPAPER_TABLOID 				 3
#define DMPAPER_LEDGER					 4
#define DMPAPER_LEGAL					 5
#define DMPAPER_STATEMENT				 6
#define DMPAPER_EXECUTIVE				 7
#define DMPAPER_A3					 8
#define DMPAPER_A4					 9
#define DMPAPER_A4SMALL 				10
#define DMPAPER_A5					11
#define DMPAPER_B4					12
#define DMPAPER_B5					13
#define DMPAPER_FOLIO					14
#define DMPAPER_QUARTO					15
#define DMPAPER_10X14					16
#define DMPAPER_11X17					17
#define DMPAPER_NOTE					18
#define DMPAPER_ENV_9					19
#define DMPAPER_ENV_10					20
#define DMPAPER_ENV_11					21
#define DMPAPER_ENV_12					22
#define DMPAPER_ENV_14					23
#define DMPAPER_CSHEET					24
#define DMPAPER_DSHEET					25
#define DMPAPER_ESHEET					26
#define DMPAPER_ENV_DL					27
#define DMPAPER_ENV_C5					28
#define DMPAPER_ENV_C3					29
#define DMPAPER_ENV_C4					30
#define DMPAPER_ENV_C6					31
#define DMPAPER_ENV_C65 				32
#define DMPAPER_ENV_B4					33
#define DMPAPER_ENV_B5					34
#define DMPAPER_ENV_B6					35
#define DMPAPER_ENV_ITALY				36
#define DMPAPER_ENV_MONARCH				37
#define DMPAPER_ENV_PERSONAL				38
#define DMPAPER_FANFOLD_US				39
#define DMPAPER_FANFOLD_STD_GERMAN			40
#define DMPAPER_FANFOLD_LGL_GERMAN			41
#define DMPAPER_ISO_B4					42
#define DMPAPER_JAPANESE_POSTCARD			43
#define DMPAPER_9X11					44
#define DMPAPER_10X11					45
#define DMPAPER_15X11					46
#define DMPAPER_ENV_INVITE				47
#define DMPAPER_RESERVED_48				48
#define DMPAPER_RESERVED_49				49
#define DMPAPER_LETTER_EXTRA				50
#define DMPAPER_LEGAL_EXTRA				51
#define DMPAPER_TABLOID_EXTRA				52
#define DMPAPER_A4_EXTRA				53
#define DMPAPER_LETTER_TRANSVERSE			54
#define DMPAPER_A4_TRANSVERSE				55
#define DMPAPER_LETTER_EXTRA_TRANSVERSE 		56
#define DMPAPER_A_PLUS					57
#define DMPAPER_B_PLUS					58
#define DMPAPER_LETTER_PLUS				59
#define DMPAPER_A4_PLUS 				60
#define DMPAPER_A5_TRANSVERSE				61
#define DMPAPER_B5_TRANSVERSE				62
#define DMPAPER_A3_EXTRA				63
#define DMPAPER_A5_EXTRA				64
#define DMPAPER_B5_EXTRA				65
#define DMPAPER_A2					66
#define DMPAPER_A3_TRANSVERSE				67
#define DMPAPER_A3_EXTRA_TRANSVERSE			68

#define DMPAPER_USER				       256
#define DMBIN_FIRST					 1
#define DMBIN_UPPER					 1
#define DMBIN_ONLYONE					 1
#define DMBIN_LOWER					 2
#define DMBIN_MIDDLE					 3
#define DMBIN_MANUAL					 4
#define DMBIN_ENVELOPE					 5
#define DMBIN_ENVMANUAL 				 6
#define DMBIN_AUTO					 7
#define DMBIN_TRACTOR					 8
#define DMBIN_SMALLFMT					 9
#define DMBIN_LARGEFMT					10
#define DMBIN_LARGECAPACITY				11
#define DMBIN_CASSETTE					14
#define DMBIN_FORMSOURCE				15
#define DMBIN_LAST					15
#define DMBIN_USER				       256
#define DMRES_DRAFT				       (-1)
#define DMRES_LOW				       (-2)
#define DMRES_MEDIUM				       (-3)
#define DMRES_HIGH				       (-4)
#define DMCOLOR_MONOCHROME				 1
#define DMCOLOR_COLOR					 2
#define DMDUP_SIMPLEX					 1
#define DMDUP_VERTICAL					 2
#define DMDUP_HORIZONTAL				 3
#define DMTT_BITMAP					 1
#define DMTT_DOWNLOAD					 2
#define DMTT_SUBDEV					 3
#define DMTT_DOWNLOAD_OUTLINE				 4
#define DMCOLLATE_FALSE 				 0
#define DMCOLLATE_TRUE					 1
#define DM_SPECVERSION				       800
#define DM_GRAYSCALE					 1
#define DM_INTERLACED					 2
#define DM_UPDATE					 1
#define DM_COPY 					 2
#define DM_PROMPT					 4
#define DM_MODIFY					 8
#define DM_IN_BUFFER				 DM_MODIFY
#define DM_IN_PROMPT				 DM_PROMPT
#define DM_OUT_BUFFER				   DM_COPY
#define DM_OUT_DEFAULT				 DM_UPDATE
#define DM_ORIENTATION				0x00000001
#define DM_PAPERSIZE				0x00000002
#define DM_PAPERLENGTH				0x00000004
#define DM_PAPERWIDTH				0x00000008
#define DM_SCALE				0x00000010
#define DM_POSITION				0x00000020
#define DM_COPIES				0x00000100
#define DM_DEFAULTSOURCE			0x00000200
#define DM_PRINTQUALITY 			0x00000400
#define DM_COLOR				0x00000800
#define DM_DUPLEX				0x00001000
#define DM_YRESOLUTION				0x00002000
#define DM_TTOPTION				0x00004000
#define DM_COLLATE				0x00008000
#define DM_FORMNAME				0x00010000
#define DM_LOGPIXELS				0x00020000
#define DM_BITSPERPEL				0x00040000
#define DM_PELSWIDTH				0x00080000
#define DM_PELSHEIGHT				0x00100000
#define DM_DISPLAYFLAGS 			0x00200000
#define DM_DISPLAYFREQUENCY			0x00400000
#define DM_ICMMETHOD				0x00800000
#define DM_ICMINTENT				0x01000000
#define DM_MEDIATYPE				0x02000000
#define DM_DITHERTYPE				0x04000000

#define DMICMMETHOD_NONE				 1
#define DMICMMETHOD_SYSTEM				 2
#define DMICMMETHOD_DRIVER				 3
#define DMICMMETHOD_DEVICE				 4
#define DMICMMETHOD_USER			       256
#define DMICM_SATURATE					 1
#define DMICM_CONTRAST					 2
#define DMICM_COLORMETRIC				 3
#define DMICM_USER				       256
#define DMMEDIA_STANDARD				 1
#define DMMEDIA_TRANSPARENCY				 2
#define DMMEDIA_GLOSSY					 3
#define DMMEDIA_USER				       256
#define DMDITHER_NONE					 1
#define DMDITHER_COARSE 				 2
#define DMDITHER_FINE					 3
#define DMDITHER_LINEART				 4
#define DMDITHER_ERRORDIFFUSION 			 5
#define DMDITHER_RESERVED6				 6
#define DMDITHER_RESERVED7				 7
#define DMDITHER_RESERVED8				 8
#define DMDITHER_RESERVED9				 9
#define DMDITHER_GRAYSCALE				10
#define DMDITHER_USER				       256
#define GDI_ERROR				0xFFFFFFFF
#define HGDI_ERROR			((HANDLE)(GDI_ERROR))
#define TMPF_FIXED_PITCH				 1
#define TMPF_VECTOR					 2
#define TMPF_TRUETYPE					 4
#define TMPF_DEVICE					 8
#define NTM_ITALIC					 1
#define NTM_BOLD					32
#define NTM_REGULAR					64
#define TT_POLYGON_TYPE 				24
#define TT_PRIM_LINE					 1
#define TT_PRIM_QSPLINE 				 2
#define TT_PRIM_CSPLINE 				 3
#define FONTMAPPER_MAX					10
#define ENHMETA_STOCK_OBJECT			0x80000000
#define WGL_FONT_LINES					 0
#define WGL_FONT_POLYGONS				 1
#define LPD_DOUBLEBUFFER				 1
#define LPD_STEREO					 2
#define LPD_SUPPORT_GDI 				16
#define LPD_SUPPORT_OPENGL				32
#define LPD_SHARE_DEPTH 				64
#define LPD_SHARE_STENCIL			       128
#define LPD_SHARE_ACCUM 			       256
#define LPD_SWAP_EXCHANGE			       512
#define LPD_SWAP_COPY				      1024
#define LPD_TRANSPARENT 			      4096
#define LPD_TYPE_RGBA					 0
#define LPD_TYPE_COLORINDEX				 1
#define WGL_SWAP_MAIN_PLANE				 1
#define WGL_SWAP_OVERLAY1				 2
#define WGL_SWAP_OVERLAY2				 4
#define WGL_SWAP_OVERLAY3				 8
#define WGL_SWAP_OVERLAY4				16
#define WGL_SWAP_OVERLAY5				32
#define WGL_SWAP_OVERLAY6				64
#define WGL_SWAP_OVERLAY7			       128
#define WGL_SWAP_OVERLAY8			       256
#define WGL_SWAP_OVERLAY9			       512
#define WGL_SWAP_OVERLAY10			      1024
#define WGL_SWAP_OVERLAY11			      2048
#define WGL_SWAP_OVERLAY12			      4096
#define WGL_SWAP_OVERLAY13			      8192
#define WGL_SWAP_OVERLAY14			     16384
#define WGL_SWAP_OVERLAY15			     32768
#define WGL_SWAP_UNDERLAY1			     65536
#define WGL_SWAP_UNDERLAY2			   0x20000
#define WGL_SWAP_UNDERLAY3			   0x40000
#define WGL_SWAP_UNDERLAY4			   0x80000
#define WGL_SWAP_UNDERLAY5			  0x100000
#define WGL_SWAP_UNDERLAY6			  0x200000
#define WGL_SWAP_UNDERLAY7			  0x400000
#define WGL_SWAP_UNDERLAY8			  0x800000
#define WGL_SWAP_UNDERLAY9			 0x1000000
#define WGL_SWAP_UNDERLAY10			 0x2000000
#define WGL_SWAP_UNDERLAY11			 0x4000000
#define WGL_SWAP_UNDERLAY12			 0x8000000
#define WGL_SWAP_UNDERLAY13			0x10000000
#define WGL_SWAP_UNDERLAY14			0x20000000
#define WGL_SWAP_UNDERLAY15			0x40000000
#define AC_SRC_OVER				      0x00
#define AC_SRC_ALPHA				      0x01
#define AC_SRC_NO_PREMULT_ALPHA 		      0x01
#define AC_SRC_NO_ALPHA 			      0x02
#define AC_DST_NO_PREMULT_ALPHA 		      0x10
#define AC_DST_NO_ALPHA 			      0x20
#define LAYOUT_RTL					 1
#define LAYOUT_BITMAPORIENTATIONPRESERVED		 8

#define DISPLAY_DEVICE_ATTACHED_TO_DESKTOP	0x00000001
#define DISPLAY_DEVICE_MULTI_DRIVER		0x00000002
#define DISPLAY_DEVICE_PRIMARY_DEVICE		0x00000004
#define DISPLAY_DEVICE_MIRRORING_DRIVER 	0x00000008
#define DISPLAY_DEVICE_VGA_COMPATIBLE		0x00000010
#define DISPLAY_DEVICE_REMOVABLE		0x00000020
#define DISPLAY_DEVICE_MODESPRUNED		0x08000000

#if WINVER >= _WIN32_WINNT_NT4  /* also _WIN32_WINDOWS_95 */
#define CS_ENABLE				0x00000001
#define CS_DISABLE				0x00000002
#define CS_DELETE_TRANSFORM			0x00000003

#if WINVER >= _WIN32_WINNT_WIN2K
#define GRADIENT_FILL_RECT_H			      0x00
#define GRADIENT_FILL_RECT_V			      0x01
#define GRADIENT_FILL_TRIANGLE			      0x02
#define GRADIENT_FILL_OP_FLAG			      0xFF
#define COLORMATCHTOTARGET_EMBEDED		0x00000001
#define CREATECOLORSPACE_EMBEDED		0x00000001
#define SETICMPROFILE_EMBEDED			0x00000001

#define DC_PERSONALITY					25
#define DC_PRINTRATE					26
#define DC_PRINTRATEUNIT				27
#define DC_PRINTERMEM					28
#define DC_MEDIAREADY					29
#define DC_STAPLE					30
#define DC_PRINTRATEPPM 				31
#define DC_COLORDEVICE					32
#define DC_NUP						33

#define SHADEBLENDCAPS				       120
#define SB_NONE 				      0x00
#define SB_CONST_ALPHA				      0x01
#define SB_PIXEL_ALPHA				      0x02
#define SB_PREMULT_ALPHA			      0x04
#define SB_GRAD_RECT				      0x10
#define SB_GRAD_TRI				      0x20
#define COLORMGMTCAPS				       121
#define CM_NONE 				      0x00
#define CM_DEVICE_ICM				      0x01
#define CM_GAMMA_RAMP				      0x02
#define CM_CMYK_COLOR				      0x04

#define GGO_UNHINTED				       256

#define DMPAPER_DBL_JAPANESE_POSTCARD			69
#define DMPAPER_A6					70
#define DMPAPER_JENV_KAKU2				71
#define DMPAPER_JENV_KAKU3				72
#define DMPAPER_JENV_CHOU3				73
#define DMPAPER_JENV_CHOU4				74
#define DMPAPER_LETTER_ROTATED				75
#define DMPAPER_A3_ROTATED				76
#define DMPAPER_A4_ROTATED				77
#define DMPAPER_A5_ROTATED				78
#define DMPAPER_B4_JIS_ROTATED				79
#define DMPAPER_B5_JIS_ROTATED				80
#define DMPAPER_JAPANESE_POSTCARD_ROTATED		81
#define DMPAPER_DBL_JAPANESE_POSTCARD_ROTATED		82
#define DMPAPER_A6_ROTATED				83
#define DMPAPER_JENV_KAKU2_ROTATED			84
#define DMPAPER_JENV_KAKU3_ROTATED			85
#define DMPAPER_JENV_CHOU3_ROTATED			86
#define DMPAPER_JENV_CHOU4_ROTATED			87
#define DMPAPER_B6_JIS					88
#define DMPAPER_B6_JIS_ROTATED				89
#define DMPAPER_12X11					90
#define DMPAPER_JENV_YOU4				91
#define DMPAPER_JENV_YOU4_ROTATED			92
#define DMPAPER_P16K					93
#define DMPAPER_P32K					94
#define DMPAPER_P32KBIG 				95
#define DMPAPER_PENV_1					96
#define DMPAPER_PENV_2					97
#define DMPAPER_PENV_3					98
#define DMPAPER_PENV_4					99
#define DMPAPER_PENV_5				       100
#define DMPAPER_PENV_6				       101
#define DMPAPER_PENV_7				       102
#define DMPAPER_PENV_8				       103
#define DMPAPER_PENV_9				       104
#define DMPAPER_PENV_10 			       105
#define DMPAPER_P16K_ROTATED			       106
#define DMPAPER_P32K_ROTATED			       107
#define DMPAPER_P32KBIG_ROTATED 		       108
#define DMPAPER_PENV_1_ROTATED			       109
#define DMPAPER_PENV_2_ROTATED			       110
#define DMPAPER_PENV_3_ROTATED			       111
#define DMPAPER_PENV_4_ROTATED			       112
#define DMPAPER_PENV_5_ROTATED			       113
#define DMPAPER_PENV_6_ROTATED			       114
#define DMPAPER_PENV_7_ROTATED			       115
#define DMPAPER_PENV_8_ROTATED			       116
#define DMPAPER_PENV_9_ROTATED			       117
#define DMPAPER_PENV_10_ROTATED 		       118
#define DMPAPER_LAST				       118

#define DM_PANNINGWIDTH 			0x08000000
#define DM_PANNINGHEIGHT			0x10000000

#if WINVER >= _WIN32_WINNT_WINXP
#define DC_MEDIATYPENAMES				34
#define DC_MEDIATYPES					35

#define DM_DISPLAYFIXEDOUTPUT			0x20000000
#define DM_DISPLAYORIENTATION			0x00000080
#define DMDO_DEFAULT				0x00000000
#define DMDO_90 				0x00000001
#define DMDO_180				0x00000002
#define DMDO_270				0x00000003
#define DMDFO_DEFAULT				0x00000000
#define DMDFO_STRETCH				0x00000001
#define DMDFO_CENTER				0x00000002

#endif	/* WINVER >= WinXP */
#endif	/* WINVER >= Win2K */
#endif	/* WINVER >= Win95/WinNT4 */

#if WINVER < _WIN32_WINNT_WIN2K
#define DMPAPER_LAST					68
#endif	/* WINVER < Win2K */

#if _WIN32_WINNT >= _WIN32_WINNT_NT4
#define ETO_IGNORELANGUAGE			    0x1000

#if _WIN32_WINNT >= _WIN32_WINNT_WIN2K
#define ETO_PDY 				    0x2000

#define DC_BRUSH					18
#define DC_PEN						19

#define NTM_NONNEGATIVE_AC			0x00010000
#define NTM_PS_OPENTYPE 			0x00020000
#define NTM_TT_OPENTYPE 			0x00040000
#define NTM_MULTIPLEMASTER			0x00080000
#define NTM_TYPE1				0x00100000
#define NTM_DSIG				0x00200000

#define GGI_MARK_NONEXISTING_GLYPHS			 1

#define FR_PRIVATE				      0x10
#define FR_NOT_ENUM				      0x20

#define CLEARTYPE_QUALITY				 5
#endif	/* WINNT >= Win2K */
#endif	/* WINNT >= WinNT4 */

#ifndef RC_INVOKED
typedef struct _ABC
{ int				abcA;
  UINT				abcB;
  int				abcC;
} ABC, *LPABC;

typedef struct _ABCFLOAT
{ FLOAT 			abcfA;
  FLOAT 			abcfB;
  FLOAT 			abcfC;
} ABCFLOAT, *LPABCFLOAT;

typedef struct tagBITMAP
{ LONG				bmType;
  LONG				bmWidth;
  LONG				bmHeight;
  LONG				bmWidthBytes;
  WORD				bmPlanes;
  WORD				bmBitsPixel;
  LPVOID			bmBits;
} BITMAP, *PBITMAP, *LPBITMAP;

typedef struct tagBITMAPCOREHEADER
{ DWORD 			bcSize;
  WORD				bcWidth;
  WORD				bcHeight;
  WORD				bcPlanes;
  WORD				bcBitCount;
} BITMAPCOREHEADER, *LPBITMAPCOREHEADER, *PBITMAPCOREHEADER;

# pragma pack (push, 1)

typedef struct tagRGBTRIPLE
{ BYTE				rgbtBlue;
  BYTE				rgbtGreen;
  BYTE				rgbtRed;
} RGBTRIPLE, *LPRGBTRIPLE;

# pragma pack (2)

typedef struct tagBITMAPFILEHEADER
{ WORD				bfType;
  DWORD 			bfSize;
  WORD				bfReserved1;
  WORD				bfReserved2;
  DWORD 			bfOffBits;
} BITMAPFILEHEADER, *LPBITMAPFILEHEADER, *PBITMAPFILEHEADER;

# pragma pack (pop)

typedef struct _BITMAPCOREINFO
{ BITMAPCOREHEADER		bmciHeader;
  RGBTRIPLE			bmciColors[1];
} BITMAPCOREINFO, *LPBITMAPCOREINFO, *PBITMAPCOREINFO;

typedef struct tagBITMAPINFOHEADE
{ DWORD 			biSize;
  LONG				biWidth;
  LONG				biHeight;
  WORD				biPlanes;
  WORD				biBitCount;
  DWORD 			biCompression;
  DWORD 			biSizeImage;
  LONG				biXPelsPerMeter;
  LONG				biYPelsPerMeter;
  DWORD 			biClrUsed;
  DWORD 			biClrImportant;
} BITMAPINFOHEADER, *LPBITMAPINFOHEADER, *PBITMAPINFOHEADER;

typedef struct tagRGBQUAD
{ BYTE				rgbBlue;
  BYTE				rgbGreen;
  BYTE				rgbRed;
  BYTE				rgbReserved;
} RGBQUAD, *LPRGBQUAD;

typedef struct tagBITMAPINFO
{ BITMAPINFOHEADER		bmiHeader;
  RGBQUAD			bmiColors[1];
} BITMAPINFO, *LPBITMAPINFO, *PBITMAPINFO;
typedef long FXPT16DOT16, *LPFXPT16DOT16;
typedef long FXPT2DOT30, *LPFXPT2DOT30;

typedef struct tagCIEXYZ
{ FXPT2DOT30			ciexyzX;
  FXPT2DOT30			ciexyzY;
  FXPT2DOT30			ciexyzZ;
} CIEXYZ, *LPCIEXYZ;

typedef struct tagCIEXYZTRIPLE
{ CIEXYZ			ciexyzRed;
  CIEXYZ			ciexyzGreen;
  CIEXYZ			ciexyzBlue;
} CIEXYZTRIPLE, *LPCIEXYZTRIPLE;

typedef struct
{ DWORD 			bV4Size;
  LONG				bV4Width;
  LONG				bV4Height;
  WORD				bV4Planes;
  WORD				bV4BitCount;
  DWORD 			bV4V4Compression;
  DWORD 			bV4SizeImage;
  LONG				bV4XPelsPerMeter;
  LONG				bV4YPelsPerMeter;
  DWORD 			bV4ClrUsed;
  DWORD 			bV4ClrImportant;
  DWORD 			bV4RedMask;
  DWORD 			bV4GreenMask;
  DWORD 			bV4BlueMask;
  DWORD 			bV4AlphaMask;
  DWORD 			bV4CSType;
  CIEXYZTRIPLE			bV4Endpoints;
  DWORD 			bV4GammaRed;
  DWORD 			bV4GammaGreen;
  DWORD 			bV4GammaBlue;
} BITMAPV4HEADER, *LPBITMAPV4HEADER, *PBITMAPV4HEADER;

typedef struct
{ DWORD 			bV5Size;
  LONG				bV5Width;
  LONG				bV5Height;
  WORD				bV5Planes;
  WORD				bV5BitCount;
  DWORD 			bV5Compression;
  DWORD 			bV5SizeImage;
  LONG				bV5XPelsPerMeter;
  LONG				bV5YPelsPerMeter;
  DWORD 			bV5ClrUsed;
  DWORD 			bV5ClrImportant;
  DWORD 			bV5RedMask;
  DWORD 			bV5GreenMask;
  DWORD 			bV5BlueMask;
  DWORD 			bV5AlphaMask;
  DWORD 			bV5CSType;
  CIEXYZTRIPLE			bV5Endpoints;
  DWORD 			bV5GammaRed;
  DWORD 			bV5GammaGreen;
  DWORD 			bV5GammaBlue;
  DWORD 			bV5Intent;
  DWORD 			bV5ProfileData;
  DWORD 			bV5ProfileSize;
  DWORD 			bV5Reserved;
} BITMAPV5HEADER, *LPBITMAPV5HEADER, *PBITMAPV5HEADER;

typedef struct tagFONTSIGNATURE
{ DWORD 			fsUsb[4];
  DWORD 			fsCsb[2];
} FONTSIGNATURE, *LPFONTSIGNATURE;

typedef struct
{ UINT				ciCharset;
  UINT				ciACP;
  FONTSIGNATURE 		fs;
} CHARSETINFO, *LPCHARSETINFO;

typedef struct  tagCOLORADJUSTMENT
{ WORD				caSize;
  WORD				caFlags;
  WORD				caIlluminantIndex;
  WORD				caRedGamma;
  WORD				caGreenGamma;
  WORD				caBlueGamma;
  WORD				caReferenceBlack;
  WORD				caReferenceWhite;
  SHORT 			caContrast;
  SHORT 			caBrightness;
  SHORT 			caColorfulness;
  SHORT 			caRedGreenTint;
} COLORADJUSTMENT, *LPCOLORADJUSTMENT;

typedef struct _devicemodeA
{ BYTE				dmDeviceName[CCHDEVICENAME];
  WORD				dmSpecVersion;
  WORD				dmDriverVersion;
  WORD				dmSize;
  WORD				dmDriverExtra;
  DWORD 			dmFields;
  _ANONYMOUS_UNION union
  { _ANONYMOUS_STRUCT struct
    { short			    dmOrientation;
      short			    dmPaperSize;
      short			    dmPaperLength;
      short			    dmPaperWidth;
      short			    dmScale;
      short			    dmCopies;
      short			    dmDefaultSource;
      short			    dmPrintQuality;
    }				  DUMMYSTRUCTNAME;
    _ANONYMOUS_STRUCT struct
    { POINTL			    dmPosition;
      DWORD			    dmDisplayOrientation;
      DWORD			    dmDisplayFixedOutput;
    }				  DUMMYSTRUCTNAME2;
  }				DUMMYUNIONNAME;

  short 			dmColor;
  short 			dmDuplex;
  short 			dmYResolution;
  short 			dmTTOption;
  short 			dmCollate;
  BYTE				dmFormName[CCHFORMNAME];
  WORD				dmLogPixels;
  DWORD 			dmBitsPerPel;
  DWORD 			dmPelsWidth;
  DWORD 			dmPelsHeight;
  _ANONYMOUS_UNION union
  { DWORD			  dmDisplayFlags;
    DWORD			  dmNup;
  }				DUMMYUNIONNAME2;

  DWORD 			dmDisplayFrequency;

# if WINVER >= _WIN32_WINNT_NT4  /* also _WIN32_WINDOWS_95 */

  DWORD 			dmICMMethod;
  DWORD 			dmICMIntent;
  DWORD 			dmMediaType;
  DWORD 			dmDitherType;
  DWORD 			dmReserved1;
  DWORD 			dmReserved2;

# if WINVER >= _WIN32_WINNT_WIN2K || _WIN32_WINNT >= _WIN32_WINNT_NT4

  DWORD 			dmPanningWidth;
  DWORD 			dmPanningHeight;

# endif  /* _WIN32_WINNT >= WinNT4 */
# endif  /* WINVER >= WinNT4/Win95 */

} DEVMODEA, *LPDEVMODEA, *PDEVMODEA;

typedef struct _devicemodeW
{ WCHAR 			dmDeviceName[CCHDEVICENAME];
  WORD				dmSpecVersion;
  WORD				dmDriverVersion;
  WORD				dmSize;
  WORD				dmDriverExtra;
  DWORD 			dmFields;
  _ANONYMOUS_UNION union
  { _ANONYMOUS_STRUCT struct
    { short			    dmOrientation;
      short			    dmPaperSize;
      short			    dmPaperLength;
      short			    dmPaperWidth;
      short			    dmScale;
      short			    dmCopies;
      short			    dmDefaultSource;
      short			    dmPrintQuality;
    }				  DUMMYSTRUCTNAME;
    _ANONYMOUS_STRUCT struct
    { POINTL			    dmPosition;
      DWORD			    dmDisplayOrientation;
      DWORD			    dmDisplayFixedOutput;
    }				  DUMMYSTRUCTNAME2;
  }				DUMMYUNIONNAME;

  short 			dmColor;
  short 			dmDuplex;
  short 			dmYResolution;
  short 			dmTTOption;
  short 			dmCollate;
  WCHAR 			dmFormName[CCHFORMNAME];
  WORD				dmLogPixels;
  DWORD 			dmBitsPerPel;
  DWORD 			dmPelsWidth;
  DWORD 			dmPelsHeight;
  _ANONYMOUS_UNION union
  { DWORD			  dmDisplayFlags;
    DWORD			  dmNup;
  }				DUMMYUNIONNAME2;

  DWORD 			dmDisplayFrequency;

# if WINVER >= _WIN32_WINNT_NT4  /* also _WIN32_WINDOWS_95 */

  DWORD 			dmICMMethod;
  DWORD 			dmICMIntent;
  DWORD 			dmMediaType;
  DWORD 			dmDitherType;
  DWORD 			dmReserved1;
  DWORD 			dmReserved2;

# if WINVER >= _WIN32_WINNT_WIN2K || _WIN32_WINNT >= _WIN32_WINNT_NT4

  DWORD 			dmPanningWidth;
  DWORD 			dmPanningHeight;

# endif  /* _WIN32_WINNT >= WinNT4 */
# endif  /* WINVER >= WinNT4/Win95 */

} DEVMODEW, *LPDEVMODEW, *PDEVMODEW;

typedef __AW_ALIAS__(DEVMODE), *PDEVMODE, *LPDEVMODE;

typedef struct tagDIBSECTION
{ BITMAP			dsBm;
  BITMAPINFOHEADER		dsBmih;
  DWORD 			dsBitfields[3];
  HANDLE			dshSection;
  DWORD 			dsOffset;
} DIBSECTION;

typedef struct _DOCINFOA
{ int				cbSize;
  LPCSTR			lpszDocName;
  LPCSTR			lpszOutput;
  LPCSTR			lpszDatatype;
  DWORD 			fwType;
} DOCINFOA, *LPDOCINFOA;

typedef struct _DOCINFOW
{ int				cbSize;
  LPCWSTR			lpszDocName;
  LPCWSTR			lpszOutput;
  LPCWSTR			lpszDatatype;
  DWORD 			fwType;
} DOCINFOW, *LPDOCINFOW;

typedef __AW_ALIAS__(DOCINFO), *LPDOCINFO;

typedef struct tagEMR
{ DWORD 			iType;
  DWORD 			nSize;
} EMR, *PEMR;

typedef struct tagEMRANGLEARC
{ EMR				emr;
  POINTL			ptlCenter;
  DWORD 			nRadius;
  FLOAT 			eStartAngle;
  FLOAT 			eSweepAngle;
} EMRANGLEARC, *PEMRANGLEARC;

typedef struct tagEMRARC
{ EMR				emr;
  RECTL 			rclBox;
  POINTL			ptlStart;
  POINTL			ptlEnd;
} EMRARC, *PEMRARC, EMRARCTO, *PEMRARCTO;

typedef struct tagEMRARC  EMRCHORD, *PEMRCHORD, EMRPIE, *PEMRPIE;

typedef struct  _XFORM
{ FLOAT 			eM11;
  FLOAT 			eM12;
  FLOAT 			eM21;
  FLOAT 			eM22;
  FLOAT 			eDx;
  FLOAT 			eDy;
} XFORM, *PXFORM, *LPXFORM;

typedef struct tagEMRBITBLT
{ EMR				emr;
  RECTL 			rclBounds;
  LONG				xDest;
  LONG				yDest;
  LONG				cxDest;
  LONG				cyDest;
  DWORD 			dwRop;
  LONG				xSrc;
  LONG				ySrc;
  XFORM 			xformSrc;
  COLORREF			crBkColorSrc;
  DWORD 			iUsageSrc;
  DWORD 			offBmiSrc;
  DWORD 			offBitsSrc;
  DWORD 			cbBitsSrc;
} EMRBITBLT, *PEMRBITBLT;

typedef struct tagLOGBRUSH
{ UINT				lbStyle;
  COLORREF			lbColor;
  LONG				lbHatch;
} LOGBRUSH, *PLOGBRUSH, *LPLOGBRUSH;
typedef LOGBRUSH PATTERN, *PPATTERN, *LPPATTERN;

typedef struct tagEMRCREATEBRUSHINDIRECT
{ EMR				emr;
  DWORD 			ihBrush;
  LOGBRUSH			lb;
} EMRCREATEBRUSHINDIRECT, *PEMRCREATEBRUSHINDIRECT;
typedef LONG LCSCSTYPE;
typedef LONG LCSGAMUTMATCH;

typedef struct tagLOGCOLORSPACEA
{ DWORD 			lcsSignature;
  DWORD 			lcsVersion;
  DWORD 			lcsSize;
  LCSCSTYPE			lcsCSType;
  LCSGAMUTMATCH 		lcsIntent;
  CIEXYZTRIPLE			lcsEndpoints;
  DWORD 			lcsGammaRed;
  DWORD 			lcsGammaGreen;
  DWORD 			lcsGammaBlue;
  CHAR				lcsFilename[MAX_PATH];
} LOGCOLORSPACEA, *LPLOGCOLORSPACEA;

typedef struct tagLOGCOLORSPACEW
{ DWORD 			lcsSignature;
  DWORD 			lcsVersion;
  DWORD 			lcsSize;
  LCSCSTYPE			lcsCSType;
  LCSGAMUTMATCH 		lcsIntent;
  CIEXYZTRIPLE			lcsEndpoints;
  DWORD 			lcsGammaRed;
  DWORD 			lcsGammaGreen;
  DWORD 			lcsGammaBlue;
  WCHAR 			lcsFilename[MAX_PATH];
} LOGCOLORSPACEW, *LPLOGCOLORSPACEW;

typedef __AW_ALIAS__(LOGCOLORSPACE), *LPLOGCOLORSPACE;

typedef struct tagEMRCREATECOLORSPACE
{ EMR				emr;
  DWORD 			ihCS;
  LOGCOLORSPACEW		lcs;
} EMRCREATECOLORSPACE, *PEMRCREATECOLORSPACE;

typedef struct tagEMRCREATEDIBPATTERNBRUSHPT
{ EMR				emr;
  DWORD 			ihBrush;
  DWORD 			iUsage;
  DWORD 			offBmi;
  DWORD 			cbBmi;
  DWORD 			offBits;
  DWORD 			cbBits;
} EMRCREATEDIBPATTERNBRUSHPT, *PEMRCREATEDIBPATTERNBRUSHPT;

typedef struct tagEMRCREATEMONOBRUSH
{ EMR				emr;
  DWORD 			ihBrush;
  DWORD 			iUsage;
  DWORD 			offBmi;
  DWORD 			cbBmi;
  DWORD 			offBits;
  DWORD 			cbBits;
} EMRCREATEMONOBRUSH, *PEMRCREATEMONOBRUSH;

typedef struct tagPALETTEENTRY
{ BYTE				peRed;
  BYTE				peGreen;
  BYTE				peBlue;
  BYTE				peFlags;
} PALETTEENTRY, *LPPALETTEENTRY, *PPALETTEENTRY;

typedef struct tagLOGPALETTE
{ WORD				palVersion;
  WORD				palNumEntries;
  PALETTEENTRY			palPalEntry[1];
} LOGPALETTE, *NPLOGPALETTE, *PLOGPALETTE, *LPLOGPALETTE;

typedef struct tagEMRCREATEPALETTE
{ EMR				emr;
  DWORD 			ihPal;
  LOGPALETTE			lgpl;
} EMRCREATEPALETTE, *PEMRCREATEPALETTE;

typedef struct tagLOGPEN
{ UINT				lopnStyle;
  POINT 			lopnWidth;
  COLORREF			lopnColor;
} LOGPEN, *PLOGPEN, *LPLOGPEN;

typedef struct tagEMRCREATEPEN
{ EMR				emr;
  DWORD 			ihPen;
  LOGPEN			lopn;
} EMRCREATEPEN, *PEMRCREATEPEN;

typedef struct tagEMRELLIPSE
{ EMR				emr;
  RECTL 			rclBox;
} EMRELLIPSE, *PEMRELLIPSE, EMRRECTANGLE, *PEMRRECTANGLE;

typedef struct tagEMREOF
{ EMR				emr;
  DWORD 			nPalEntries;
  DWORD 			offPalEntries;
  DWORD 			nSizeLast;
} EMREOF, *PEMREOF;

typedef struct tagEMREXCLUDECLIPRECT
{ EMR				emr;
  RECTL 			rclClip;
} EMREXCLUDECLIPRECT, *PEMREXCLUDECLIPRECT;

typedef struct tagEMREXCLUDECLIPRECT  EMRINTERSECTCLIPRECT;
typedef struct tagEMREXCLUDECLIPRECT *PEMRINTERSECTCLIPRECT;

typedef struct tagPANOSE
{ BYTE				bFamilyType;
  BYTE				bSerifStyle;
  BYTE				bWeight;
  BYTE				bProportion;
  BYTE				bContrast;
  BYTE				bStrokeVariation;
  BYTE				bArmStyle;
  BYTE				bLetterform;
  BYTE				bMidline;
  BYTE				bXHeight;
} PANOSE;

typedef struct tagLOGFONTA
{ LONG				lfHeight;
  LONG				lfWidth;
  LONG				lfEscapement;
  LONG				lfOrientation;
  LONG				lfWeight;
  BYTE				lfItalic;
  BYTE				lfUnderline;
  BYTE				lfStrikeOut;
  BYTE				lfCharSet;
  BYTE				lfOutPrecision;
  BYTE				lfClipPrecision;
  BYTE				lfQuality;
  BYTE				lfPitchAndFamily;
  CHAR				lfFaceName[LF_FACESIZE];
} LOGFONTA, *PLOGFONTA, *LPLOGFONTA;

typedef struct tagLOGFONTW
{ LONG				lfHeight;
  LONG				lfWidth;
  LONG				lfEscapement;
  LONG				lfOrientation;
  LONG				lfWeight;
  BYTE				lfItalic;
  BYTE				lfUnderline;
  BYTE				lfStrikeOut;
  BYTE				lfCharSet;
  BYTE				lfOutPrecision;
  BYTE				lfClipPrecision;
  BYTE				lfQuality;
  BYTE				lfPitchAndFamily;
  WCHAR 			lfFaceName[LF_FACESIZE];
} LOGFONTW, *PLOGFONTW, *LPLOGFONTW;

typedef __AW_ALIAS__(LOGFONT), *PLOGFONT, *LPLOGFONT;

typedef struct tagEXTLOGFONTA
{ LOGFONTA			elfLogFont;
  BYTE				elfFullName[LF_FULLFACESIZE];
  BYTE				elfStyle[LF_FACESIZE];
  DWORD 			elfVersion;
  DWORD 			elfStyleSize;
  DWORD 			elfMatch;
  DWORD 			elfReserved;
  BYTE				elfVendorId[ELF_VENDOR_SIZE];
  DWORD 			elfCulture;
  PANOSE			elfPanose;
} EXTLOGFONTA, *PEXTLOGFONTA, *LPEXTLOGFONTA;

typedef struct tagEXTLOGFONTW
{ LOGFONTW			elfLogFont;
  WCHAR 			elfFullName[LF_FULLFACESIZE];
  WCHAR 			elfStyle[LF_FACESIZE];
  DWORD 			elfVersion;
  DWORD 			elfStyleSize;
  DWORD 			elfMatch;
  DWORD 			elfReserved;
  BYTE				elfVendorId[ELF_VENDOR_SIZE];
  DWORD 			elfCulture;
  PANOSE			elfPanose;
} EXTLOGFONTW, *PEXTLOGFONTW, *LPEXTLOGFONTW;

typedef __AW_ALIAS__(EXTLOGFONT), *PEXTLOGFONT, *LPEXTLOGFONT;

typedef struct tagEMREXTCREATEFONTINDIRECTW
{ EMR				emr;
  DWORD 			ihFont;
  EXTLOGFONTW			elfw;
} EMREXTCREATEFONTINDIRECTW, *PEMREXTCREATEFONTINDIRECTW;

typedef struct tagEXTLOGPEN
{ UINT				elpPenStyle;
  UINT				elpWidth;
  UINT				elpBrushStyle;
  COLORREF			elpColor;
  LONG				elpHatch;
  DWORD 			elpNumEntries;
  DWORD 			elpStyleEntry[1];
} EXTLOGPEN, *PEXTLOGPEN, *LPEXTLOGPEN;

typedef struct tagEMREXTCREATEPEN
{ EMR				emr;
  DWORD 			ihPen;
  DWORD 			offBmi;
  DWORD 			cbBmi;
  DWORD 			offBits;
  DWORD 			cbBits;
  EXTLOGPEN			elp;
} EMREXTCREATEPEN, *PEMREXTCREATEPEN;

typedef struct tagEMREXTFLOODFILL
{ EMR				emr;
  POINTL			ptlStart;
  COLORREF			crColor;
  DWORD 			iMode;
} EMREXTFLOODFILL, *PEMREXTFLOODFILL;

typedef struct tagEMREXTSELECTCLIPRGN
{ EMR				emr;
  DWORD 			cbRgnData;
  DWORD 			iMode;
  BYTE				RgnData[1];
} EMREXTSELECTCLIPRGN, *PEMREXTSELECTCLIPRGN;

typedef struct tagEMRTEXT
{ POINTL			ptlReference;
  DWORD 			nChars;
  DWORD 			offString;
  DWORD 			fOptions;
  RECTL 			rcl;
  DWORD 			offDx;
} EMRTEXT, *PEMRTEXT;

typedef struct tagEMREXTTEXTOUTA
{ EMR				emr;
  RECTL 			rclBounds;
  DWORD 			iGraphicsMode;
  FLOAT 			exScale;
  FLOAT 			eyScale;
  EMRTEXT			emrtext;
} EMREXTTEXTOUTA, *PEMREXTTEXTOUTA, EMREXTTEXTOUTW, *PEMREXTTEXTOUTW;

typedef struct tagEMRFILLPATH
{ EMR				emr;
  RECTL 			rclBounds;
} EMRFILLPATH, *PEMRFILLPATH, EMRSTROKEANDFILLPATH, *PEMRSTROKEANDFILLPATH;

typedef struct tagEMRFILLPATH  EMRSTROKEPATH, *PEMRSTROKEPATH;

typedef struct tagEMRFILLRGN
{ EMR				emr;
  RECTL 			rclBounds;
  DWORD 			cbRgnData;
  DWORD 			ihBrush;
  BYTE				RgnData[1];
} EMRFILLRGN, *PEMRFILLRGN;

typedef struct tagEMRFORMAT
{ DWORD 			dSignature;
  DWORD 			nVersion;
  DWORD 			cbData;
  DWORD 			offData;
} EMRFORMAT;

typedef struct tagEMRFRAMERGN
{ EMR				emr;
  RECTL 			rclBounds;
  DWORD 			cbRgnData;
  DWORD 			ihBrush;
  SIZEL 			szlStroke;
  BYTE				RgnData[1];
} EMRFRAMERGN, *PEMRFRAMERGN;

typedef struct tagEMRGDICOMMENT
{ EMR				emr;
  DWORD 			cbData;
  BYTE				Data[1];
} EMRGDICOMMENT, *PEMRGDICOMMENT;

typedef struct tagEMRINVERTRGN
{ EMR				emr;
  RECTL 			rclBounds;
  DWORD 			cbRgnData;
  BYTE				RgnData[1];
} EMRINVERTRGN, *PEMRINVERTRGN, EMRPAINTRGN, *PEMRPAINTRGN;

typedef struct tagEMRLINETO
{ EMR				emr;
  POINTL			ptl;
} EMRLINETO, *PEMRLINETO, EMRMOVETOEX, *PEMRMOVETOEX;

typedef struct tagEMRMASKBLT
{ EMR				emr;
  RECTL 			rclBounds;
  LONG				xDest;
  LONG				yDest;
  LONG				cxDest;
  LONG				cyDest;
  DWORD 			dwRop;
  LONG				xSrc;
  LONG				ySrc;
  XFORM 			xformSrc;
  COLORREF			crBkColorSrc;
  DWORD 			iUsageSrc;
  DWORD 			offBmiSrc;
  DWORD 			cbBmiSrc;
  DWORD 			offBitsSrc;
  DWORD 			cbBitsSrc;
  LONG				xMask;
  LONG				yMask;
  DWORD 			iUsageMask;
  DWORD 			offBmiMask;
  DWORD 			cbBmiMask;
  DWORD 			offBitsMask;
  DWORD 			cbBitsMask;
} EMRMASKBLT, *PEMRMASKBLT;

typedef struct tagEMRMODIFYWORLDTRANSFORM
{ EMR				emr;
  XFORM 			xform;
  DWORD 			iMode;
} EMRMODIFYWORLDTRANSFORM, *PEMRMODIFYWORLDTRANSFORM;

typedef struct tagEMROFFSETCLIPRGN
{ EMR				emr;
  POINTL			ptlOffset;
} EMROFFSETCLIPRGN, *PEMROFFSETCLIPRGN;

typedef struct tagEMRPLGBLT
{ EMR				emr;
  RECTL 			rclBounds;
  POINTL			aptlDest[3];
  LONG				xSrc;
  LONG				ySrc;
  LONG				cxSrc;
  LONG				cySrc;
  XFORM 			xformSrc;
  COLORREF			crBkColorSrc;
  DWORD 			iUsageSrc;
  DWORD 			offBmiSrc;
  DWORD 			cbBmiSrc;
  DWORD 			offBitsSrc;
  DWORD 			cbBitsSrc;
  LONG				xMask;
  LONG				yMask;
  DWORD 			iUsageMask;
  DWORD 			offBmiMask;
  DWORD 			cbBmiMask;
  DWORD 			offBitsMask;
  DWORD 			cbBitsMask;
} EMRPLGBLT, *PEMRPLGBLT;

typedef struct tagEMRPOLYDRAW
{ EMR				emr;
  RECTL 			rclBounds;
  DWORD 			cptl;
  POINTL			aptl[1];
  BYTE				abTypes[1];
} EMRPOLYDRAW, *PEMRPOLYDRAW;

typedef struct tagEMRPOLYDRAW16
{ EMR				emr;
  RECTL 			rclBounds;
  DWORD 			cpts;
  POINTS			apts[1];
  BYTE				abTypes[1];
} EMRPOLYDRAW16, *PEMRPOLYDRAW16;

typedef struct tagEMRPOLYLINE
{ EMR				emr;
  RECTL 			rclBounds;
  DWORD 			cptl;
  POINTL			aptl[1];
} EMRPOLYLINE, *PEMRPOLYLINE, EMRPOLYBEZIER, *PEMRPOLYBEZIER;

typedef struct tagEMRPOLYLINE  EMRPOLYGON, *PEMRPOLYGON;
typedef struct tagEMRPOLYLINE  EMRPOLYBEZIERTO, *PEMRPOLYBEZIERTO;
typedef struct tagEMRPOLYLINE  EMRPOLYLINETO, *PEMRPOLYLINETO;

typedef struct tagEMRPOLYLINE16
{ EMR				emr;
  RECTL 			rclBounds;
  DWORD 			cpts;
  POINTL			apts[1];
} EMRPOLYLINE16, *PEMRPOLYLINE16, EMRPOLYBEZIER16, *PEMRPOLYBEZIER16;

typedef struct tagEMRPOLYLINE16  EMRPOLYGON16, *PEMRPOLYGON16;
typedef struct tagEMRPOLYLINE16  EMRPOLYBEZIERTO16, *PEMRPOLYBEZIERTO16;
typedef struct tagEMRPOLYLINE16  EMRPOLYLINETO16, *PEMRPOLYLINETO16;

typedef struct tagEMRPOLYPOLYLINE
{ EMR				emr;
  RECTL 			rclBounds;
  DWORD 			nPolys;
  DWORD 			cptl;
  DWORD 			aPolyCounts[1];
  POINTL			aptl[1];
} EMRPOLYPOLYLINE, *PEMRPOLYPOLYLINE, EMRPOLYPOLYGON, *PEMRPOLYPOLYGON;

typedef struct tagEMRPOLYPOLYLINE16
{ EMR				emr;
  RECTL 			rclBounds;
  DWORD 			nPolys;
  DWORD 			cpts;
  DWORD 			aPolyCounts[1];
  POINTS			apts[1];
} EMRPOLYPOLYLINE16, *PEMRPOLYPOLYLINE16, EMRPOLYPOLYGON16, *PEMRPOLYPOLYGON16;

typedef struct tagEMRPOLYTEXTOUTA
{ EMR				emr;
  RECTL 			rclBounds;
  DWORD 			iGraphicsMode;
  FLOAT 			exScale;
  FLOAT 			eyScale;
  LONG				cStrings;
  EMRTEXT			aemrtext[1];
} EMRPOLYTEXTOUTA, *PEMRPOLYTEXTOUTA, EMRPOLYTEXTOUTW, *PEMRPOLYTEXTOUTW;

typedef struct tagEMRRESIZEPALETTE
{ EMR				emr;
  DWORD 			ihPal;
  DWORD 			cEntries;
} EMRRESIZEPALETTE, *PEMRRESIZEPALETTE;

typedef struct tagEMRRESTOREDC
{ EMR				emr;
  LONG				iRelative;
} EMRRESTOREDC, *PEMRRESTOREDC;

typedef struct tagEMRROUNDRECT
{ EMR				emr;
  RECTL 			rclBox;
  SIZEL 			szlCorner;
} EMRROUNDRECT, *PEMRROUNDRECT;

typedef struct tagEMRSCALEVIEWPORTEXTEX
{ EMR				emr;
  LONG				xNum;
  LONG				xDenom;
  LONG				yNum;
  LONG				yDenom;
} EMRSCALEVIEWPORTEXTEX, *PEMRSCALEVIEWPORTEXTEX;

typedef struct tagEMRSCALEVIEWPORTEXTEX  EMRSCALEWINDOWEXTEX;
typedef struct tagEMRSCALEVIEWPORTEXTEX *PEMRSCALEWINDOWEXTEX;

typedef struct tagEMRSELECTCOLORSPACE
{ EMR				emr;
  DWORD 			ihCS;
} EMRSELECTCOLORSPACE, *PEMRSELECTCOLORSPACE, EMRDELETECOLORSPACE;

typedef struct tagEMRSELECTCOLORSPACE *PEMRDELETECOLORSPACE;

typedef struct tagEMRSELECTOBJECT
{ EMR				emr;
  DWORD 			ihObject;
} EMRSELECTOBJECT, *PEMRSELECTOBJECT, EMRDELETEOBJECT, *PEMRDELETEOBJECT;

typedef struct tagEMRSELECTPALETTE
{ EMR				emr;
  DWORD 			ihPal;
} EMRSELECTPALETTE, *PEMRSELECTPALETTE;

typedef struct tagEMRSETARCDIRECTION
{ EMR				emr;
  DWORD 			iArcDirection;
} EMRSETARCDIRECTION, *PEMRSETARCDIRECTION;

typedef struct tagEMRSETTEXTCOLOR
{ EMR				emr;
  COLORREF			crColor;
} EMRSETBKCOLOR, *PEMRSETBKCOLOR, EMRSETTEXTCOLOR, *PEMRSETTEXTCOLOR;

typedef struct tagEMRSETCOLORADJUSTMENT
{ EMR				emr;
  COLORADJUSTMENT		ColorAdjustment;
} EMRSETCOLORADJUSTMENT, *PEMRSETCOLORADJUSTMENT;

typedef struct tagEMRSETDIBITSTODEVICE
{ EMR				emr;
  RECTL 			rclBounds;
  LONG				xDest;
  LONG				yDest;
  LONG				xSrc;
  LONG				ySrc;
  LONG				cxSrc;
  LONG				cySrc;
  DWORD 			offBmiSrc;
  DWORD 			cbBmiSrc;
  DWORD 			offBitsSrc;
  DWORD 			cbBitsSrc;
  DWORD 			iUsageSrc;
  DWORD 			iStartScan;
  DWORD 			cScans;
} EMRSETDIBITSTODEVICE, *PEMRSETDIBITSTODEVICE;

typedef struct tagEMRSETMAPPERFLAGS
{ EMR				emr;
  DWORD 			dwFlags;
} EMRSETMAPPERFLAGS, *PEMRSETMAPPERFLAGS;

typedef struct tagEMRSETMITERLIMIT
{ EMR				emr;
  FLOAT 			eMiterLimit;
} EMRSETMITERLIMIT, *PEMRSETMITERLIMIT;

typedef struct tagEMRSETPALETTEENTRIES
{ EMR				emr;
  DWORD 			ihPal;
  DWORD 			iStart;
  DWORD 			cEntries;
  PALETTEENTRY			aPalEntries[1];
} EMRSETPALETTEENTRIES, *PEMRSETPALETTEENTRIES;

typedef struct tagEMRSETPIXELV
{ EMR				emr;
  POINTL			ptlPixel;
  COLORREF			crColor;
} EMRSETPIXELV, *PEMRSETPIXELV;

typedef struct tagEMRSETVIEWPORTEXTEX
{ EMR				emr;
  SIZEL 			szlExtent;
} EMRSETVIEWPORTEXTEX, *PEMRSETVIEWPORTEXTEX, EMRSETWINDOWEXTEX;

typedef struct tagEMRSETVIEWPORTEXTEX *PEMRSETWINDOWEXTEX;

typedef struct tagEMRSETVIEWPORTORGEX
{ EMR				emr;
  POINTL			ptlOrigin;
} EMRSETVIEWPORTORGEX, *PEMRSETVIEWPORTORGEX, EMRSETWINDOWORGEX;

typedef struct tagEMRSETVIEWPORTORGEX *PEMRSETWINDOWORGEX;
typedef struct tagEMRSETVIEWPORTORGEX  EMRSETBRUSHORGEX;
typedef struct tagEMRSETVIEWPORTORGEX *PEMRSETBRUSHORGEX;

typedef struct tagEMRSETWORLDTRANSFORM
{ EMR				emr;
  XFORM 			xform;
} EMRSETWORLDTRANSFORM, *PEMRSETWORLDTRANSFORM;

typedef struct tagEMRSTRETCHBLT
{ EMR				emr;
  RECTL 			rclBounds;
  LONG				xDest;
  LONG				yDest;
  LONG				cxDest;
  LONG				cyDest;
  DWORD 			dwRop;
  LONG				xSrc;
  LONG				ySrc;
  XFORM 			xformSrc;
  COLORREF			crBkColorSrc;
  DWORD 			iUsageSrc;
  DWORD 			offBmiSrc;
  DWORD 			cbBmiSrc;
  DWORD 			offBitsSrc;
  DWORD 			cbBitsSrc;
  LONG				cxSrc;
  LONG				cySrc;
} EMRSTRETCHBLT, *PEMRSTRETCHBLT;

typedef struct tagEMRSTRETCHDIBITS
{ EMR				emr;
  RECTL 			rclBounds;
  LONG				xDest;
  LONG				yDest;
  LONG				xSrc;
  LONG				ySrc;
  LONG				cxSrc;
  LONG				cySrc;
  DWORD 			offBmiSrc;
  DWORD 			cbBmiSrc;
  DWORD 			offBitsSrc;
  DWORD 			cbBitsSrc;
  DWORD 			iUsageSrc;
  DWORD 			dwRop;
  LONG				cxDest;
  LONG				cyDest;
} EMRSTRETCHDIBITS, *PEMRSTRETCHDIBITS;

typedef struct tagABORTPATH
{ EMR				emr;
} EMRABORTPATH, *PEMRABORTPATH, EMRBEGINPATH, *PEMRBEGINPATH;

typedef struct tagABORTPATH  EMRENDPATH, *PEMRENDPATH;
typedef struct tagABORTPATH  EMRCLOSEFIGURE, *PEMRCLOSEFIGURE;
typedef struct tagABORTPATH  EMRFLATTENPATH, *PEMRFLATTENPATH;
typedef struct tagABORTPATH  EMRWIDENPATH, *PEMRWIDENPATH;
typedef struct tagABORTPATH  EMRSETMETARGN, *PEMRSETMETARGN;
typedef struct tagABORTPATH  EMRSAVEDC, *PEMRSAVEDC;
typedef struct tagABORTPATH  EMRREALIZEPALETTE, *PEMRREALIZEPALETTE;

typedef struct tagEMRSELECTCLIPPATH
{ EMR				emr;
  DWORD 			iMode;
} EMRSELECTCLIPPATH, *PEMRSELECTCLIPPATH, EMRSETBKMODE, *PEMRSETBKMODE;

typedef struct tagEMRSELECTCLIPPATH  EMRSETMAPMODE, *PEMRSETMAPMODE;
typedef struct tagEMRSELECTCLIPPATH  EMRSETPOLYFILLMODE, *PEMRSETPOLYFILLMODE;
typedef struct tagEMRSELECTCLIPPATH  EMRSETROP2, *PEMRSETROP2;
typedef struct tagEMRSELECTCLIPPATH  EMRSETSTRETCHBLTMODE;
typedef struct tagEMRSELECTCLIPPATH *PEMRSETSTRETCHBLTMODE;
typedef struct tagEMRSELECTCLIPPATH  EMRSETTEXTALIGN, *PEMRSETTEXTALIGN;
typedef struct tagEMRSELECTCLIPPATH  EMRENABLEICM, *PEMRENABLEICM;

# pragma pack (push, 2)

typedef struct tagMETAHEADER
{ WORD				mtType;
  WORD				mtHeaderSize;
  WORD				mtVersion;
  DWORD 			mtSize;
  WORD				mtNoObjects;
  DWORD 			mtMaxRecord;
  WORD				mtNoParameters;
} METAHEADER, *PMETAHEADER, *LPMETAHEADER;

# pragma pack (pop)

typedef struct tagENHMETAHEADER
{ DWORD 			iType;
  DWORD 			nSize;
  RECTL 			rclBounds;
  RECTL 			rclFrame;
  DWORD 			dSignature;
  DWORD 			nVersion;
  DWORD 			nBytes;
  DWORD 			nRecords;
  WORD				nHandles;
  WORD				sReserved;
  DWORD 			nDescription;
  DWORD 			offDescription;
  DWORD 			nPalEntries;
  SIZEL 			szlDevice;
  SIZEL 			szlMillimeters;

# if WINVER >= _WIN32_WINNT_NT4  /* also _WIN32_WINDOWS_95 */

  DWORD 			cbPixelFormat;
  DWORD 			offPixelFormat;
  DWORD 			bOpenGL;

# if WINVER >= _WIN32_WINNT_WIN2K

  SIZEL 			szlMicrometers;

# endif  /* WINVER >= Win2K */
# endif  /* WINVER >= WinNT4/Win95 */

} ENHMETAHEADER, *LPENHMETAHEADER;

typedef struct tagMETARECORD
{ DWORD 			rdSize;
  WORD				rdFunction;
  WORD				rdParm[1];
} METARECORD, *PMETARECORD, *LPMETARECORD;

typedef struct tagENHMETARECORD
{ DWORD 			iType;
  DWORD 			nSize;
  DWORD 			dParm[1];
} ENHMETARECORD, *LPENHMETARECORD;

typedef struct tagHANDLETABLE
{ HGDIOBJ			objectHandle[1];
} HANDLETABLE, *LPHANDLETABLE;

typedef struct tagTEXTMETRICA
{ LONG				tmHeight;
  LONG				tmAscent;
  LONG				tmDescent;
  LONG				tmInternalLeading;
  LONG				tmExternalLeading;
  LONG				tmAveCharWidth;
  LONG				tmMaxCharWidth;
  LONG				tmWeight;
  LONG				tmOverhang;
  LONG				tmDigitizedAspectX;
  LONG				tmDigitizedAspectY;
  BYTE				tmFirstChar;
  BYTE				tmLastChar;
  BYTE				tmDefaultChar;
  BYTE				tmBreakChar;
  BYTE				tmItalic;
  BYTE				tmUnderlined;
  BYTE				tmStruckOut;
  BYTE				tmPitchAndFamily;
  BYTE				tmCharSet;
} TEXTMETRICA, *PTEXTMETRICA, *LPTEXTMETRICA;

typedef struct tagTEXTMETRICW
{ LONG				tmHeight;
  LONG				tmAscent;
  LONG				tmDescent;
  LONG				tmInternalLeading;
  LONG				tmExternalLeading;
  LONG				tmAveCharWidth;
  LONG				tmMaxCharWidth;
  LONG				tmWeight;
  LONG				tmOverhang;
  LONG				tmDigitizedAspectX;
  LONG				tmDigitizedAspectY;
  WCHAR 			tmFirstChar;
  WCHAR 			tmLastChar;
  WCHAR 			tmDefaultChar;
  WCHAR 			tmBreakChar;
  BYTE				tmItalic;
  BYTE				tmUnderlined;
  BYTE				tmStruckOut;
  BYTE				tmPitchAndFamily;
  BYTE				tmCharSet;
} TEXTMETRICW, *PTEXTMETRICW, *LPTEXTMETRICW;

typedef __AW_ALIAS__(TEXTMETRIC), *PTEXTMETRIC, *LPTEXTMETRIC;

typedef struct _RGNDATAHEADER
{ DWORD 			dwSize;
  DWORD 			iType;
  DWORD 			nCount;
  DWORD 			nRgnSize;
  RECT				rcBound;
} RGNDATAHEADER;

typedef struct _RGNDATA
{ RGNDATAHEADER 		rdh;
  char				Buffer[1];
} RGNDATA, *PRGNDATA, *LPRGNDATA;

#define SYSRGN  4
typedef struct tagGCP_RESULTSA
{ DWORD 			lStructSize;
  LPSTR 			lpOutString;
  UINT				*lpOrder;
  INT				*lpDx;
  INT				*lpCaretPos;
  LPSTR 			lpClass;
  LPWSTR			lpGlyphs;
  UINT				nGlyphs;
  UINT				nMaxFit;
} GCP_RESULTSA, *LPGCP_RESULTSA;

typedef struct tagGCP_RESULTSW
{ DWORD 			lStructSize;
  LPWSTR			lpOutString;
  UINT				*lpOrder;
  INT				*lpDx;
  INT				*lpCaretPos;
  LPSTR 			lpClass;
  LPWSTR			lpGlyphs;
  UINT				nGlyphs;
  UINT				nMaxFit;
} GCP_RESULTSW, *LPGCP_RESULTSW;

typedef __AW_ALIAS__(GCP_RESULTS), *LPGCP_RESULTS;

typedef struct _GLYPHMETRICS
{ UINT				gmBlackBoxX;
  UINT				gmBlackBoxY;
  POINT 			gmptGlyphOrigin;
  short 			gmCellIncX;
  short 			gmCellIncY;
} GLYPHMETRICS, *LPGLYPHMETRICS;

typedef struct tagKERNINGPAIR
{ WORD				wFirst;
  WORD				wSecond;
  int				iKernAmount;
} KERNINGPAIR, *LPKERNINGPAIR;

typedef struct _FIXED
{ WORD				fract;
  short 			value;
} FIXED;

typedef struct _MAT2
{ FIXED 			eM11;
  FIXED 			eM12;
  FIXED 			eM21;
  FIXED 			eM22;
} MAT2, *LPMAT2;

typedef struct _OUTLINETEXTMETRICA
{ UINT				otmSize;
  TEXTMETRICA			otmTextMetrics;
  BYTE				otmFiller;
  PANOSE			otmPanoseNumber;
  UINT				otmfsSelection;
  UINT				otmfsType;
  int				otmsCharSlopeRise;
  int				otmsCharSlopeRun;
  int				otmItalicAngle;
  UINT				otmEMSquare;
  int				otmAscent;
  int				otmDescent;
  UINT				otmLineGap;
  UINT				otmsCapEmHeight;
  UINT				otmsXHeight;
  RECT				otmrcFontBox;
  int				otmMacAscent;
  int				otmMacDescent;
  UINT				otmMacLineGap;
  UINT				otmusMinimumPPEM;
  POINT 			otmptSubscriptSize;
  POINT 			otmptSubscriptOffset;
  POINT 			otmptSuperscriptSize;
  POINT 			otmptSuperscriptOffset;
  UINT				otmsStrikeoutSize;
  int				otmsStrikeoutPosition;
  int				otmsUnderscoreSize;
  int				otmsUnderscorePosition;
  PSTR				otmpFamilyName;
  PSTR				otmpFaceName;
  PSTR				otmpStyleName;
  PSTR				otmpFullName;
} OUTLINETEXTMETRICA, *POUTLINETEXTMETRICA, *LPOUTLINETEXTMETRICA;

typedef struct _OUTLINETEXTMETRICW
{ UINT				otmSize;
  TEXTMETRICW			otmTextMetrics;
  BYTE				otmFiller;
  PANOSE			otmPanoseNumber;
  UINT				otmfsSelection;
  UINT				otmfsType;
  int				otmsCharSlopeRise;
  int				otmsCharSlopeRun;
  int				otmItalicAngle;
  UINT				otmEMSquare;
  int				otmAscent;
  int				otmDescent;
  UINT				otmLineGap;
  UINT				otmsCapEmHeight;
  UINT				otmsXHeight;
  RECT				otmrcFontBox;
  int				otmMacAscent;
  int				otmMacDescent;
  UINT				otmMacLineGap;
  UINT				otmusMinimumPPEM;
  POINT 			otmptSubscriptSize;
  POINT 			otmptSubscriptOffset;
  POINT 			otmptSuperscriptSize;
  POINT 			otmptSuperscriptOffset;
  UINT				otmsStrikeoutSize;
  int				otmsStrikeoutPosition;
  int				otmsUnderscoreSize;
  int				otmsUnderscorePosition;
  PSTR				otmpFamilyName;
  PSTR				otmpFaceName;
  PSTR				otmpStyleName;
  PSTR				otmpFullName;
} OUTLINETEXTMETRICW, *POUTLINETEXTMETRICW, *LPOUTLINETEXTMETRICW;

typedef __AW_ALIAS__(OUTLINETEXTMETRIC);
typedef __AW_ALIAS__(POUTLINETEXTMETRIC);
typedef __AW_ALIAS__(LPOUTLINETEXTMETRIC);

typedef struct _RASTERIZER_STATUS
{ short 			nSize;
  short 			wFlags;
  short 			nLanguageID;
} RASTERIZER_STATUS, *LPRASTERIZER_STATUS;

typedef struct _POLYTEXTA
{ int				x;
  int				y;
  UINT				n;
  LPCSTR			lpstr;
  UINT				uiFlags;
  RECT				rcl;
  int				*pdx;
} POLYTEXTA, *PPOLYTEXTA, *LPPOLYTEXTA;

typedef struct _POLYTEXTW
{ int				x;
  int				y;
  UINT				n;
  LPCWSTR			lpstr;
  UINT				uiFlags;
  RECT				rcl;
  int				*pdx;
} POLYTEXTW, *PPOLYTEXTW, *LPPOLYTEXTW;

typedef __AW_ALIAS__(POLYTEXT), *PPOLYTEXT, *LPPOLYTEXT;

typedef struct tagPIXELFORMATDESCRIPTOR
{ WORD				nSize;
  WORD				nVersion;
  DWORD 			dwFlags;
  BYTE				iPixelType;
  BYTE				cColorBits;
  BYTE				cRedBits;
  BYTE				cRedShift;
  BYTE				cGreenBits;
  BYTE				cGreenShift;
  BYTE				cBlueBits;
  BYTE				cBlueShift;
  BYTE				cAlphaBits;
  BYTE				cAlphaShift;
  BYTE				cAccumBits;
  BYTE				cAccumRedBits;
  BYTE				cAccumGreenBits;
  BYTE				cAccumBlueBits;
  BYTE				cAccumAlphaBits;
  BYTE				cDepthBits;
  BYTE				cStencilBits;
  BYTE				cAuxBuffers;
  BYTE				iLayerType;
  BYTE				bReserved;
  DWORD 			dwLayerMask;
  DWORD 			dwVisibleMask;
  DWORD 			dwDamageMask;
} PIXELFORMATDESCRIPTOR, *PPIXELFORMATDESCRIPTOR, *LPPIXELFORMATDESCRIPTOR;

typedef struct tagMETAFILEPICT
{ LONG				mm;
  LONG				xExt;
  LONG				yExt;
  HMETAFILE			hMF;
} METAFILEPICT, *LPMETAFILEPICT;

typedef struct tagLOCALESIGNATURE
{ DWORD 			lsUsb[4];
  DWORD 			lsCsbDefault[2];
  DWORD 			lsCsbSupported[2];
} LOCALESIGNATURE, *PLOCALESIGNATURE, *LPLOCALESIGNATURE;
typedef LONG LCSTYPE;

# pragma pack (push, 4)

typedef struct tagNEWTEXTMETRICA
{ LONG				tmHeight;
  LONG				tmAscent;
  LONG				tmDescent;
  LONG				tmInternalLeading;
  LONG				tmExternalLeading;
  LONG				tmAveCharWidth;
  LONG				tmMaxCharWidth;
  LONG				tmWeight;
  LONG				tmOverhang;
  LONG				tmDigitizedAspectX;
  LONG				tmDigitizedAspectY;
  BYTE				tmFirstChar;
  BYTE				tmLastChar;
  BYTE				tmDefaultChar;
  BYTE				tmBreakChar;
  BYTE				tmItalic;
  BYTE				tmUnderlined;
  BYTE				tmStruckOut;
  BYTE				tmPitchAndFamily;
  BYTE				tmCharSet;
  DWORD 			ntmFlags;
  UINT				ntmSizeEM;
  UINT				ntmCellHeight;
  UINT				ntmAvgWidth;
} NEWTEXTMETRICA, *PNEWTEXTMETRICA, *LPNEWTEXTMETRICA;

typedef struct tagNEWTEXTMETRICW
{ LONG				tmHeight;
  LONG				tmAscent;
  LONG				tmDescent;
  LONG				tmInternalLeading;
  LONG				tmExternalLeading;
  LONG				tmAveCharWidth;
  LONG				tmMaxCharWidth;
  LONG				tmWeight;
  LONG				tmOverhang;
  LONG				tmDigitizedAspectX;
  LONG				tmDigitizedAspectY;
  WCHAR 			tmFirstChar;
  WCHAR 			tmLastChar;
  WCHAR 			tmDefaultChar;
  WCHAR 			tmBreakChar;
  BYTE				tmItalic;
  BYTE				tmUnderlined;
  BYTE				tmStruckOut;
  BYTE				tmPitchAndFamily;
  BYTE				tmCharSet;
  DWORD 			ntmFlags;
  UINT				ntmSizeEM;
  UINT				ntmCellHeight;
  UINT				ntmAvgWidth;
} NEWTEXTMETRICW, *PNEWTEXTMETRICW, *LPNEWTEXTMETRICW;

# pragma pack (pop)

typedef __AW_ALIAS__(NEWTEXTMETRIC), *PNEWTEXTMETRIC, *LPNEWTEXTMETRIC;

typedef struct tagNEWTEXTMETRICEXA
{ NEWTEXTMETRICA		ntmTm;
  FONTSIGNATURE 		ntmFontSig;
} NEWTEXTMETRICEXA;

typedef struct tagNEWTEXTMETRICEXW
{ NEWTEXTMETRICW		ntmTm;
  FONTSIGNATURE 		ntmFontSig;
} NEWTEXTMETRICEXW;

typedef __AW_ALIAS__(NEWTEXTMETRICEX);

typedef struct tagPELARRAY
{ LONG				paXCount;
  LONG				paYCount;
  LONG				paXExt;
  LONG				paYExt;
  BYTE				paRGBs;
} PELARRAY, *PPELARRAY, *LPPELARRAY;

typedef struct tagENUMLOGFONTA
{ LOGFONTA			elfLogFont;
  BYTE				elfFullName[LF_FULLFACESIZE];
  BYTE				elfStyle[LF_FACESIZE];
} ENUMLOGFONTA, *LPENUMLOGFONTA;

typedef struct tagENUMLOGFONTW
{ LOGFONTW			elfLogFont;
  WCHAR 			elfFullName[LF_FULLFACESIZE];
  WCHAR 			elfStyle[LF_FACESIZE];
} ENUMLOGFONTW, *LPENUMLOGFONTW;

typedef __AW_ALIAS__(ENUMLOGFONT), *LPENUMLOGFONT;

typedef struct tagENUMLOGFONTEXA
{ LOGFONTA			elfLogFont;
  BYTE				elfFullName[LF_FULLFACESIZE];
  BYTE				elfStyle[LF_FACESIZE];
  BYTE				elfScript[LF_FACESIZE];
} ENUMLOGFONTEXA, *LPENUMLOGFONTEXA;

typedef struct tagENUMLOGFONTEXW
{ LOGFONTW			elfLogFont;
  WCHAR 			elfFullName[LF_FULLFACESIZE];
  WCHAR 			elfStyle[LF_FACESIZE];
  WCHAR 			elfScript[LF_FACESIZE];
} ENUMLOGFONTEXW, *LPENUMLOGFONTEXW;

typedef __AW_ALIAS__(ENUMLOGFONTEX), *LPENUMLOGFONTEX;

typedef struct tagPOINTFX
{ FIXED 			x;
  FIXED 			y;
} POINTFX, *LPPOINTFX;

typedef struct tagTTPOLYCURVE
{ WORD				wType;
  WORD				cpfx;
  POINTFX			apfx[1];
} TTPOLYCURVE, *LPTTPOLYCURVE;

typedef struct tagTTPOLYGONHEADER
{ DWORD 			cb;
  DWORD 			dwType;
  POINTFX			pfxStart;
} TTPOLYGONHEADER, *LPTTPOLYGONHEADER;

typedef struct _POINTFLOAT
{ FLOAT 			x;
  FLOAT 			y;
} POINTFLOAT, *PPOINTFLOAT;

typedef struct _GLYPHMETRICSFLOAT
{ FLOAT 			gmfBlackBoxX;
  FLOAT 			gmfBlackBoxY;
  POINTFLOAT			gmfptGlyphOrigin;
  FLOAT 			gmfCellIncX;
  FLOAT 			gmfCellIncY;
} GLYPHMETRICSFLOAT, *PGLYPHMETRICSFLOAT, *LPGLYPHMETRICSFLOAT;

typedef struct tagLAYERPLANEDESCRIPTOR
{ WORD				nSize;
  WORD				nVersion;
  DWORD 			dwFlags;
  BYTE				iPixelType;
  BYTE				cColorBits;
  BYTE				cRedBits;
  BYTE				cRedShift;
  BYTE				cGreenBits;
  BYTE				cGreenShift;
  BYTE				cBlueBits;
  BYTE				cBlueShift;
  BYTE				cAlphaBits;
  BYTE				cAlphaShift;
  BYTE				cAccumBits;
  BYTE				cAccumRedBits;
  BYTE				cAccumGreenBits;
  BYTE				cAccumBlueBits;
  BYTE				cAccumAlphaBits;
  BYTE				cDepthBits;
  BYTE				cStencilBits;
  BYTE				cAuxBuffers;
  BYTE				iLayerPlane;
  BYTE				bReserved;
  COLORREF			crTransparent;
} LAYERPLANEDESCRIPTOR, *PLAYERPLANEDESCRIPTOR, *LPLAYERPLANEDESCRIPTOR;

typedef struct _BLENDFUNCTION
{ BYTE				BlendOp;
  BYTE				BlendFlags;
  BYTE				SourceConstantAlpha;
  BYTE				AlphaFormat;
} BLENDFUNCTION, *PBLENDFUNCTION, *LPBLENDFUNCTION;

#define MM_MAX_NUMAXES  16
typedef struct _DESIGNVECTOR
{ DWORD 			dvReserved;
  DWORD 			dvNumAxes;
  LONG				dvValues[MM_MAX_NUMAXES];
} DESIGNVECTOR, *PDESIGNVECTOR, FAR *LPDESIGNVECTOR;

typedef USHORT COLOR16;

typedef struct _TRIVERTEX
{ LONG				x;
  LONG				y;
  COLOR16			Red;
  COLOR16			Green;
  COLOR16			Blue;
  COLOR16			Alpha;
} TRIVERTEX, *PTRIVERTEX, *LPTRIVERTEX;

typedef struct _GRADIENT_TRIANGLE
{ ULONG 			Vertex1;
  ULONG 			Vertex2;
  ULONG 			Vertex3;
} GRADIENT_TRIANGLE, *PGRADIENT_TRIANGLE, *LPGRADIENT_TRIANGLE;

typedef struct _GRADIENT_RECT
{ ULONG 			UpperLeft;
  ULONG 			LowerRight;
}GRADIENT_RECT, *PGRADIENT_RECT, *LPGRADIENT_RECT;

typedef struct _DISPLAY_DEVICEA
{ DWORD 			cb;
  CHAR				DeviceName[32];
  CHAR				DeviceString[128];
  DWORD 			StateFlags;
  CHAR				DeviceID[128];
  CHAR				DeviceKey[128];
} DISPLAY_DEVICEA, *PDISPLAY_DEVICEA, *LPDISPLAY_DEVICEA;

typedef struct _DISPLAY_DEVICEW
{ DWORD 			cb;
  WCHAR 			DeviceName[32];
  WCHAR 			DeviceString[128];
  DWORD 			StateFlags;
  WCHAR 			DeviceID[128];
  WCHAR 			DeviceKey[128];
} DISPLAY_DEVICEW, *PDISPLAY_DEVICEW, *LPDISPLAY_DEVICEW;

typedef __AW_ALIAS__(DISPLAY_DEVICE), *PDISPLAY_DEVICE, *LPDISPLAY_DEVICE;

typedef BOOL (CALLBACK *ABORTPROC) (HDC, int);

typedef int (CALLBACK *MFENUMPROC)
(HDC, HANDLETABLE *, METARECORD *, int, LPARAM);

typedef int (CALLBACK *ENHMFENUMPROC)
(HDC, HANDLETABLE *, const ENHMETARECORD *, int, LPARAM);

typedef int (CALLBACK *OLDFONTENUMPROCA)
(const LOGFONTA *, const TEXTMETRICA *, DWORD, LPARAM);

typedef int (CALLBACK *OLDFONTENUMPROCW)
(const LOGFONTW *, const TEXTMETRICW *, DWORD, LPARAM);

#define FONTENUMPROC  __AW_SUFFIXED__(FONTENUMPROC)
typedef OLDFONTENUMPROCA FONTENUMPROCA;
typedef OLDFONTENUMPROCW FONTENUMPROCW;

#define ICMENUMPROC  __AW_SUFFIXED__(ICMENUMPROC)
typedef int (CALLBACK *ICMENUMPROCA) (LPSTR, LPARAM);
typedef int (CALLBACK *ICMENUMPROCW) (LPWSTR, LPARAM);

typedef void (CALLBACK *GOBJENUMPROC) (LPVOID, LPARAM);
typedef void (CALLBACK *LINEDDAPROC) (int, int, LPARAM);
typedef UINT (CALLBACK *LPFNDEVMODE)
(HWND, HMODULE, LPDEVMODEA, LPSTR, LPSTR, LPDEVMODEA, LPSTR, UINT);

typedef DWORD (CALLBACK *LPFNDEVCAPS) (LPSTR, LPSTR, UINT, LPSTR, LPDEVMODEA);

#define MAKEPOINTS(l)	   (*((POINTS *) & (l)))
#define MAKEROP4(f,b)	   (DWORD)((((b) << 8) & 0xFF000000) | (f))

#define CMYK(c,m,y,k)	   \
((COLORREF)((BYTE)(k) | ((BYTE)(y) << 8) | ((BYTE)(m) << 16) | \
  ((BYTE)(c) << 24))  \
)
#define GetCValue(cmyk)    ((BYTE)(cmyk))
#define GetMValue(cmyk)    ((BYTE)((cmyk) >>  8))
#define GetYValue(cmyk)    ((BYTE)((cmyk) >> 16))
#define GetKValue(cmyk)    ((BYTE)((cmyk) >> 24))

#define RGB(r,g,b)	   \
((COLORREF)((BYTE)(r) | ((BYTE)(g) << 8) | ((BYTE)(b) << 16)))

#define GetRValue(rgb)	   ((BYTE)(rgb))
#define GetGValue(rgb)	   ((BYTE)(((WORD)(rgb)) >> 8))
#define GetBValue(rgb)	   ((BYTE)((rgb) >> 16))

#define PALETTEINDEX(i)    ((0x01000000 | (COLORREF)(WORD)(i)))
#define PALETTERGB(r,g,b)  (0x02000000 | RGB(r,g,b))

WINGDIAPI int WINAPI AbortDoc (HDC);
WINGDIAPI BOOL WINAPI AbortPath (HDC);

#define AddFontResource  __AW_SUFFIXED__(AddFontResource)
WINGDIAPI int WINAPI AddFontResourceA (LPCSTR);
WINGDIAPI int WINAPI AddFontResourceW (LPCWSTR);

WINGDIAPI BOOL WINAPI AngleArc (HDC, int, int, DWORD, FLOAT, FLOAT);

WINGDIAPI BOOL WINAPI AnimatePalette
(HPALETTE, UINT, UINT, const PALETTEENTRY *);

WINGDIAPI BOOL WINAPI Arc (HDC, int, int, int, int, int, int, int, int);
WINGDIAPI BOOL WINAPI ArcTo (HDC, int, int, int, int, int, int, int, int);
WINGDIAPI BOOL WINAPI BeginPath (HDC);
WINGDIAPI BOOL WINAPI BitBlt (HDC, int, int, int, int, HDC, int, int, DWORD);
WINGDIAPI BOOL WINAPI CancelDC (HDC);
WINGDIAPI BOOL WINAPI CheckColorsInGamut (HDC, PVOID, PVOID, DWORD);
WINGDIAPI BOOL WINAPI Chord (HDC, int, int, int, int, int, int, int, int);
WINGDIAPI int WINAPI ChoosePixelFormat (HDC, CONST PIXELFORMATDESCRIPTOR *);
WINGDIAPI HENHMETAFILE WINAPI CloseEnhMetaFile (HDC);
WINGDIAPI BOOL WINAPI CloseFigure (HDC);
WINGDIAPI HMETAFILE WINAPI CloseMetaFile (HDC);

#if _WIN32_WINDOWS >= _WIN32_WINDOWS_98 || _WIN32_WINNT >= _WIN32_WINNT_WIN2K
WINGDIAPI BOOL WINAPI ColorCorrectPalette (HDC, HPALETTE, DWORD, DWORD);
WINGDIAPI BOOL WINAPI ColorMatchToTarget (HDC, HDC, DWORD);
#endif	/* WINVER >= Win98/Win2K */

WINGDIAPI int WINAPI CombineRgn (HRGN, HRGN, HRGN, int);
WINGDIAPI BOOL WINAPI CombineTransform (LPXFORM, const XFORM *, const XFORM *);

#define CopyEnhMetaFile  __AW_SUFFIXED__(CopyEnhMetaFile)
WINGDIAPI HENHMETAFILE WINAPI CopyEnhMetaFileA (HENHMETAFILE, LPCSTR);
WINGDIAPI HENHMETAFILE WINAPI CopyEnhMetaFileW (HENHMETAFILE, LPCWSTR);

#define CopyMetaFile  __AW_SUFFIXED__(CopyMetaFile)
WINGDIAPI HMETAFILE WINAPI CopyMetaFileA (HMETAFILE, LPCSTR);
WINGDIAPI HMETAFILE WINAPI CopyMetaFileW (HMETAFILE, LPCWSTR);

WINGDIAPI HBITMAP WINAPI CreateBitmap (int, int, UINT, UINT, PCVOID);
WINGDIAPI HBITMAP WINAPI CreateBitmapIndirect (const BITMAP *);
WINGDIAPI HBRUSH WINAPI CreateBrushIndirect (const LOGBRUSH *);

#define CreateColorSpace  __AW_SUFFIXED__(CreateColorSpace)
WINGDIAPI HCOLORSPACE WINAPI CreateColorSpaceA (LPLOGCOLORSPACEA);
WINGDIAPI HCOLORSPACE WINAPI CreateColorSpaceW (LPLOGCOLORSPACEW);

WINGDIAPI HBITMAP WINAPI CreateCompatibleBitmap (HDC, int, int);
WINGDIAPI HDC WINAPI CreateCompatibleDC (HDC);

#define CreateDC  __AW_SUFFIXED__(CreateDC)
WINGDIAPI HDC WINAPI CreateDCA (LPCSTR, LPCSTR, LPCSTR, const DEVMODEA *);
WINGDIAPI HDC WINAPI CreateDCW (LPCWSTR, LPCWSTR, LPCWSTR, const DEVMODEW *);

WINGDIAPI HBITMAP WINAPI CreateDIBitmap
(HDC, const BITMAPINFOHEADER *, DWORD, PCVOID, const BITMAPINFO *, UINT);

WINGDIAPI HBRUSH WINAPI CreateDIBPatternBrush (HGLOBAL, UINT);
WINGDIAPI HBRUSH WINAPI CreateDIBPatternBrushPt (PCVOID, UINT);

WINGDIAPI HBITMAP WINAPI CreateDIBSection
(HDC, const BITMAPINFO *, UINT, void **, HANDLE, DWORD);

WINGDIAPI HBITMAP WINAPI CreateDiscardableBitmap (HDC, int, int);
WINGDIAPI HRGN WINAPI CreateEllipticRgn (int, int, int, int);
WINGDIAPI HRGN WINAPI CreateEllipticRgnIndirect (LPCRECT);

#define CreateEnhMetaFile  __AW_SUFFIXED__(CreateEnhMetaFile)
WINGDIAPI HDC WINAPI CreateEnhMetaFileA (HDC, LPCSTR, LPCRECT, LPCSTR);
WINGDIAPI HDC WINAPI CreateEnhMetaFileW (HDC, LPCWSTR, LPCRECT, LPCWSTR);

#define CreateFont  __AW_SUFFIXED__(CreateFont)
WINGDIAPI HFONT WINAPI CreateFontA
(int, int, int, int, int, DWORD, DWORD, DWORD, DWORD, DWORD,
 DWORD, DWORD, DWORD, LPCSTR
);

WINGDIAPI HFONT WINAPI CreateFontW
(int, int, int, int, int, DWORD, DWORD, DWORD, DWORD, DWORD,
 DWORD, DWORD, DWORD, LPCWSTR
);


#define CreateFontIndirect  __AW_SUFFIXED__(CreateFontIndirect)
WINGDIAPI HFONT WINAPI CreateFontIndirectA (const LOGFONTA *);
WINGDIAPI HFONT WINAPI CreateFontIndirectW (const LOGFONTW *);

WINGDIAPI HPALETTE WINAPI CreateHalftonePalette (HDC);
WINGDIAPI HBRUSH WINAPI CreateHatchBrush (int, COLORREF);

#define CreateIC  __AW_SUFFIXED__(CreateIC)
WINGDIAPI HDC WINAPI CreateICA (LPCSTR, LPCSTR, LPCSTR, const DEVMODEA *);
WINGDIAPI HDC WINAPI CreateICW (LPCWSTR, LPCWSTR, LPCWSTR, const DEVMODEW *);

#define CreateMetaFile  __AW_SUFFIXED__(CreateMetaFile)
WINGDIAPI HDC WINAPI CreateMetaFileA (LPCSTR);
WINGDIAPI HDC WINAPI CreateMetaFileW (LPCWSTR);

WINGDIAPI HPALETTE WINAPI CreatePalette (const LOGPALETTE *);
WINGDIAPI HBRUSH WINAPI CreatePatternBrush (HBITMAP);
WINGDIAPI HPEN WINAPI CreatePen (int, int, COLORREF);
WINGDIAPI HPEN WINAPI CreatePenIndirect (const LOGPEN *);
WINGDIAPI HRGN WINAPI CreatePolygonRgn (const POINT *, int, int);

WINGDIAPI HRGN WINAPI CreatePolyPolygonRgn
(const POINT *, const INT *, int, int);

WINGDIAPI HRGN WINAPI CreateRectRgn (int, int, int, int);
WINGDIAPI HRGN WINAPI CreateRectRgnIndirect (LPCRECT);
WINGDIAPI HRGN WINAPI CreateRoundRectRgn (int, int, int, int, int, int);

#define CreateScalableFontResource  __AW_SUFFIXED__(CreateScalableFontResource)
WINGDIAPI BOOL WINAPI CreateScalableFontResourceA
(DWORD, LPCSTR, LPCSTR, LPCSTR);

WINGDIAPI BOOL WINAPI CreateScalableFontResourceW
(DWORD, LPCWSTR, LPCWSTR, LPCWSTR);

WINGDIAPI HBRUSH WINAPI CreateSolidBrush (COLORREF);
WINGDIAPI BOOL WINAPI DeleteColorSpace (HCOLORSPACE);
WINGDIAPI BOOL WINAPI DeleteDC (HDC);
WINGDIAPI BOOL WINAPI DeleteEnhMetaFile (HENHMETAFILE);
WINGDIAPI BOOL WINAPI DeleteMetaFile (HMETAFILE);
WINGDIAPI BOOL WINAPI DeleteObject (HGDIOBJ);

WINGDIAPI int WINAPI DescribePixelFormat
(HDC, int, UINT, LPPIXELFORMATDESCRIPTOR);


#define DeviceCapabilities  __AW_SUFFIXED__(DeviceCapabilities)
WINGDIAPI DWORD WINAPI DeviceCapabilitiesA
(LPCSTR, LPCSTR, WORD, LPSTR, const DEVMODEA *);

WINGDIAPI DWORD WINAPI DeviceCapabilitiesW
(LPCWSTR, LPCWSTR, WORD, LPWSTR, const DEVMODEW *);

WINGDIAPI BOOL WINAPI DPtoLP (HDC, LPPOINT, int);
WINGDIAPI int WINAPI DrawEscape (HDC, int, int, LPCSTR);
WINGDIAPI BOOL WINAPI Ellipse (HDC, int, int, int, int);
WINGDIAPI int WINAPI EndDoc (HDC);
WINGDIAPI int WINAPI EndPage (HDC);
WINGDIAPI BOOL WINAPI EndPath (HDC);

WINGDIAPI BOOL WINAPI EnumEnhMetaFile
(HDC, HENHMETAFILE, ENHMFENUMPROC, PVOID, LPCRECT);

#define EnumFontFamilies  __AW_SUFFIXED__(EnumFontFamilies)
WINGDIAPI int WINAPI EnumFontFamiliesA (HDC, LPCSTR, FONTENUMPROCA, LPARAM);
WINGDIAPI int WINAPI EnumFontFamiliesW (HDC, LPCWSTR, FONTENUMPROCW, LPARAM);

#define EnumFontFamiliesEx  __AW_SUFFIXED__(EnumFontFamiliesEx)
WINGDIAPI int WINAPI EnumFontFamiliesExA
(HDC, PLOGFONTA, FONTENUMPROCA, LPARAM, DWORD);

WINGDIAPI int WINAPI EnumFontFamiliesExW
(HDC, PLOGFONTW, FONTENUMPROCW, LPARAM, DWORD);

#define EnumFonts  __AW_SUFFIXED__(EnumFonts)
WINGDIAPI int WINAPI EnumFontsA (HDC, LPCSTR, FONTENUMPROCA, LPARAM);
WINGDIAPI int WINAPI EnumFontsW (HDC, LPCWSTR, FONTENUMPROCW, LPARAM);

#define EnumICMProfiles  __AW_SUFFIXED__(EnumICMProfiles)
WINGDIAPI int WINAPI EnumICMProfilesA (HDC, ICMENUMPROCA, LPARAM);
WINGDIAPI int WINAPI EnumICMProfilesW (HDC, ICMENUMPROCW, LPARAM);

WINGDIAPI BOOL WINAPI EnumMetaFile (HDC, HMETAFILE, MFENUMPROC, LPARAM);
WINGDIAPI int WINAPI EnumObjects (HDC, int, GOBJENUMPROC, LPARAM);
WINGDIAPI BOOL WINAPI EqualRgn (HRGN, HRGN);
WINGDIAPI int WINAPI Escape (HDC, int, int, LPCSTR, PVOID);
WINGDIAPI int WINAPI ExcludeClipRect (HDC, int, int, int, int);
WINGDIAPI int WINAPI ExcludeUpdateRgn (HDC, HWND);

WINGDIAPI HPEN WINAPI ExtCreatePen
(DWORD, DWORD, const LOGBRUSH *, DWORD, const DWORD *);

WINGDIAPI HRGN WINAPI ExtCreateRegion (const XFORM *, DWORD, const RGNDATA *);
WINGDIAPI int WINAPI ExtEscape (HDC, int, int, LPCSTR, int, LPSTR);
WINGDIAPI BOOL WINAPI ExtFloodFill (HDC, int, int, COLORREF, UINT);
WINGDIAPI int WINAPI ExtSelectClipRgn (HDC, HRGN, int);

#define ExtTextOut  __AW_SUFFIXED__(ExtTextOut)
WINGDIAPI BOOL WINAPI ExtTextOutA
(HDC, int, int, UINT, LPCRECT, LPCSTR, UINT, const INT *);

WINGDIAPI BOOL WINAPI ExtTextOutW
(HDC, int, int, UINT, LPCRECT, LPCWSTR, UINT, const INT *);

WINGDIAPI BOOL WINAPI FillPath (HDC);
WINGDIAPI int WINAPI FillRect (HDC, LPCRECT, HBRUSH);
WINGDIAPI int WINAPI FillRgn (HDC, HRGN, HBRUSH);
WINGDIAPI BOOL WINAPI FixBrushOrgEx (HDC, int, int, LPPOINT);
WINGDIAPI BOOL WINAPI FlattenPath (HDC);
WINGDIAPI BOOL WINAPI FloodFill (HDC, int, int, COLORREF);
WINGDIAPI BOOL WINAPI GdiComment (HDC, UINT, const BYTE *);
WINGDIAPI BOOL WINAPI GdiFlush (void);
WINGDIAPI DWORD WINAPI GdiGetBatchLimit (void);
WINGDIAPI DWORD WINAPI GdiSetBatchLimit (DWORD);
WINGDIAPI int WINAPI GetArcDirection (HDC);
WINGDIAPI BOOL WINAPI GetAspectRatioFilterEx (HDC, LPSIZE);
WINGDIAPI LONG WINAPI GetBitmapBits (HBITMAP, LONG, PVOID);
WINGDIAPI BOOL WINAPI GetBitmapDimensionEx (HBITMAP, LPSIZE);
WINGDIAPI COLORREF WINAPI GetBkColor (HDC);
WINGDIAPI int WINAPI GetBkMode (HDC);
WINGDIAPI UINT WINAPI GetBoundsRect (HDC, LPRECT, UINT);
WINGDIAPI BOOL WINAPI GetBrushOrgEx (HDC, LPPOINT);

#define GetCharABCWidths  __AW_SUFFIXED__(GetCharABCWidths)
WINGDIAPI BOOL WINAPI GetCharABCWidthsA (HDC, UINT, UINT, LPABC);
WINGDIAPI BOOL WINAPI GetCharABCWidthsW (HDC, UINT, UINT, LPABC);

#define GetCharABCWidthsFloat  __AW_SUFFIXED__(GetCharABCWidthsFloat)
WINGDIAPI BOOL WINAPI GetCharABCWidthsFloatA (HDC, UINT, UINT, LPABCFLOAT);
WINGDIAPI BOOL WINAPI GetCharABCWidthsFloatW (HDC, UINT, UINT, LPABCFLOAT);

#define GetCharacterPlacement  __AW_SUFFIXED__(GetCharacterPlacement)
WINGDIAPI DWORD WINAPI GetCharacterPlacementA
(HDC, LPCSTR, int, int, LPGCP_RESULTSA, DWORD);

WINGDIAPI DWORD WINAPI GetCharacterPlacementW
(HDC, LPCWSTR, int, int, LPGCP_RESULTSW, DWORD);

#define GetCharWidth32  __AW_SUFFIXED__(GetCharWidth32)
WINGDIAPI BOOL WINAPI GetCharWidth32A (HDC, UINT, UINT, LPINT);
WINGDIAPI BOOL WINAPI GetCharWidth32W (HDC, UINT, UINT, LPINT);

#define GetCharWidth  __AW_SUFFIXED__(GetCharWidth)
WINGDIAPI BOOL WINAPI GetCharWidthA (HDC, UINT, UINT, LPINT);
WINGDIAPI BOOL WINAPI GetCharWidthW (HDC, UINT, UINT, LPINT);

#define GetCharWidthFloat  __AW_SUFFIXED__(GetCharWidthFloat)
WINGDIAPI BOOL WINAPI GetCharWidthFloatA (HDC, UINT, UINT, PFLOAT);
WINGDIAPI BOOL WINAPI GetCharWidthFloatW (HDC, UINT, UINT, PFLOAT);

WINGDIAPI int WINAPI GetClipBox (HDC, LPRECT);
WINGDIAPI int WINAPI GetClipRgn (HDC, HRGN);
WINGDIAPI BOOL WINAPI GetColorAdjustment (HDC, LPCOLORADJUSTMENT);
WINGDIAPI HANDLE WINAPI GetColorSpace (HDC);
WINGDIAPI HGDIOBJ WINAPI GetCurrentObject (HDC, UINT);
WINGDIAPI BOOL WINAPI GetCurrentPositionEx (HDC, LPPOINT);
WINGDIAPI HCURSOR WINAPI GetCursor (void);

WINGDIAPI BOOL WINAPI GetDCOrgEx (HDC, LPPOINT);
WINGDIAPI int WINAPI GetDeviceCaps (HDC, int);
WINGDIAPI BOOL WINAPI GetDeviceGammaRamp (HDC, PVOID);
WINGDIAPI UINT WINAPI GetDIBColorTable (HDC, UINT, UINT, RGBQUAD *);

WINGDIAPI int WINAPI GetDIBits
(HDC, HBITMAP, UINT, UINT, PVOID, LPBITMAPINFO, UINT);

#define GetEnhMetaFile  __AW_SUFFIXED__(GetEnhMetaFile)
WINGDIAPI HENHMETAFILE WINAPI GetEnhMetaFileA (LPCSTR);
WINGDIAPI HENHMETAFILE WINAPI GetEnhMetaFileW (LPCWSTR);

WINGDIAPI UINT WINAPI GetEnhMetaFileBits (HENHMETAFILE, UINT, LPBYTE);

#define GetEnhMetaFileDescription  __AW_SUFFIXED__(GetEnhMetaFileDescription)
WINGDIAPI UINT WINAPI GetEnhMetaFileDescriptionA (HENHMETAFILE, UINT, LPSTR);
WINGDIAPI UINT WINAPI GetEnhMetaFileDescriptionW (HENHMETAFILE, UINT, LPWSTR);

WINGDIAPI UINT WINAPI GetEnhMetaFileHeader
(HENHMETAFILE, UINT, LPENHMETAHEADER);

WINGDIAPI UINT WINAPI GetEnhMetaFilePaletteEntries
(HENHMETAFILE, UINT, LPPALETTEENTRY);

WINGDIAPI UINT WINAPI GetEnhMetaFilePixelFormat
(HENHMETAFILE, DWORD, CONST PIXELFORMATDESCRIPTOR *);

WINGDIAPI DWORD WINAPI GetFontData (HDC, DWORD, DWORD, PVOID, DWORD);
WINGDIAPI DWORD WINAPI GetFontLanguageInfo (HDC);

#define GetGlyphOutline  __AW_SUFFIXED__(GetGlyphOutline)
WINGDIAPI DWORD WINAPI GetGlyphOutlineA
(HDC, UINT, UINT, LPGLYPHMETRICS, DWORD, PVOID, const MAT2 *);

WINGDIAPI DWORD WINAPI GetGlyphOutlineW
(HDC, UINT, UINT, LPGLYPHMETRICS, DWORD, PVOID, const MAT2 *);

WINGDIAPI int WINAPI GetGraphicsMode (HDC);

#define GetICMProfile  __AW_SUFFIXED__(GetICMProfile)
WINGDIAPI BOOL WINAPI GetICMProfileA (HDC, LPDWORD, LPSTR);
WINGDIAPI BOOL WINAPI GetICMProfileW (HDC, LPDWORD, LPWSTR);

#define GetKerningPairs  __AW_SUFFIXED__(GetKerningPairs)
WINGDIAPI DWORD WINAPI GetKerningPairsA (HDC, DWORD, LPKERNINGPAIR);
WINGDIAPI DWORD WINAPI GetKerningPairsW (HDC, DWORD, LPKERNINGPAIR);

#define GetLogColorSpace  __AW_SUFFIXED__(GetLogColorSpace)
WINGDIAPI BOOL WINAPI GetLogColorSpaceA (HCOLORSPACE, LPLOGCOLORSPACEA, DWORD);
WINGDIAPI BOOL WINAPI GetLogColorSpaceW (HCOLORSPACE, LPLOGCOLORSPACEW, DWORD);

WINGDIAPI int WINAPI GetMapMode (HDC);

#define GetMetaFile  __AW_SUFFIXED__(GetMetaFile)
WINGDIAPI HMETAFILE WINAPI GetMetaFileA (LPCSTR);
WINGDIAPI HMETAFILE WINAPI GetMetaFileW (LPCWSTR);

WINGDIAPI UINT WINAPI GetMetaFileBitsEx (HMETAFILE, UINT, PVOID);
WINGDIAPI int WINAPI GetMetaRgn (HDC, HRGN);
WINGDIAPI BOOL WINAPI GetMiterLimit (HDC, PFLOAT);
WINGDIAPI COLORREF WINAPI GetNearestColor (HDC, COLORREF);
WINGDIAPI UINT WINAPI GetNearestPaletteIndex (HPALETTE, COLORREF);

#define GetObject  __AW_SUFFIXED__(GetObject)
WINGDIAPI int WINAPI GetObjectA (HGDIOBJ, int, PVOID);
WINGDIAPI int WINAPI GetObjectW (HGDIOBJ, int, PVOID);

WINGDIAPI DWORD WINAPI GetObjectType (HGDIOBJ);

#define GetOutlineTextMetrics  __AW_SUFFIXED__(GetOutlineTextMetrics)
WINGDIAPI UINT WINAPI GetOutlineTextMetricsA (HDC, UINT, LPOUTLINETEXTMETRICA);
WINGDIAPI UINT WINAPI GetOutlineTextMetricsW (HDC, UINT, LPOUTLINETEXTMETRICW);

WINGDIAPI UINT WINAPI GetPaletteEntries (HPALETTE, UINT, UINT, LPPALETTEENTRY);
WINGDIAPI int WINAPI GetPath (HDC, LPPOINT, PBYTE, int);
WINGDIAPI COLORREF WINAPI GetPixel (HDC, int, int);
WINGDIAPI int WINAPI GetPixelFormat (HDC);
WINGDIAPI int WINAPI GetPolyFillMode (HDC);
WINGDIAPI BOOL WINAPI GetRasterizerCaps (LPRASTERIZER_STATUS, UINT);
WINGDIAPI int WINAPI GetRandomRgn (HDC, HRGN, INT);
WINGDIAPI DWORD WINAPI GetRegionData (HRGN, DWORD, LPRGNDATA);
WINGDIAPI int WINAPI GetRgnBox (HRGN, LPRECT);
WINGDIAPI int WINAPI GetROP2 (HDC);
WINGDIAPI HGDIOBJ WINAPI GetStockObject (int);
WINGDIAPI int WINAPI GetStretchBltMode (HDC);

WINGDIAPI UINT WINAPI GetSystemPaletteEntries
(HDC, UINT, UINT, LPPALETTEENTRY);

WINGDIAPI UINT WINAPI GetSystemPaletteUse (HDC);
WINGDIAPI UINT WINAPI GetTextAlign (HDC);
WINGDIAPI int WINAPI GetTextCharacterExtra (HDC);
WINGDIAPI int WINAPI GetTextCharset (HDC);
WINGDIAPI int WINAPI GetTextCharsetInfo (HDC, LPFONTSIGNATURE, DWORD);
WINGDIAPI COLORREF WINAPI GetTextColor (HDC);

#define GetTextExtentExPoint  __AW_SUFFIXED__(GetTextExtentExPoint)
WINGDIAPI BOOL WINAPI GetTextExtentExPointA
(HDC, LPCSTR, int, int, LPINT, LPINT, LPSIZE);

WINGDIAPI BOOL WINAPI GetTextExtentExPointW
( HDC, LPCWSTR, int, int, LPINT, LPINT, LPSIZE );

#define GetTextExtentPoint  __AW_SUFFIXED__(GetTextExtentPoint)
WINGDIAPI BOOL WINAPI GetTextExtentPointA (HDC, LPCSTR, int, LPSIZE);
WINGDIAPI BOOL WINAPI GetTextExtentPointW (HDC, LPCWSTR, int, LPSIZE);

#define GetTextExtentPoint32  __AW_SUFFIXED__(GetTextExtentPoint32)
WINGDIAPI BOOL WINAPI GetTextExtentPoint32A (HDC, LPCSTR, int, LPSIZE);
WINGDIAPI BOOL WINAPI GetTextExtentPoint32W (HDC, LPCWSTR, int, LPSIZE);

#define GetTextFace  __AW_SUFFIXED__(GetTextFace)
WINGDIAPI int WINAPI GetTextFaceA (HDC, int, LPSTR);
WINGDIAPI int WINAPI GetTextFaceW (HDC, int, LPWSTR);

#define GetTextMetrics  __AW_SUFFIXED__(GetTextMetrics)
WINGDIAPI BOOL WINAPI GetTextMetricsA (HDC, LPTEXTMETRICA);
WINGDIAPI BOOL WINAPI GetTextMetricsW (HDC, LPTEXTMETRICW);

WINGDIAPI BOOL WINAPI GetViewportExtEx (HDC, LPSIZE);
WINGDIAPI BOOL WINAPI GetViewportOrgEx (HDC, LPPOINT);
WINGDIAPI BOOL WINAPI GetWindowExtEx (HDC, LPSIZE);
WINGDIAPI BOOL WINAPI GetWindowOrgEx (HDC, LPPOINT);

WINGDIAPI UINT WINAPI GetWinMetaFileBits
(HENHMETAFILE, UINT, LPBYTE, INT, HDC);

WINGDIAPI BOOL WINAPI GetWorldTransform (HDC, LPXFORM);
WINGDIAPI int WINAPI IntersectClipRect (HDC, int, int, int, int);
WINGDIAPI BOOL WINAPI InvertRgn (HDC, HRGN);
WINGDIAPI BOOL WINAPI LineDDA (int, int, int, int, LINEDDAPROC, LPARAM);
WINGDIAPI BOOL WINAPI LineTo (HDC, int, int);
WINGDIAPI BOOL WINAPI LPtoDP (HDC, LPPOINT, int);

WINGDIAPI BOOL WINAPI MaskBlt
(HDC, int, int, int, int, HDC, int, int, HBITMAP, int, int, DWORD);

WINGDIAPI BOOL WINAPI ModifyWorldTransform (HDC, const XFORM *, DWORD);
WINGDIAPI BOOL WINAPI MoveToEx (HDC, int, int, LPPOINT);
WINGDIAPI int WINAPI OffsetClipRgn (HDC, int, int);
WINGDIAPI int WINAPI OffsetRgn (HRGN, int, int);
WINGDIAPI BOOL WINAPI OffsetViewportOrgEx (HDC, int, int, LPPOINT);
WINGDIAPI BOOL WINAPI OffsetWindowOrgEx (HDC, int, int, LPPOINT);
WINGDIAPI BOOL WINAPI PaintRgn (HDC, HRGN);
WINGDIAPI BOOL WINAPI PatBlt (HDC, int, int, int, int, DWORD);
WINGDIAPI HRGN WINAPI PathToRegion (HDC);
WINGDIAPI BOOL WINAPI Pie (HDC, int, int, int, int, int, int, int, int);
WINGDIAPI BOOL WINAPI PlayEnhMetaFile (HDC, HENHMETAFILE, LPCRECT);

WINGDIAPI BOOL WINAPI PlayEnhMetaFileRecord
(HDC, LPHANDLETABLE, const ENHMETARECORD *, UINT);

WINGDIAPI BOOL WINAPI PlayMetaFile (HDC, HMETAFILE);

WINGDIAPI BOOL WINAPI PlayMetaFileRecord
(HDC, LPHANDLETABLE, LPMETARECORD, UINT);

WINGDIAPI BOOL WINAPI PlgBlt
(HDC, const POINT *, HDC, int, int, int, int, HBITMAP, int, int);

WINGDIAPI BOOL WINAPI PolyBezier (HDC, const POINT *, DWORD);
WINGDIAPI BOOL WINAPI PolyBezierTo (HDC, const POINT *, DWORD);
WINGDIAPI BOOL WINAPI PolyDraw (HDC, const POINT *, const BYTE *, int);
WINGDIAPI BOOL WINAPI Polygon (HDC, const POINT *, int);
WINGDIAPI BOOL WINAPI Polyline (HDC, const POINT *, int);
WINGDIAPI BOOL WINAPI PolylineTo (HDC, const POINT *, DWORD);
WINGDIAPI BOOL WINAPI PolyPolygon (HDC, const POINT *, const INT *, int);
WINGDIAPI BOOL WINAPI PolyPolyline (HDC, const POINT *, const DWORD *, DWORD);

#define PolyTextOut  __AW_SUFFIXED__(PolyTextOut)
WINGDIAPI BOOL WINAPI PolyTextOutA (HDC, const POLYTEXTA *, int);
WINGDIAPI BOOL WINAPI PolyTextOutW (HDC, const POLYTEXTW *, int);

WINGDIAPI BOOL WINAPI PtInRegion (HRGN, int, int);
WINGDIAPI BOOL WINAPI PtVisible (HDC, int, int);
WINGDIAPI UINT WINAPI RealizePalette (HDC);
WINGDIAPI BOOL WINAPI Rectangle (HDC, int, int, int, int);
WINGDIAPI BOOL WINAPI RectInRegion (HRGN, LPCRECT);
WINGDIAPI BOOL WINAPI RectVisible (HDC, LPCRECT);

#define RemoveFontResource  __AW_SUFFIXED__(RemoveFontResource)
WINGDIAPI BOOL WINAPI RemoveFontResourceA (LPCSTR);
WINGDIAPI BOOL WINAPI RemoveFontResourceW (LPCWSTR);

#define ResetDC  __AW_SUFFIXED__(ResetDC)
WINGDIAPI HDC WINAPI ResetDCA (HDC, const DEVMODEA *);
WINGDIAPI HDC WINAPI ResetDCW (HDC, const DEVMODEW *);

WINGDIAPI BOOL WINAPI ResizePalette (HPALETTE, UINT);
WINGDIAPI BOOL WINAPI RestoreDC (HDC, int);
WINGDIAPI BOOL WINAPI RoundRect (HDC, int, int, int, int, int, int);
WINGDIAPI int WINAPI SaveDC (HDC);
WINGDIAPI BOOL WINAPI ScaleViewportExtEx (HDC, int, int, int, int, LPSIZE);
WINGDIAPI BOOL WINAPI ScaleWindowExtEx (HDC, int, int, int, int, LPSIZE);
WINGDIAPI BOOL WINAPI SelectClipPath (HDC, int);
WINGDIAPI int WINAPI SelectClipRgn (HDC, HRGN);
WINGDIAPI HGDIOBJ WINAPI SelectObject (HDC, HGDIOBJ);
WINGDIAPI HPALETTE WINAPI SelectPalette (HDC, HPALETTE, BOOL);
WINGDIAPI int WINAPI SetAbortProc (HDC, ABORTPROC);
WINGDIAPI int WINAPI SetArcDirection (HDC, int);
WINGDIAPI LONG WINAPI SetBitmapBits (HBITMAP, DWORD, PCVOID);
WINGDIAPI BOOL WINAPI SetBitmapDimensionEx (HBITMAP, int, int, LPSIZE);
WINGDIAPI COLORREF WINAPI SetBkColor (HDC, COLORREF);
WINGDIAPI int WINAPI SetBkMode (HDC, int);
WINGDIAPI UINT WINAPI SetBoundsRect (HDC, LPCRECT, UINT);
WINGDIAPI BOOL WINAPI SetBrushOrgEx (HDC, int, int, LPPOINT);
WINGDIAPI BOOL WINAPI SetColorAdjustment (HDC, const COLORADJUSTMENT *);
WINGDIAPI BOOL WINAPI SetColorSpace (HDC, HCOLORSPACE);

WINGDIAPI BOOL WINAPI SetDeviceGammaRamp (HDC, PVOID);
WINGDIAPI UINT WINAPI SetDIBColorTable (HDC, UINT, UINT, const RGBQUAD *);

WINGDIAPI int WINAPI SetDIBits
(HDC, HBITMAP, UINT, UINT, PCVOID, const BITMAPINFO *, UINT);

WINGDIAPI int WINAPI SetDIBitsToDevice
(HDC, int, int, DWORD, DWORD, int, int, UINT, UINT, PCVOID,
 const BITMAPINFO *, UINT
);

WINGDIAPI HENHMETAFILE WINAPI SetEnhMetaFileBits (UINT, const BYTE *);
WINGDIAPI int WINAPI SetGraphicsMode (HDC, int);
WINGDIAPI int WINAPI SetICMMode (HDC, int);

#define SetICMProfile  __AW_SUFFIXED__(SetICMProfile)
WINGDIAPI BOOL WINAPI SetICMProfileA (HDC, LPSTR);
WINGDIAPI BOOL WINAPI SetICMProfileW (HDC, LPWSTR);

WINGDIAPI int WINAPI SetMapMode (HDC, int);
WINGDIAPI DWORD WINAPI SetMapperFlags (HDC, DWORD);
WINGDIAPI HMETAFILE WINAPI SetMetaFileBitsEx (UINT, const BYTE *);
WINGDIAPI int WINAPI SetMetaRgn (HDC);
WINGDIAPI BOOL WINAPI SetMiterLimit (HDC, FLOAT, PFLOAT);

WINGDIAPI UINT WINAPI SetPaletteEntries
(HPALETTE, UINT, UINT, const PALETTEENTRY *);

WINGDIAPI COLORREF WINAPI SetPixel (HDC, int, int, COLORREF);
WINGDIAPI BOOL WINAPI SetPixelFormat (HDC, int, const PIXELFORMATDESCRIPTOR *);
WINGDIAPI BOOL WINAPI SetPixelV (HDC, int, int, COLORREF);
WINGDIAPI int WINAPI SetPolyFillMode (HDC, int);
WINGDIAPI BOOL WINAPI SetRectRgn (HRGN, int, int, int, int);
WINGDIAPI int WINAPI SetROP2 (HDC, int);
WINGDIAPI int WINAPI SetStretchBltMode (HDC, int);
WINGDIAPI UINT WINAPI SetSystemPaletteUse (HDC, UINT);
WINGDIAPI UINT WINAPI SetTextAlign (HDC, UINT);
WINGDIAPI int WINAPI SetTextCharacterExtra (HDC, int);
WINGDIAPI COLORREF WINAPI SetTextColor (HDC, COLORREF);
WINGDIAPI BOOL WINAPI SetTextJustification (HDC, int, int);
WINGDIAPI BOOL WINAPI SetViewportExtEx (HDC, int, int, LPSIZE);
WINGDIAPI BOOL WINAPI SetViewportOrgEx (HDC, int, int, LPPOINT);
WINGDIAPI BOOL WINAPI SetWindowExtEx (HDC, int, int, LPSIZE);
WINGDIAPI BOOL WINAPI SetWindowOrgEx (HDC, int, int, LPPOINT);

WINGDIAPI HENHMETAFILE WINAPI SetWinMetaFileBits
(UINT, const BYTE *, HDC, const METAFILEPICT *);

WINGDIAPI BOOL WINAPI SetWorldTransform (HDC, const XFORM *);

#define StartDoc  __AW_SUFFIXED__(StartDoc)
WINGDIAPI int WINAPI StartDocA (HDC, const DOCINFOA *);
WINGDIAPI int WINAPI StartDocW (HDC, const DOCINFOW *);

WINGDIAPI int WINAPI StartPage (HDC);

WINGDIAPI BOOL WINAPI StretchBlt
(HDC, int, int, int, int, HDC, int, int, int, int, DWORD);

WINGDIAPI int WINAPI StretchDIBits
(HDC, int, int, int, int, int, int, int, int, const VOID *,
 const BITMAPINFO *, UINT, DWORD
);

WINGDIAPI BOOL WINAPI StrokeAndFillPath (HDC);
WINGDIAPI BOOL WINAPI StrokePath (HDC);
WINGDIAPI BOOL WINAPI SwapBuffers (HDC);

#define TextOut  __AW_SUFFIXED__(TextOut)
WINGDIAPI BOOL WINAPI TextOutA (HDC, int, int, LPCSTR, int);
WINGDIAPI BOOL WINAPI TextOutW (HDC, int, int, LPCWSTR, int);

WINGDIAPI BOOL WINAPI TranslateCharsetInfo (PDWORD, LPCHARSETINFO, DWORD);
WINGDIAPI BOOL WINAPI UnrealizeObject (HGDIOBJ);
WINGDIAPI BOOL WINAPI UpdateColors (HDC);

#define UpdateICMRegKey  __AW_SUFFIXED__(UpdateICMRegKey)
WINGDIAPI BOOL WINAPI UpdateICMRegKeyA (DWORD, DWORD, LPSTR, UINT);
WINGDIAPI BOOL WINAPI UpdateICMRegKeyW (DWORD, DWORD, LPWSTR, UINT);

WINGDIAPI BOOL WINAPI WidenPath (HDC);
WINGDIAPI BOOL WINAPI wglCopyContext (HGLRC, HGLRC, UINT);
WINGDIAPI HGLRC WINAPI wglCreateContext (HDC);
WINGDIAPI HGLRC WINAPI wglCreateLayerContext (HDC, int);
WINGDIAPI BOOL WINAPI wglDeleteContext (HGLRC);

WINGDIAPI BOOL WINAPI wglDescribeLayerPlane
(HDC, int, int, UINT, LPLAYERPLANEDESCRIPTOR);

WINGDIAPI HGLRC WINAPI wglGetCurrentContext (void);
WINGDIAPI HDC WINAPI wglGetCurrentDC (void);

WINGDIAPI int WINAPI wglGetLayerPaletteEntries
(HDC, int, int, int, COLORREF *);

WINGDIAPI PROC WINAPI wglGetProcAddress (LPCSTR);
WINGDIAPI BOOL WINAPI wglMakeCurrent (HDC, HGLRC);
WINGDIAPI BOOL WINAPI wglRealizeLayerPalette (HDC, int, BOOL);

WINGDIAPI int WINAPI wglSetLayerPaletteEntries
(HDC, int, int, int, const COLORREF *);

WINGDIAPI BOOL WINAPI wglShareLists (HGLRC, HGLRC);
WINGDIAPI BOOL WINAPI wglSwapLayerBuffers (HDC, UINT);

#define wglUseFontBitmaps  __AW_SUFFIXED__(wglUseFontBitmaps)
WINGDIAPI BOOL WINAPI wglUseFontBitmapsA (HDC, DWORD, DWORD, DWORD);
WINGDIAPI BOOL WINAPI wglUseFontBitmapsW (HDC, DWORD, DWORD, DWORD);

#define wglUseFontOutlines  __AW_SUFFIXED__(wglUseFontOutlines)
WINGDIAPI BOOL WINAPI wglUseFontOutlinesA
(HDC, DWORD, DWORD, DWORD, FLOAT, FLOAT, int, LPGLYPHMETRICSFLOAT);

WINGDIAPI BOOL WINAPI wglUseFontOutlinesW
(HDC, DWORD, DWORD, DWORD, FLOAT, FLOAT, int, LPGLYPHMETRICSFLOAT);

#if WINVER >= _WIN32_WINDOWS_98  /* also WINNT >= WIN2K */
WINGDIAPI BOOL WINAPI AlphaBlend
(HDC, int, int, int, int, HDC, int, int, int, int, BLENDFUNCTION);

WINGDIAPI BOOL WINAPI GradientFill
(HDC, PTRIVERTEX, ULONG, PVOID, ULONG, ULONG);

WINGDIAPI BOOL WINAPI TransparentBlt
(HDC, int, int, int, int, HDC, int, int, int, int, UINT);

#if WINVER >= _WIN32_WINNT_WIN2K
WINGDIAPI DWORD WINAPI GetLayout (HDC);
WINGDIAPI DWORD WINAPI SetLayout (HDC, DWORD);

WINGDIAPI COLORREF WINAPI GetDCBrushColor (HDC);
WINGDIAPI COLORREF WINAPI GetDCPenColor (HDC);
#endif	/* WINVER >= Win2K */
#endif	/* WINVER >= Win98/Win2K */

#if _WIN32_WINNT >= _WIN32_WINNT_WIN2K
typedef struct tagWCRANGE
{ WCHAR 			wcLow;
  USHORT			cGlyphs;
} WCRANGE, *PWCRANGE, *LPWCRANGE;

typedef struct tagGLYPHSET
{ DWORD 			cbThis;
  DWORD 			flAccel;
  DWORD 			cGlyphsSupported;
  DWORD 			cRanges;
  WCRANGE			ranges[1];
} GLYPHSET, *PGLYPHSET, *LPGLYPHSET;

typedef struct tagENUMLOGFONTEXDVA
{ ENUMLOGFONTEXA		elfEnumLogfontEx;
  DESIGNVECTOR			elfDesignVector;
} ENUMLOGFONTEXDVA, *PENUMLOGFONTEXDVA, *LPENUMLOGFONTEXDVA;

typedef struct tagENUMLOGFONTEXDVW
{ ENUMLOGFONTEXW		elfEnumLogfontEx;
  DESIGNVECTOR			elfDesignVector;
} ENUMLOGFONTEXDVW, *PENUMLOGFONTEXDVW, *LPENUMLOGFONTEXDVW;

typedef __AW_ALIAS__(ENUMLOGFONTEXDV), *PENUMLOGFONTEXDV, *LPENUMLOGFONTEXDV;

WINGDIAPI HANDLE WINAPI AddFontMemResourceEx (PVOID, DWORD, PVOID, DWORD *);

#define AddFontResourceEx  __AW_SUFFIXED__(AddFontResourceEx)
WINGDIAPI int WINAPI AddFontResourceExA (LPCSTR, DWORD, PVOID);
WINGDIAPI int WINAPI AddFontResourceExW (LPCWSTR, DWORD, PVOID);

WINGDIAPI BOOL WINAPI GetTextExtentExPointI
(HDC, LPWORD, int, int, LPINT, LPINT, LPSIZE);

WINGDIAPI BOOL WINAPI RemoveFontMemResourceEx (HANDLE);

#define RemoveFontResourceEx  __AW_SUFFIXED__(RemoveFontResourceEx)
WINGDIAPI BOOL WINAPI RemoveFontResourceExA (LPCSTR, DWORD, PVOID);
WINGDIAPI BOOL WINAPI RemoveFontResourceExW (LPCWSTR, DWORD, PVOID);

WINGDIAPI COLORREF WINAPI SetDCBrushColor (HDC, COLORREF);
WINGDIAPI COLORREF WINAPI SetDCPenColor (HDC, COLORREF);

WINGDIAPI DWORD WINAPI GetFontUnicodeRanges (HDC, LPGLYPHSET);

#define GetGlyphIndices  __AW_SUFFIXED__(GetGlyphIndices)
WINGDIAPI DWORD WINAPI GetGlyphIndicesA (HDC, LPCSTR, int, LPWORD, DWORD);
WINGDIAPI DWORD WINAPI GetGlyphIndicesW (HDC, LPCWSTR, int, LPWORD, DWORD);
#endif	/* WINNT >= Win2K */
#endif /* ! RC_INVOKED */

_END_C_DECLS

#endif /* !_WINGDI_H: $RCSfile: wingdi.h,v $: end of file */
