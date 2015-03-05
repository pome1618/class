#include <stdio.h>

int atoi(char str[]);

int main(){
	char str[16];
	int num;
	printf("str:");
	scanf("%2s",str);
	num=atoi(str);
	printf("num = %d\n",num);
	return 0;
}

int atoi(char str[]){
	char *p=str;
	int num=0;
	while(*p!='\0'){
		num*=16;
		num+=*p>=0x30&&*p<=0x39?*p-0x30:*p-0x37;
		p++;
	}
	return num;
}

