Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main(){
    int sum,diff,product,quotient,a,b;
    printf ("Enter the number:\n");
    scanf("%d%d",&a,&b);
    sum =a+b;
    diff=a-b;
    product =a*b;
    quotient=a/b;
    printf("sum =%d\n",sum);
    printf("diff = %d\n",diff);
    printf("product =%d\n",product);
    printf("quotient =%d",quotient);
    return 0;
}