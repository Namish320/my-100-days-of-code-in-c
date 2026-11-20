//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.


#include <stdio.h>
int area , perimeter , length, breadth;

int main (){
    printf("Enter the length and breadth respectively:\n");
    scanf("%d,%d", &length,&breadth);
    area = length * breadth;
    perimeter = 2*(length+ breadth);
    printf("Area: %d\n",area);
    printf("Perimeter: %d\n",perimeter);
    return 0;
} 




