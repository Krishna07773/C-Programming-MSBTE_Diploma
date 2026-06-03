#include<stdio.h>
 int main(){
    int a,flag=0,i;
    printf("enter a number");
    scanf("%d", &a);

if(a<=1){
    printf("number is prime");
} else{
    for( i= 2; i<=a/2; i++){
        if(a%i==0){
            flag=1;
            break;
        }
    }
}   
    if(flag==0){
        printf("number is prime");
    }else{
        printf("number is not prime");
    }
 
    return 0;
 }