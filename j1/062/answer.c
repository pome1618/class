#include <stdio.h>
#define SIZE 5

int main(){
	float array[SIZE];
	float sum=0;
	int i;
	for(i=0;i<SIZE;i++){
		printf("array[%d]:",i);
		scanf("%f",&array[i]);
		sum+=array[i];
	}
	printf("sum = %f\naverage = %f\n",sum,sum/SIZE);
	return 0;
}

