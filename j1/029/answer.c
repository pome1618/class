#include <stdio.h>

int main(){
	int x;
	printf("x:");	scanf("%d",&x);
	switch(x%2){
		case 0:
			printf("Even\n");
			break;
		case 1:
			printf("Odd\n");
			break;
		default:
			break;
	}
	return 0;
}

