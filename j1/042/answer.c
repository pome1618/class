#include <stdio.h>

int main(){
	int N;
	int ans=1;
	int i;
	printf("N:");	scanf("%d",&N);
	for(i=1;i<=N;i++){
		ans*=i;
	}
	printf("%d\n",ans);
	return 0;
}

