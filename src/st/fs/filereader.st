" Copyright (C) 2021 Zara.
  See the LICENSE file for details 

#include <pragmas.h>
"

Object subclass: #FileReader
	instance:''
        class: 'filep'

new
	| |


#

open
	| |
	
	#pragma FS_OPEN
#
read
	| |
	
	#pragma FS_READ
#
write
	| |
	
	#pragma FS_WRITE
#
