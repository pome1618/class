#include <stdio.h>

int main(){
	int x;
	int ans=1;
	int i;
	printf("x:");	scanf("%d",&x);
	printf("x! = ");
	for(i=1;i<=x;i++){
		printf("%d*",i);
		ans*=i;
	}
	printf("\b = %d\n",ans);
	return 0;
}

