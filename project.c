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

void displayMenu(){
	printf("0 - Exit\n");
	printf("1 - Write to file\n");
	printf("2 - Read file\n");
}

void writeToFile(){
	FILE *myFile;
	struct student stud;
	myFile = fopen("sample.txt", "a");
	printf("Enter student name: ");
	scanf("%s", &stud.name);
	printf("Enter student I.D.: ");
	scanf("%d", &stud.info.id);
	printf("Enter student GPA: ");
	scanf("%f", &stud.info.gpa);
	printf("%s %ld %.2f\n", stud.name, stud.info.id, stud.info.gpa);
	fprintf(myFile, "%s %ld %.2f\n", stud.name, stud.info.id, stud.info.gpa);	
	fclose(myFile);
}

void readFromFile(){
	struct student stud;
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
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

int main (){	
    int choice = 1;
    
    displayMenu();
    scanf("%d", &choice);
    while(choice != 0){
    	switch(choice){
    		case 0: 
    			exit(1);
    			break;
    		case 1: 
    			writeToFile();
    			break;
    		case 2: 
    			readFromFile();
    			break;
		}
		displayMenu();
    	scanf("%d", &choice);
	}    
} 
