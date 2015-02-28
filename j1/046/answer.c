#include <stdio.h>

int main(){
	int N;
	int ans=1;
	int i=1;
	printf("N:");	scanf("%d",&N);
	if(N<0){
		printf("計算できません\n");
		return -1;
	}
	while(i<=N){
		ans*=i++;
	}
	printf("ans=%d\n",ans);
	return 0;
}

