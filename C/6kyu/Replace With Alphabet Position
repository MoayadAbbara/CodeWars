/*
DESCRIPTION:
Welcome.

In this kata you are required to, given a string, replace every letter with its position in the alphabet.

If anything in the text isn't a letter, ignore it and don't return it.

"a" = 1, "b" = 2, etc.

Example
alphabet_position("The sunset sets at twelve o' clock.")
Should return "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11" ( as a string )
*/

#include <stdlib.h>

char *alphabet_position(const char *text) {
	char *temp = (char *) malloc(3); 
	int i,j =0;
	char *string = (char *) malloc(sizeof(char) * strlen(text) + 1);
	char *pos = (char *) malloc(sizeof(char) * strlen(text) * 3);
	pos[0] = '\0';
	int n = strlen(text);
	for(i=0;i<n;i++)
	{
		string[i] = tolower(text[i]);
	}
	string[n] = '\0';
	while(string[j] != '\0')
	{
		if(string[j] >= 'a' && string[j] <= 'z')
		{
			sprintf(temp,"%d ",string[j] - 'a' + 1);
			strcat(pos,temp);
		}
		j++;
	}
	n = strlen(pos);
	pos[--n] = '\0';
	return pos;
}
