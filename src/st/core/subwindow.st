" Copyright (C) 2021 Zara.
  See the LICENSE file for details 

#include <pragmas.h>
"

Object subclass: #SubWindow
	instance:''
        class: 'pixels x y width height'

new
	| |

	#pragma WINDOW_NEW

#

paint
	||
	#pragma WINDOW_PAINT

#
