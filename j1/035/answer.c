#include <stdio.h>

int main(){
	int x;
	int i;
	printf("x:");	scanf("%d",&x);
	for(i=1;i<=x;i++){
		printf("%d,",i);
	}
	printf("\b ");
	return 0;
}

