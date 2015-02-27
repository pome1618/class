#include <stdio.h>

int main(){
	int month;
	char *str;
	printf("month:");	scanf("%d",&month);
	switch(month){
		case 4:
		case 5:
		case 6:
			str="Spring";
			break;
		case 7:
		case 8:
			str="Summer";
			break;
		case 9:
		case 10:
		case 11:
			str="Autumn";
			break;
		case 12:
		case 1:
		case 2:
			str="Winter";
			break;
		default:
			break;
	}
	printf("%s\n",str);
	return 0;
}

