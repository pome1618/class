#include <stdio.h>

int main(){
	int s;
	int w;
	printf("西暦を入力せよ 1926～2011：");
	scanf("%d",&s);
	if(s<1926||s>2011){
		return -1;
	}
	if(s<1989){
		if(s-1926==0){
			printf("昭和元年です\n");
		}else{
			printf("昭和%2d年です\n",s-1926+1);
		}
	}else{
		if(s-1989==0){
			printf("平成元年です\n");
		}else{
			printf("平成%2d年です\n",s-1989+1);
		}
	}
	return 0;
}

