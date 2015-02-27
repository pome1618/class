#include <stdio.h>

int max(int array[],int len){
	int i;
	int max;
	max=array[0];
	for(i=1;i<len;i++){
		max=max<array[i]?array[i]:max;
	}
	return max;
}

int main(){
	int array[5];
	int i;
	int len=sizeof(array)/sizeof(int);
	for(i=0;i<len;i++){
		printf("array[%d]:",i);
		scanf("%d",&array[i]);
	}
	printf("max=%d\n",max(array,len));
	return 0;
}
