#include <stdio.h>
#include <string.h>
int main() {
	char str[] = "hello";
	int len = strlen(str);
	int  i, j;
	char temp;
	for (i=0, j=len-1; i<j; i++, j--){
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	printf("reverse str: %s\n", str);
	return 0;
}
