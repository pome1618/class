#include <stdio.h>

int main(){
	int x;
	printf("math:");	scanf("%d",&x);
	if(x<0||x>100){
		return -1;
	}
	if(x>=80){
		printf("優\n");
	}else if(x>=70){
		printf("良\n");
	}else if(x>=60){
		printf("可\n");
	}else if(1){
		printf("不可\n");
	}
	return 0;
}

