#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int example4(void)
{
	char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("문자열 입력:");
		gets(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}
	for (i = 0; i < 3; i++) {
		printf("%s\n", str[i]);
	}
	for (i = 0; i < 3; i++) {
		free(str[i]);
	}
	
	return 0;
}