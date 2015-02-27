#include <stdio.h>

int main(){
	int x;
	char *str;
	printf("x:");	scanf("%d",&x);
	switch(x%3){
		case 0:
			str="dividable by 3";
			break;
		case 1:
			str="the remainder is 1";
			break;
		case 2:
			str="the remainder is 2";
			break;
		default:
			str="error";
			break;
	}
	printf("%s\n",str);
	return 0;
}

