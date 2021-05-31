" Copyright (C) 2021 Zara.
  See the LICENSE file for details 

#include <pragmas.h>
#define OBJECT_CLASS 0x0001
#define OBJECT_INSTANCE_VARIABLES 0x0002
#define OBJECT_CLASS_VARIABLES 0x0003
#define OBJECT_INSTANCE_METHODS 0x0004
//#define OBJECT_CLASS_METHODS 0x0005
#define OBJECT_NEW 0x0006"

Object subclass: #Object "FIXME subclass must be/is the same"
	instance:''
        class: ''

new
	| |

	#pragma OBJECT_NEW

#

instance
	#pragma OBJECT_INSTANCE_VARIABLES
#
classname
	#pragma OBJECT_CLASS
#
class
	#pragma OBJECT_CLASS_VARIABLES
#

methods
	#pragma OBJECT_INSTANCE_METHODS
#
