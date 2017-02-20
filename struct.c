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

   strcpy(stud.name, "edos");
   stud.info.id = 123456789 ;
   stud.info.gpa = 3.4 ;
   printf ("%s %ld %f\n", stud.name, stud.info.id, stud.info.gpa) ;
} 
