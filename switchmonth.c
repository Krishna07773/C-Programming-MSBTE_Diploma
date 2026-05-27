#include<stdio.h>
  int main(){
    int month;
    printf("enter month no.(1-12)");
    scanf("%d", &month);
    
    switch(month){
        case 1: printf("january, next feb");
        break;
        case 2: printf("feb, next march");
        break;
        case 3: printf("march, next april");
        break;
        case 4: printf("april, next may");
        break;
        case 5: printf("may, next june");
        break;
        case 6: printf("june, next july");
        break;
        case 7: printf("july, next august");
        break;
        case 8: printf("august, next sept");
        break;
        case 9: printf("sept, next oct");
        break;
        case 10: printf("oct, next nov");
        break;
        case 11: printf("nov, next dec");
        break;
        case 12: printf("dec, next jan");
        break;
        default: printf("invalid");
    }
    
  
    return 0;
  }