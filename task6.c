void replace_character(char *str, char old_char, char new_char) {
	while(*str) {
		if (*str == old_char) {
			*str = new_char;
		}
		str++;
	}
}
