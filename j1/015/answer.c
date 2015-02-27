#include <stdio.h>

int main(){
	int x;
	int y;
	printf("x:");	scanf("%d",&x);
	printf("y:");	scanf("%d",&y);
	printf("%s\n",x==y?"同じ値です":"異なる値です");
	return 0;
}

