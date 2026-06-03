#include<stdio.h>
 int main(){
    float per;
    printf(" enter your percentage");
    scanf("%f", &per);

    if(per>=75)
        printf(" grade: Distinction");
    else if(per>=60 && per< 75)
        printf(" grade: A");
    else if(per>=55 && per<60)
        printf(" grade: B");
    else if(per>=40 && per< 55)
         printf(" pass");
    else 
        printf("fail");

    return 0;
 }