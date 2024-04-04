/*
A pangram is a sentence that contains every single letter of the alphabet at least once. For example, the sentence "The quick brown fox jumps over the lazy dog" is a pangram, because it uses the letters A-Z at least once (case is irrelevant).

Given a string, detect whether or not it is a pangram. Return True if it is, False if not. Ignore numbers and punctuation.
*/

#include <stdbool.h>
bool is_pangram(const char *str_in) {
   	char *letters = "abcdefghijklmnopqrstuvwxyz";
   	for(int i=0;i<26;i++)
   		if(!(strchr(str_in,letters[i])) && !(strchr(str_in,toupper(letters[i]))))
   			return false;
	return true;
}
