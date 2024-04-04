/*
DESCRIPTION:
Write Number in Expanded Form
You will be given a number and you will need to return it as a string in Expanded Form. For example:

expandedForm 12    -- Should return '10 + 2'
expandedForm 42    -- Should return '40 + 2'
expandedForm 70304 -- Should return '70000 + 300 + 4'
NOTE: All numbers will be whole numbers greater than 0.

If you liked this kata, check out part 2!!
*/

char *expandedForm(char *string, unsigned long long n)
{
	char *num = (char *) malloc(sizeof(char) * 9999);
	sprintf(num,"%llu",n);
	int len = strlen(num);
	*string = '\0';
	for(int i = 0 ; i < len ; i++)
	{
		int digit = num[i] - '0';
		if(digit)
			sprintf(string + strlen(string),"%llu + ",(unsigned long long)pow(10,len - 1 - i) * digit);
	}
	string[strlen(string) - 3] = '\0';
	return string;
}
