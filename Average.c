#include <stdio.h>
#include <conio.h>

float avg(int a, int b, int c);

int main()
{
    int a, b, c;
    float result;
    clrscr();

    printf("Enter 1st number\n");
    scanf("%d", &a);
    printf("Enter 2nd number\n");
    scanf("%d", &b);
    printf("Enter 3rd number\n");
    scanf("%d", &c);

    result = avg(a, b, c);
    printf("Ther average of 3 numbers is  %0.2f \n", result);
    return 0;
}

float avg(int a, int b, int c)
{
    float average = (float)(a + b + c) / 3;
    return average;
}
