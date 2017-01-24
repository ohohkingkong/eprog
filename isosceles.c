#include<stdio.h>

int main(){

   int i, j, k, l ;
       printf("enter number: ");
       scanf("%d",&i);

       for(j=0; j<=i; j++){
       for(k=0; k<j; k++){ printf("*"); } printf("\n"); } for(j=i; j>=0; --j){
       for(k=1; k<j; k++){
        printf("*");
    }
       printf("\n");
   }
   
system("pause");

}
