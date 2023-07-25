/*
DESCRIPTION:
Your goal in this kata is to implement a difference function, which subtracts one list from another and returns the result.

It should remove all values from list a, which are present in list b keeping their order.

array_diff({1, 2}, 2, {1}, 1, *z) == {2} (z == 1)
If a value is present in b, all of its occurrences must be removed from the other:

array_diff({1, 2, 2, 2, 3}, 5, {2}, 1, *z) == {1, 3} (z == 2)
NOTE: In C, assign return array length to pointer *z
*/

#include <stdlib.h>
#include <stdbool.h>
bool isin (int num,int *arr , size_t sz)
{
  for(int i = 0 ; i < sz ; i++)
    if(num == arr[i])
      return true;
  return false;
}

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) {
  int *arr = (int *) malloc(sizeof(int) * n1);
  for(int i = 0 ; i < n1 ; i++)
    if(!isin(arr1[i] , arr2 , n2))
      arr[(*z)++] = arr1[i];
  return arr;
}
