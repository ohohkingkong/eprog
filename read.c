#include <stdio.h>
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");

    //read file into array
    char a[26];
    int i;
    for(i=65; i<91; i++){
    	a[i]=i;
	}
	for(i=65; i<91; i++){
    	printf("%c", i);
	}
    int numberArray[5];

    for (i = 0; i < 5; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }

    for (i = 0; i < 5; i++){
        printf("Number is: %d\n\n", numberArray[i]);
    }
    
}
