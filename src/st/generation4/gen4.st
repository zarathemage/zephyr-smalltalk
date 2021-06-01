" Copyright (C) 2021 Zara.
  See the LICENSE file for details 

  4th Generation language for changing windows and its widgets
"

Object subclass: #Gen4
	instance:'syswindow behaviour'
        class: ''

new
	| |

	sysywindow := SubWindow new.
	^self

#

paint
	||
	syswindow paint.	

#
