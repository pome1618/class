#include <stdio.h>

int main(){
	int japanese=60;
	int math=87;
	int english=76;
	int social=84;
	int science=96;
	int total=japanese+math+english+social+science;
	float average=total/5.0;
	printf("total=%d\naverage=%.1f\n",total,average);
	return 0;
}

