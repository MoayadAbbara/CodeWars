/*
DESCRIPTION:
There is an array with some numbers. All numbers are equal except for one. Try to find it!

finduniq((const float[]){1, 1, 1, 2, 1, 1}, 5); /* --> 2 */
finduniq((const float[]){0, 0, 0.55, 0, 0}, 5); /* --> 0.55 */
It’s guaranteed that array contains at least 3 numbers.

The tests contain some very huge arrays, so think about performance.

This is the first kata in series:

Find the unique number (this kata)
Find the unique string
Find The Unique
*/

#include <stddef.h>

float finduniq(const float *nums, size_t n)
{
    if(nums[0] != nums[1] && nums[0] != nums[2])
      return nums[0];
    for(size_t i = 1 ; i < n ; i++)
      if(nums[0] != nums[i])
        return nums[i];
}
