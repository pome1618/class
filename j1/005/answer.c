#include <stdio.h>

int main(){
	int a,b;
	float c,d;
	printf("a:");	scanf("%d",&a);
	printf("b:");	scanf("%d",&b);
	printf("c:");	scanf("%f",&c);
	printf("d:");	scanf("%f",&d);
	printf("a+b=%d\ta-b=%d\ta*b=%d\ta/b=%d\n",a+b,a-b,a*b,a/b);
	printf("c+d=%f\tc-d=%f\tc*d=%f\tc/d=%f\n",c+d,c-d,c*d,c/d);
	return 0;
}

