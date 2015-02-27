#include <stdio.h>

int main(){
	int math;
	int i;
	printf("math:");	scanf("%d",&math);
	for(i=0;i<(math>=60?5:10);i++){
		printf(math>=60?"合格！":"不合格！");
	}
	return 0;
}

