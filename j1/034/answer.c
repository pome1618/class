#include <stdio.h>

int main(){
	int num;
	int i=0;
	printf("num:");	scanf("%d",&num);
	while(++i<=num){
		printf(i%10!=0?"*":"*\n");
	}
	return 0;
}

