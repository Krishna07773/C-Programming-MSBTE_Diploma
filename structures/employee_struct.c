#include<stdio.h>
   struct employee{
    int id;
    char name[50];
    float salary;
   };
int main(){
    struct employee e[20];

for(int i= 0; i <2; i++){
    printf("enter your id, name and salary respectively");
    scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);
}
for(int i= 0; i <2; i++){
    printf("%d\n%s\n%f\n\n", e[i].id, e[i].name, e[i].salary);
}
    return 0;
}