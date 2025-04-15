#include <stdio.h>
void count_vowels_and_consonants(const char *str, int *vowels, int *consonants) {
	while(*str) {
		if (*str == 'a' || *str == 'e' || *str == 'o' || *str == 'i' || *str == 'u' || *str == 'A' || *str == 'E'|| *str == 'O' || *str == 'I' || *str == 'U') {
			++*vowels;
		} else if((*str >= 'b' && *str <= 'z') || (*str >= 'B' && *str <= 'Z')) {
			++*consonants; 
		}
		++str;
	}
	printf("There are %d vowels and %d consonants in your string! \n", *vowels, *consonants);
}		
