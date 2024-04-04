/*
DESCRIPTION:
Complete the solution so that the function will break up camel casing, using a space between words.

Example
"camelCasing"  =>  "camel Casing"
"identifier"   =>  "identifier"
""             =>  ""
*/

#include <stddef.h>
#include <stdio.h>
#include <string.h>
//returned buffer should be dynamically allocated and will be freed by a caller
char* solution(const char *camelCase) {
	int i ,n =strlen(camelCase), j=0;
	char *buffer = (char *) malloc(sizeof(char) *9999);
	for(i=0;i<n;i++)
	{
		if(!isupper(camelCase[i]))
		{
			buffer[j++] = camelCase[i];
		}
		else
		{
			buffer[j++] = ' ';
			buffer[j++] = camelCase[i];
		}
	}
	buffer[j] = '\0';
  return buffer;
}
