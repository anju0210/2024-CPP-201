#include <stdio.h>

void main(void) {
	char str[100] = "Juyoung";
	char str2[100];

	int i = 0;
	for (int i=0; str[i-1]!='\0'; i++)
		str2[i] = str[i];

	printf("%s", str);
	// str에 있는 내용을 str2에 복사하기

}