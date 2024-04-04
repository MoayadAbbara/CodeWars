/*
DESCRIPTION:
The number 
89
89 is the first integer with more than one digit that fulfills the property partially introduced in the title of this kata. What's the use of saying "Eureka"? Because this sum gives the same number: 
89 = 8^1 + 9^2
 

The next number in having this property is 135 :

135 = 1^2 + 3^2 + 5^3
Task
We need a function to collect these numbers, that may receive two integers a,b that defines the range 
[a,b] (inclusive) and outputs a list of the sorted numbers in the range that fulfills the property described above.
Examples
Let's see some cases (input -> output):
1, 10  --> [1, 2, 3, 4, 5, 6, 7, 8, 9]
1, 100 --> [1, 2, 3, 4, 5, 6, 7, 8, 9, 89]
If there are no numbers of this kind in the range  [a,b] the function should output an empty list.
90, 100 --> []
Enjoy it!!
*/

#include <stddef.h>
#include <stdbool.h>
typedef unsigned long long ull;

bool iseureka (ull a) {
	  ull sum = 0;
    char *x = (char *) malloc(sizeof(char) * 9999);
  	sprintf(x,"%llu",a);
  	int n = strlen(x);
  	for(int i=0 ; i < n ; i++)
  	{
  		int dig = x[i] -'0';
  		sum += pow(dig,i+1);
	  }
	if(sum == a)
		return true;
	return false;
  
}

ull *sum_dig_pow(ull a, ull b, ull *results, size_t *length) {
    int j = 0;
    for(ull i = a ;i < b; i++)
      if(iseureka(i))
      {
      	results[*length] = i;
      	(*length)++;
	    }
    return results;
}
