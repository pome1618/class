#include <stdio.h>
#define SIZE 5

int main(){
	float x[SIZE];
	float y[SIZE];
	int i;
	for(i=0;i<SIZE;i++){
		printf("x[%d]:",i);
		scanf("%f",&x[i]);
	}
	for(i=0;i<SIZE;i++){
		y[i]=x[i];
	}
	for(i=0;i<SIZE;i++){
		printf("y[%d] = %f\n",i,y[i]);
	}
	return 0;
}

