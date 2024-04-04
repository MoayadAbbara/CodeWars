/*
DESCRIPTION:
Build Tower
Build a pyramid-shaped tower, as an array/list of strings, given a positive integer number of floors. A tower block is represented with "*" character.

For example, a tower with 3 floors looks like this:

[
  "  *  ",
  " *** ", 
  "*****"
]
And a tower with 6 floors looks like this:

[
  "     *     ", 
  "    ***    ", 
  "   *****   ", 
  "  *******  ", 
  " ********* ", 
  "***********"
]

*/

void build_tower(unsigned n, char tower[n][2 * n - 1])
{
	 int i,j;
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<2*n-1;j++)
	 	{
	 		if( (n - 1 - i <= j) && (n - 1 + i >= j))
	 		{
	 			tower[i][j] = '*';
			}
			else
			{
				tower[i][j] = ' ';
			}
		 }
	 }
}
