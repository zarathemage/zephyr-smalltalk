#include "zephyrasciiparser.h"


void parse_method(OBJECT o, METHOD m)
{
	INSTANCE in = search_object(o);
	hash_method(in, m, hashmap);
}

static void hash_method(INSTANCE in, METHOD m, HashMapPtr hash)
{
	
}
