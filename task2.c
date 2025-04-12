#include <stdio.h>
#include <string.h>
void reverse_string(char *str){ 
	int i = 0;
	int j = strlen(str) - 1;
	while(i < j) {
		char tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		++i;
		--j;
	}
	printf("%s \n", str);
}
