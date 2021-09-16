/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define PI 3.14159
float cal_area(float r)
{
    return PI*r*r;
    
}
int main()
{
    float r, area;
    printf("Enter the number: ");
    scanf("%f",&r);
    if(r>0)
    {
    area=cal_area(r);
    printf("The area of a circle of radius %0.1f units is  %0.4f units", r,area);
    }
    else
    printf("Error: Negative values not permitted");

    return 0;
}
