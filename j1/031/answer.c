#include <stdio.h>

int main(){
	int c;
	printf("c:");	scanf("%c",&c);
	printf("%s\n",c=='y'?"YES":c=='n'?"NO":"Others");
	return 0;
}

