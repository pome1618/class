#include <stdio.h>

int check(char c);

int main(){
	char str[64];
	char *p=str;
	printf("str:");
	scanf("%20s",str);
	while(*p!='\0'){
		if(check(*p)){
			*p-=0x20;
		}
		p++;
	}
	printf(str);
	return 0;
}

int check(char c){
	return c=='a'||c=='i'||c=='u'||c=='e'||c=='o';
}

