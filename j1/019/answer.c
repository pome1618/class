#include <stdio.h>

int main(){
	int a;
	int b;
	int c;
	int max;
	printf("a:");	scanf("%d",&a);
	printf("b:");	scanf("%d",&b);
	printf("c:");	scanf("%d",&c);
	max=a;
	max=max<b?b:max;
	max=max<c?c:max;
	printf("max=%d\n",max);
	return 0;
}

