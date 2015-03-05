#include <stdio.h>

int main(){
	char str[200];
	char *p=str;
	int top_flag=1;
	printf("str:");
	fgets(str,sizeof(str),stdin);
	while(*p!='\0'){
		if(top_flag){
			*p-=0x20;
			top_flag=0;
		}
		if(*p==' '){
			top_flag=1;
		}
		p++;
	}
	printf(str);
	return 0;
}

