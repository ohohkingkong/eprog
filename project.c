#include <stdio.h> 
#include <string.h>
struct detail{
	long id;
	float gpa;
};

struct student{  
	char name[30];
	struct detail info;
}; 

int main (){
	struct student stud;

	printf("Enter student name: ");
	scanf("%s", &stud.name);
	printf("Enter student I.D.: ");
	scanf("%d", &stud.info.id);
	printf("Enter student GPA: ");
	scanf("%f", &stud.info.gpa);
	printf ("%s %ld %f\n", stud.name, stud.info.id, stud.info.gpa) ;
} 
