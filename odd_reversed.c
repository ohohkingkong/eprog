#include<stdio.h> 

int main(){
    int rem,i;
        printf("\n The odd numbers between 1 and 100 are \n"); 
    for(i=100; i>0; --i){
        rem = i % 2;
    if(rem != 0)
        printf("\n  %d",i);}
    return 0; 
    
    } 
