/*
DESCRIPTION:
You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items. We want to create the text that should be displayed next to such an item.

Implement the function which takes an array containing the names of people that like an item. It must return the display text as shown in the examples:

[]                                -->  "no one likes this"
["Peter"]                         -->  "Peter likes this"
["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"
Note: For 4 or more names, the number in "and 2 others" simply increases.
*/

#include <stdlib.h>

// result string must be a heap-allocated, nul-terminated string
// to be freed by the tests suite

char *likes(size_t n, const char *const names[n]) {
	char *returns = (char *) malloc(300 * sizeof(char));
	if(n == 0)
	{
		sprintf(returns,"no one likes this");
		return returns;
	}
	else if (n == 1) {
		sprintf(returns,"%s likes this",names[0]);
		return returns;
	}
	else if (n == 2) {
		sprintf(returns,"%s and %s like this",names[0],names[1]);
		return returns;
	}
	else if (n == 3) {
		sprintf(returns,"%s, %s and %s like this",names[0],names[1],names[2]);
		return returns;
	}
	else
	{
		sprintf(returns,"%s, %s and %d others like this",names[0],names[1],n-2);
		return returns;
	}
}
