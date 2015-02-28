#include <stdio.h>

int main(){
	int h;
	int w;
	int i;
	int j;
	printf("height:");	scanf("%d",&h);
	printf("widrh :");	scanf("%d",&w);
	for(i=0;i<h;i++){
		for(j=0;j<w;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

