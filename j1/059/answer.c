#include <stdio.h>

int main(){
	int x;
	int s=0;
	int i;
	printf("x:");	scanf("%d",&x);
	printf("S = ");
	for(i=1;i<=x;i++){
		printf("%d+",i);
		s+=i;
	}
	printf("\b = %d\n",s);
	return 0;
}

