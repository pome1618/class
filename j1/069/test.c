#include <stdio.h>
#include <string.h>

int main(){
	char c[8];
	char pattern[8]="%3s";
	pattern[1]=strlen("■")+0x30;
	while(scanf(pattern,c)!=EOF){
		if(!strcmp(c,"■")){
			printf("1");
		}else if(!strcmp(c,"□")){
			printf("0");
		}else{
			continue;
		}
		printf(",");
	}
	return 0;
}

