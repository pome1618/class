#include <stdio.h>

int main(){
	int num=20;
	int tmp;
	int total=0;
	int i;
	for(i=0;i<num;i++){
		printf("No.%2d:",i+1);
		scanf("%d",&tmp);
		total+=tmp;
	}
	printf("average=%6.2f\n",(float)total/num);
	return 0;
}

