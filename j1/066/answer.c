#include <stdio.h>
#define NUM 15

int main(){
	int student[NUM];
	int s[4]={0};
	int i;
	for(i=0;i<NUM;i++){
		printf("No.%2d:",i+1);
		scanf("%d",&student[i]);
		s[student[i]>=80?0:student[i]>=70?1:student[i]>=60?2:3]++;
	}
	printf("優　：%2d\n",s[0]);
	printf("良　：%2d\n",s[1]);
	printf("可　：%2d\n",s[2]);
	printf("不可：%2d\n",s[3]);
	return 0;
}

