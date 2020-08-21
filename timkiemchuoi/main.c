#include "string_process.h"


int main()
{	
	char str[] = "{\r\n\"Motor\":\"ON\"\r\n\"Fan\":\"OFF\"\r\n\"TV\":\"ON\"}";
	
	char search_val[] = "Fan";
	
	char val[10] = { 0 };

	int search_len = Str_len(search_val);
	int res = find_SubStr_Position(str, search_val, search_len);
	getValue(str, res, search_len, val);
	printf_s(val);

	return 0;
}