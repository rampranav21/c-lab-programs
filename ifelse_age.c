#include <stdio.h>
 int main()
 {
    int age;
    printf("enter the age :");
    scanf("%d",&age);
    if(age>18){
    printf("adult \n");
    printf("they can drink water \n");
    }
    else{
    printf("not adult");
    }
    return 0;
 }