#include <stdio.h>

int main(){
	int japanese;
	int math;
	int english;
	int social;
	int science;
	int total;
	float average;
	printf("japanese :");	scanf("%d",&japanese);
	printf("math     :");	scanf("%d",&math);
	printf("english  :");	scanf("%d",&english);
	printf("social   :");	scanf("%d",&social);
	printf("science  :");	scanf("%d",&science);
	total=japanese+math+english+social+science;
	average=total/5.0;
	printf("total\t= %6d\naverage\t= %6.1f\n",total,average);
	return 0;
}

