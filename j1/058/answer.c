#include <stdio.h>

int digit(int num,int digit);
int power(int x,int y);

int main(){
	int num;
	int i;
	printf("num:");	scanf("%d",&num);
	for(i=1;i<=4;i++){
		printf("%d\n",digit(num,i));
	}
	return 0;
}

int digit(int num,int digit){
	return num%power(10,digit)/power(10,digit-1);
}

int power(int x,int y){
	int result=x;
	int i;
	if(y<=0){
		return 1;
	}
	for(i=1;i<y;i++){
		result*=x;
	}
	return result;
}

