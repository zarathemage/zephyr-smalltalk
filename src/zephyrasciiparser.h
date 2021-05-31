#ifndef __ZEPHYR_ASCIIPARSER_
#define __ZEPHYR_ASCIIPARSER_

#define void *OBJECT;
#define void *METHOD;

#define void *INSTANCE;

typedef struct hashmap_ {
	Dictionary *dict;
} HashMap;

typedef HashMap *HashMapPtr;

void parse_method(OBJECT o, METHOD m);

#endif
