#ifndef __PRAGMAS_H_
#define __PRAGMAS_H_

// vm opcodes for binary image parsing of classes, objects and methods
// (not really pragmas)

#define ZVM_PLUS 0x0001
#define ZVM_MINUS 0x0002

// native types

// behaviours

#define BEHAVIOUR_GENERATE_NEW 0x3412
#define BEHAVIOUR_GET 0x1234
#define BEHAVIOUR_SET 0x4321

// object types

#define OBJECT_CLASS 0x0001
#define OBJECT_INSTANCE_VARIABLES 0x0002
#define OBJECT_CLASS_VARIABLES 0x0003
#define OBJECT_INSTANCE_METHODS 0x0004
//#define OBJECT_CLASS_METHODS 0x0005
#define OBJECT_NEW 0x0006

// window & widget
#define WINDOW_NEW 0x0007
#define WINDOW_PAINT 0x0008
#define WIDGET_NEW 0x0100
#define WIDGET_PAINT 0x0101

// filesystem
#define FS_OPEN 0x2000
#define FS_READ 0x2001
#define FS_WRITE 0x2002

#endif
