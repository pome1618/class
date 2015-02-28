#include <stdio.h>

int main(){
	int i;
	for(i=1;i<=300;i++){
		if(i%2!=0&&i%3!=0){
			printf("%d,",i);
		}
	}
	printf("\b \n");
	return 0;
}

