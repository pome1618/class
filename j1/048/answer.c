#include <stdio.h>

int main(){
	int total=0;
	int i=0;
	int tmp=0;
	do{
		total+=tmp;
		printf("No.%2d:",i+++1);
		scanf("%d",&tmp);
	}while(tmp!=999);
	printf("average=%5.1f\n",(float)total/(i-1));
	return 0;
}

