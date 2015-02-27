#include <stdio.h>

int main(){
	int x;
	int y;
	int a;
	int b;
	printf("x:");	scanf("%d",&x);
	printf("y:");	scanf("%d",&y);
	a=y/x;
	b=y%x;
	printf("y/x=%d,amari=%d\n",a,b);
	return 0;
}

