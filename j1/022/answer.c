#include <stdio.h>

int main(){
	int x;
	printf("x:");	scanf("%d",&x);
	if(x<0||x>100){
		return -1;
	}
	//*****
	if(x>=80){
		printf("優\n");
	}
	if(x<80&&x>=70){
		printf("良\n");
	}
	if(x<70&&x>=60){
		printf("可\n");
	}
	if(x<60){
		printf("不可\n");
	}
	//*****
	return 0;
}

