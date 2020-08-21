#include "string_process.h"

int main()
{	
	char* str = (char*)calloc(100, sizeof(char));
	str = "{\r\n\"Motor\":\"ON\"\r\n\"Fan\":\"OFF\"\r\n\"TV\":\"ON\"}";
	
	char* search_val = (char*) calloc(100, sizeof(char));
	search_val = "TV";

	char* key_val = (char*)calloc(100, sizeof(char));
	
	if (str == NULL || search_val == NULL || key_val == NULL)
	{
		printf_s("Cap phat bo nho bi loi!");
		exit(0);
	}

	int search_len = Str_len(search_val);
	int res = find_SubStr_Position(str, search_val, search_len);
	getValue(str, res, search_len, key_val);
	printf_s(key_val);

	search_val = NULL, str = NULL, key_val = NULL;
	free(search_val);
	free(str);
	free(key_val);

	return 0;
}