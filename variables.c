#include <stdio.h>

int main() {
	char name[50];
	printf("Enter your name: ");
	scanf("%49s", name);
	printf("hello, %s! welcome \n", name);
	return 0;
}
