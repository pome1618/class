#include <stdio.h>

int main(){
	float x;
	float y;
	printf("2つの変数を入力してください\n");
	printf("x=");	scanf("%f",&x);
	printf("y=");	scanf("%f",&y);
	printf("大きい方の値は,%fです.\n",x>y?x:y);
	return 0;
}

