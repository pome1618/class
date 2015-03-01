#include <stdio.h>
#define SIZE 7

int main(){
	int array[SIZE];
	int i;
	int j;
	for(i=0;i<SIZE;i++){
		printf("array[%d]:",i);
		scanf("%d",&array[i]);
		if(array[i]<0||array[i]>7){
			printf("入力エラー");
			return -1;
		}
	}
	printf("\n");
	for(i=0;i<SIZE;i++){
		for(j=0;j<array[i];j++){
			printf("□");
		}
		for(j=0;j<SIZE-array[i];j++){
			printf("■");
		}
		printf("\n");
	}
	return 0;
}

