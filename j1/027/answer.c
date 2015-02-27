#include <stdio.h>

int main(){
	int S;
	int D;
	printf("S:");	scanf("%d",&S);
	if(S<5000){
		D=S*0.9;
	}else if(S<10000){
		D=S*0.8;
	}else{
		D=S*0.7;
	}
	printf("D=%d\n",D);
	return 0;
}

