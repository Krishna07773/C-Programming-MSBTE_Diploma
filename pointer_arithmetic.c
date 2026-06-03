#include<stdio.h>
  int main(){
    int a,b;
    int *x,*y;

    printf("enter 2 numbers ");
    scanf("%d %d", &a,&b);
    x=&a;
    y=&b;

    printf("%d\n", *x+*y);
    printf("%d\n", *x-*y);
    printf("%.2f\n", (float)*x / *y);
    printf("%d\n", *x * *y);

    return 0;
  }
