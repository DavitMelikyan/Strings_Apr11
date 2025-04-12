#include <stdio.h>
void count_vowels_and_consonants(const char *str, int *vowels, int *consonants) {
	while(*str++) {
		if (*str == 'a' || *str == 'e' || *str == 'o' || *str == 'i' || *str == 'u') {
			++*vowels;
		} else if(*str == ' ') {
			continue; 
		} else {
			++*consonants;
		}
	}
	printf("There are %d vowels and %d consonants in your string! \n", *vowels, *consonants);
}		
