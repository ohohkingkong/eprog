#include <stdio.h>
int main(){
	int i, grades[3];
	for(i=0; i<3; i++){
		printf("Enter grade %d: ", i+1);
		scanf("%d", &grades[i]);
	}
	printf("yada yada\n");
	printf("tinky winky\n");
	printf("lala\n");
	printf("The grades are: \n");
	for(i=0; i<3; i++){
		printf("Grade %d: %d\n", (i+1), grades[i]);
	}
	printf("The 2nd grade is: %d\n", grades[1]);
}
