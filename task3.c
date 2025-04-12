#include <string.h>
int compare_strings(const char *str1, const char *str2) {
	int totsum1 = 0;
	int totsum2 = 0;
	for (int i = 0; i < strlen(str1); ++i) {
		totsum1 += str1[i];
	}
	for (int i = 0; i < strlen(str2); ++i) {
                totsum2 += str2[i];
        }
	if (totsum1 == totsum2) {
		return 0;
	} else if (totsum1 > totsum2) {
		return 1;
	} else {
		return -1;
	}
}
