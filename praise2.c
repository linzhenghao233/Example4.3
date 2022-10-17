/* praise2.c */
//编译器如果不识别%zd，尝试换成%u或%lu。
#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."
int main(void) {
	char name[40];

	printf("What's your name?");
	scanf_s("%s", name, 40);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);
	printf("The phrase of praise has %zd letters", strlen(PRAISE));
	printf("and occuppies %zd memory cells.\n", sizeof PRAISE);

	return 0;
}

//输出结果：
//What's your name?Serendipity Chance
//Hello, Serendipity.You are an extraordinary being.
//Your name of 11 letters occupies 40 memory cells.
//The phrase of praise has 31 lettersand occuppies 32 memory cells.