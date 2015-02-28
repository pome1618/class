#include <stdio.h>
#define SIZE 10

int main(){
	int x[SIZE];
	int i;
	for(i=0;i<SIZE;i++){
		x[i]=(i+1)*10;
	}
	for(i=0;i<SIZE;i++){
		printf("x[%d] = %d%s",i,x[i],(i+1)%5?"\t":"\n");
	}
	return 0;
}

