#include <stdio.h>
int main(){
	char line[1000];
	printf("enter line\n");
	fgets(line, 1000, stdin);
	/* = scanf("%[^\n]1000s", line);*/
	printf("line: %s\n", line);
}
