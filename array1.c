#include<stdio.h>

int  main(){
	int i, sum=0, average, grades[3];
	for(i=0; i<3; i++){
		printf("Enter grade %d:" ,i+1);
		scanf("%d", &grades[i]);
		
		}
		for (i=0; i<3; i++){
			sum += grades[i];
		}
		average = sum/3;
		printf("The 2nd grade is: %d\n", average);
		if(average>=75){
			printf("pass");
		}else{
			printf("fail");
		}
	
}
