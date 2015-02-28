#include <stdio.h>

int main(){
	int i;
	int j;
	for(i=2;i<=300;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(i==j){
			printf("%d,",i);
		}
	}
	printf("\b \n");
	return 0;
}

