#include <stdio.h>
#define FIRST 11
#define SECOND 9
#define THIRD 10

int main(){
	int student[3][11];
	int student_num[3];
	int top[3];
	int bottom[3];
	float average[3];
	int total;
	int all_top;
	int all_bottom;
	float all_average;
	int all_total;
	int i;
	int j;
	student_num[0]=FIRST;
	student_num[1]=SECOND;
	student_num[2]=THIRD;
	all_total=0;
	for(i=0;i<3;i++){
		total=0;
		for(j=0;j<student_num[i];j++){
			printf("grade = %d , No.%d : ",i+1,j+1);
			scanf("%d",&student[i][j]);
			if(i==0&&j==0){
				all_top=student[i][j];
				all_bottom=student[i][j];
			}
			if(j==0){
				top[i]=student[i][j];
				bottom[i]=student[i][j];
			}
			if(top[i]<student[i][j]){
				top[i]=student[i][j];
			}
			if(bottom[i]>student[i][j]){
				bottom[i]=student[i][j];
			}
			if(all_top<student[i][j]){
				all_top=student[i][j];
			}
			if(all_bottom>student[i][j]){
				all_bottom=student[i][j];
			}
			all_total+=student[i][j];
			total+=student[i][j];
		}
		average[i]=(float)total/student_num[i];
	}
	all_average=(float)all_total/(FIRST+SECOND+THIRD);
	for(i=0;i<3;i++){
		printf("grade = %d : top = %d , bottom = %d , average = %f\n",i+1,top[i],bottom[i],average[i]);
	}
	printf("all : top = %d , bottom = %d , average = %f\n",all_top,all_bottom,all_average);
	return 0;
}

