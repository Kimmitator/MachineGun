#include <stdio.h>

int example3(void)
{
	char str[80];

	printf("���ڿ� �Է�: ");
	scanf("%s", str);
	printf("ù ��° �ܾ�: %s\n", str);
	scanf("%s", str);
	printf("�� ��° �ܾ�: %s\n", str);

	return 0;
}