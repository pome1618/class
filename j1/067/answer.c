#include <stdio.h>
#define SIZE 6

void swap(int array[],int len);

int main(){
	int x[SIZE];
	int i;
	for(i=0;i<SIZE;i++){
		printf("x[%d]:",i);
		scanf("%d",&x[i]);
	}
	swap(x,SIZE);
	printf("\n");
	for(i=0;i<SIZE;i++){
		printf("x[%d]=%d\n",i,x[i]);
	}
	return 0;
}

void swap(int array[],int len){
	int i;
	int tmp;
	for(i=0;i<len/2;i++){
		tmp=array[i];
		array[i]=array[len-i-1];
		array[len-i-1]=tmp;
	}
}

