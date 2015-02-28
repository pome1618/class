#include <stdio.h>

void swap(int *a,int *b){
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

int main(){
	int max;
	int min;
	int sum=0;
	int i;
	printf("num1:");	scanf("%d",&max);
	printf("num2:");	scanf("%d",&min);
	if(max<min){
		swap(&max,&min);
	}
	for(i=min;i<=max;i++){
		sum+=i;
	}
	printf("%d\n",sum);
	return 0;
}

