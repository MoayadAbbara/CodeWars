/*
DESCRIPTION:
We need prime numbers and we need them now!

Write a method that takes a maximum bound and returns all primes up to and including the maximum bound.

For example,

11 => [2, 3, 5, 7, 11]
*/

#include <stddef.h>
#include <stdbool.h>
//  assign values to pre-allocated array *primes
//  set *z as the length of this output
bool isprime(int x) {
  for(int i=2;i*i<=x;i++)
    if(x % i == 0)
      return false;
  return true;
}


void prime(unsigned m, size_t *z, unsigned *primes) {
  int index = 0;
  for(size_t i = 2 ; i <= m ; i++)
    if(isprime(i))
      primes[index++] = i;
  *z = index;
}
