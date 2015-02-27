#include <stdio.h>

int main(){
	int x;
	printf("x:");	scanf("%d",&x);
	if(x<=0){
		return -1;
	}
	printf("%s\n",x%2==0?"Even!":"Odd!");
	return 0;
}

