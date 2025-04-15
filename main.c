#include <stdio.h>
int string_length(const char *str);
void reverse_string(char *str);
int compare_strings(const char *str1, const char *str2);
void count_vowels_and_consonants(const char *str, int *vowels, int *consonants);
int find_character(const char *str, char c);
void replace_character(char *str, char old_char, char new_char);

int main() {
	// task1
	const char str[] = "Hello World";
	printf("%d \n", string_length(str));	

	// task2
	char str2[] = "Hello";
	reverse_string(str2);

	// task3;
	const char strcmp1[] = "ABCDE";
	const char strcmp2[] = "ABCDE";
	printf("%d \n", compare_strings(strcmp1, strcmp2));

	// task4
	char strvc[] = "Vowels and consonants check";
	int vow = 0;
	int con = 0;
	count_vowels_and_consonants(strvc, &vow, &con);

	// task5
	char c = 'a';
	const char string[] = "Find a character";
	printf("Your character is under index %d of string! \n", find_character(string, c));

	// task6
	char somestr[] = "Hello World!";
	char old_char = 'l';
	char new_char = 'd';
	replace_character(somestr, old_char, new_char);
	printf("%s \n", somestr);
	
	return 0;
}	
