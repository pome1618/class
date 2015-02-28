#include <stdio.h>

int main(){
	int x;
	int i;
	int sum=0;
	printf("x:");	scanf("%d",&x);
	for(i=1;i<x;i+=2){
		sum+=i*(i+1);
	}
	printf("sum=%d\n",sum);
	return 0;
}

