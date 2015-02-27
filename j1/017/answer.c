#include <stdio.h>
#include <math.h>

int main(){
	float r;
	printf("r:");	scanf("%f",&r);
	if(r<0){
		printf("計算できません\n");
		return -1;
	}
	printf("volume=%f\n",4.0/3.0*M_PI*r*r*r);
	return 0;
}

