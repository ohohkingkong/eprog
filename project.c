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
	FILE *myFile;
    int choice = 1;
    int num_records = 0;
    
    myFile = fopen("sample.txt", "a");
	while(choice = 1){
		printf("Enter student name: ");
		scanf("%s", &stud.name);
		printf("Enter student I.D.: ");
		scanf("%d", &stud.info.id);
		printf("Enter student GPA: ");
		scanf("%f", &stud.info.gpa);
		printf("%s %ld %.2f\n", stud.name, stud.info.id, stud.info.gpa);
		fprintf(myFile, "%s %ld %.2f\n", stud.name, stud.info.id, stud.info.gpa);	
		printf("Add another record?[1/0]: ");
		scanf("%d", &choice);
		if(choice == 0){
			break;
		}
	}
	fclose(myFile);
	
	myFile = fopen("sample.txt", "r");
	//check if file exists
    if(myFile == NULL){
    	printf("Error: File does not exist");
    	exit(1);
	}
	char temp[128];
	while (fgets(temp, sizeof temp, myFile) != NULL) {
		sscanf(temp, "%s %d %f", &stud.name, &stud.info.id, &stud.info.gpa);
		printf("%s %d %f\n", stud.name, stud.info.id, stud.info.gpa);
	}
	fclose(myFile);
} 
