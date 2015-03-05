#include <stdio.h>

int strlen(char str[]);

int main(){
	char str[64];
	int len=0;
	printf("str:");
	scanf("%20s",str);
	len=strlen(str);
	printf("strlen = %d",len);
	return 0;
}

int strlen(char str[]){
	char *p=str;
	int len=0;
	while(*p!='\0'){
		len++;
		p++;
	}
	return len;
}

