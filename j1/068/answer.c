#include <stdio.h>
#define LEN 19

int main(){
	int array[LEN][LEN];
	int i;
	int j;
	printf("  |");
	for(i=1;i<=LEN;i++){
		printf("%4d",i);
	}
	printf("\n");
	for(i=1;i<=LEN*4+1;i++){
		printf("-");
	}
	printf("\n");
	for(i=1;i<=LEN;i++){
		printf("%2d|",i);
		for(j=1;j<=LEN;j++){
			array[i-1][j-1]=i*j;
			printf("%4d",array[i-1][j-1]);
		}
		printf("\n");
	}
	return 0;
}

