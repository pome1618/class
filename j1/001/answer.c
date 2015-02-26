#include <stdio.h>

int main(){
	int a;
	int b;
	int tmp;
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	tmp=a;
	a=b;
	b=tmp;
	printf("a=%d\nb=%d",a,b);
	return 0;
}

