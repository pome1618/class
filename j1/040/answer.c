#include <stdio.h>

int main(){
	int x;
	int ans=0;
	int i;
	printf("x:");	scanf("%d",&x);
	for(i=10;i<=x;i+=10){
		ans+=i*(i+10)+(i+20);
	}
	printf("%d\n",ans);
	return 0;
}

