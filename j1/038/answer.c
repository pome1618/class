#include <stdio.h>

int main(){
	int i;
	int sum=0;
	for(i=1;i<=100;i+=2){
		sum+=i;
	}
	//printf("%d\n",(1+99)*50/2);
	printf("%d\n",sum);
	return 0;
}

