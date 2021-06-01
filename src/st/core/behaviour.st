" Copyright (C) 2021 Zara.
  See the LICENSE file for details 

#include <pragmas.h>
"

Object subclass: #Behaviour
	instance:''
        class: ''

new
	| |


#
get
	||
	#pragma WIDGET_PAINT
#
set
	||
	#pragma WIDGET_SET
#
gen "genrate new behaviour code for image"
	||

	#pragma BEHAVIOUR_GENERATE_NEW
#


