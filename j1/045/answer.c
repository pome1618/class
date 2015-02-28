#include <stdio.h>

int main(){
	int i=1;
	while(i<=300){
		if(i%2!=0&&i%3!=0&&i%5!=0){
			printf("%d,",i);
		}
		i++;
	}
	printf("\b \n");
	return 0;
}

