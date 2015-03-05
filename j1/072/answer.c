#include <stdio.h>

int count(int year[2],int month[2],int day[2]);

int main(){
	int year[2];
	int month[2];
	int day[2];
	int elapse;
	int i;
	for(i=0;i<2;i++){
		printf("year%d  :",i+1);
		scanf("%d",&year[i]);
		printf("month%d :",i+1);
		scanf("%d",&month[i]);
		printf("day%d   :",i+1);
		scanf("%d",&day[i]);
	}
	elapse=count(year,month,day)+1;
	printf("elapse = %d\n",elapse);
}

int count(int year[2],int month[2],int day[2]){
	int months[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	int elapse=0;
	int i;
	int j;
	for(i=year[0];i<year[1];i++){
		elapse+=i%4==0?366:365;
	}
	for(i=0;i<month[1]-1;i++){
		elapse+=year[1]%4==0?months[1][i]:months[0][i];
	}
	elapse+=day[1];
	for(i=0;i<month[0]-1;i++){
		elapse-=i%4==0?months[1][i]:months[0][i];
	}
	elapse-=day[0];
	return elapse;
}
