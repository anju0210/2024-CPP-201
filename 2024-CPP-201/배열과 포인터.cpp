#include <stdio.h>

int main(void) {
	int arr[4] = { 10, 20, 30, 40 };
	char str[4] = { 's', 'w', 'a' };	// null문자가 있기 때문에 3개까지 넣을 수 있다

	int* pi = arr;
	char* pc = str;
	
	// 두 코드의 결과는 같다
	printf("%d %d\n", arr[0], arr[1]);
	printf("%d %d\n\n", *(arr), *(arr+1));

	printf("%d %d\n", *(pi),  *(pi+ 1));	// 4차이
	printf("%d %d\n", pi[0], pi[1]);	// 1차이
	printf("%c %c\n", *(pc), *(pc + 1));	// 4차이
	printf("%c %c\n", pc[0], pc[1]);

	// &를 쓰는 연산은 참조연산
	// *를 쓰는 연산은 역참조연산
}