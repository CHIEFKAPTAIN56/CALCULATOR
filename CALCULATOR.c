/*
Project:  simple calculator that takes two numbers and out puts the sum, difference, product and quotient of the numbers

Author:   Solomon Ayoo Omondi
compiler: c89
license:  MIT
date:     July 2022







*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   // variable diclaration
   float num1,num2,sum,diffrence,product,quotient;
    printf("\tcalculator!\n");
    // input
    printf("Enter two numbers: ");
    scanf("%f%f",&num1,&num2);
    // computation
    // arithmetic operation: + - / ++ -- %
    sum = num1 + num2;
    product = num1 * num2;
    diffrence = num1 - num2;
    quotient = num1 / num2;
    // output
    // 20 + 30 =50
    printf("%8.2f + %8.2f = %-8.2f\n",num1,num2,sum);
    printf("%8.2f - %8.2f = %-8.2f\n",num1,num2,diffrence);
    printf("%8.2f * %8.2f = %-8.2f\n",num1,num2,product);
    printf("%8.2f / %8.2f = %-8.2f\n",num1,num2,quotient);
    return 0;
}
