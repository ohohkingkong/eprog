#include <stdio.h>
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");

    //read file into array
    int i, sum = 0;
    int numberArray[5];

    for(i=0; i<5; i++){
        fscanf(myFile, "%d", &numberArray[i]);
        sum+=numberArray[i];
    }
    fclose(myFile);
    //write array to file
    myFile = fopen("sample2.txt", "w");
    for(i=0; i<5; i++){
        fprintf(myFile, "%d", numberArray[i]);
	fprintf(myFile, "%d", numberArray[i]);
    }
    printf("%d", sum);
}
