#include<stdio.h>
#include<string.h>
 int main(){
    char arr[50];
    int len;
    printf("enter a string\n");
    scanf("%s", arr);
    len = strlen(arr);

    printf("length of the string is %d\n", len);

    strrev(arr);
     printf(" %s\n", arr);

    return 0; 
 }