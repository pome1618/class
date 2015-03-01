#include <stdio.h>
#define SIZE 5

int main(){
	int student[SIZE];
	int i;
	int total=0;
	for(i=0;i<SIZE;i++){
		printf("No.%d:",i+1);
		scanf("%d",&student[i]);
		total+=student[i];
	}
	printf("average = %.1f\n",(float)total/SIZE);
	for(i=0;i<SIZE;i++){
		printf("No.%d = %d\n",i+1,student[i]);
	}
	return 0;
}

