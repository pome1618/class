#include <stdio.h>
#include <math.h>

int main(){
	int r;
	printf("r:");	scanf("%d",&r);
	printf("area=%f\nvolume=%f\n",r*r*M_PI,4.0/3.0*M_PI*r*r*r);
	return 0;
}

