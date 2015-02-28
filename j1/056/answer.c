#include <stdio.h>

int main(){
	int x=0;
	char c;
	do{
		printf("x=%d\n",x);
		printf("continue?[y/n]:");
		scanf("\n%c",&c);
		x+=10;
	}while(c=='y');
	printf("end");
	return 0;
}

