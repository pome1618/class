#include <stdio.h>
#define SIZE 5

int main(){
	int array[SIZE];
	int i;
	int j;
	for(i=0;i<SIZE;i++){
		printf("array[%d]:",i);
		scanf("%d",&array[i]);
		if(array[i]<0){
			printf("入力エラー\n");
			return -1;
		}
	}
	for(i=0;i<SIZE;i++){
		for(j=0;j<array[i];j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

