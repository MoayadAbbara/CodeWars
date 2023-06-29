/*
Reverse Number is a number which is the same when reversed.

For example, the first 20 Reverse Numbers are:

0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 22, 33, 44, 55, 66, 77, 88, 99, 101
TASK:

You need to return the nth reverse number. (Assume that reverse numbers start from 0 as shown in the example.)
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned long long int find_reverse_number(unsigned long long int n) {
	char * pEnd = NULL;
	unsigned long long int result;
	int i,len;
    char *arr = (char *) malloc(sizeof(char) * 999);
	sprintf(arr,"%llu",n);
	if(arr[0] == '1' && arr[1] != '0')
	{
		sprintf(arr,"%s",&arr[1]);
		len = strlen(arr);
		for(i=0;i<len; i++)
			sprintf(arr + strlen(arr),"%c",arr[len -i -1]);	
		arr[strlen(arr)] = '\0';
		result = strtoull (arr,&pEnd,10);
	}
	else
	{
		if(arr[0] != '1')
			arr[0] -= 1;
		else
		{
			arr[0] = '9';
			sprintf(&arr[1],"%s",&arr[2]);
		}
		len = strlen(arr);
		for(i=0;i<len-1;i++)
		{
			sprintf(arr + strlen(arr),"%c",arr[len -i -2]);	
		}
		result = strtoull (arr,&pEnd,10);
	}
		return result;
}
