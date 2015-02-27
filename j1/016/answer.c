#include <stdio.h>

int main(){
	int x;
	int y;
	printf("x:");	scanf("%d",&x);
	printf("y:");	scanf("%d",&y);
	if(x%y==0){
		printf("商＝%d\n",x/y);
	}else{
		printf("割りきれません\n");
	}
	return 0;
}

