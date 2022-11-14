
//Find the area and perimeter of a rectangle

#include<stdio.h>

int main(){
    int length=8;
    int breadth=5;

    int area=length*breadth;
    int perimeter=2*(length+breadth);

    printf("Length=%d\n",length);
    printf("Breadth=%d\n",breadth);
    printf("Area=%d\n",area);
    printf("Perimeter=%d",perimeter);


    return 0;

}