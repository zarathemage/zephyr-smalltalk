" Copyright (C) 2021 Zara.
  See the LICENSE file for details 

#include <pragmas.h>
"

Object subclass: #Widget
	instance:''
        class: 'pixels x y width height'

new
	| |

	#pragma WIDGET_NEW

#

paint
	||
	#pragma WIDGET_PAINT
#
