include<stdio.h>

main(){
	FILE *myFile;
	myFile = fopen("sample.txt", "r");
	//read file into array
	int i;
	int c;
	int a;
	int numberArray[2];

	for (i = 0; i < 2; i++){
    fscanf(myFile, "%d", &numberArray[i]);
	}
   	for (i = 0; i < 2; i++){
    printf("Number is: %d\n\n", numberArray[i]);	
	}
	a=(numberArray[0]*numberArray[0])+(numberArray[1]*numberArray[1]);
	printf("c is: %d", c=sqrt(a));
}
