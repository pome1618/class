#include <stdio.h>

int main(){
	int month;
	int day;
	int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int elapse=0;
	int i;
	printf("month:");	scanf("%d",&month);
	printf("day:");		scanf("%d",&day);
	for(i=0;i<month-1;i++){
		elapse+=months[i];
	}
	elapse+=day;
	printf("elapse = %d\n",elapse-1);
	return 0;
}

