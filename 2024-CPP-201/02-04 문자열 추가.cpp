﻿#include <stdio.h>
#include <string.h>

using namespace std;

void main(void) {
	char str[100] = "Joyoung";
	// 문자열 추가
	strcat(str, " is pretty");

	printf("%s ", str);

}