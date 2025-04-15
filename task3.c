#include <string.h>
int compare_strings(const char *str1, const char *str2) {
	while (*str1 && *str2) {
		if (*str1 == *str2) {
			++str1;
			++str2;
		} else if (*str1 > *str2) {
			return 1;
		} else {
			return -1;
		}
	}
	if (strlen(str1) > strlen(str2)) {
		return 1;
	} else if (strlen(str1) < strlen(str2)) {
		return -1;
	}	
	return 0;
}
