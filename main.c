#include <stdio.h>
#include <stdlib.h>

int main()
{
    float firstvalue = 0;
    float secondvalue = 0;
    float outputvalue = 0;
    char operation;

    printf("Enter the first value : ");
    scanf("%f",&firstvalue);
    printf("Enter the arithmetic operation(+,-,*,/) : ");
    scanf(" %c",&operation);
    printf("Enter the second value : ");
    scanf("%f",&secondvalue);

    if (operation=='+'){
        printf("Result : %f",firstvalue+secondvalue);
    }
    if (operation=='-'){
        printf("Result : %f",firstvalue-secondvalue);
    }
    if (operation=='*'){
        printf("Result : %f",firstvalue*secondvalue);
    }
    if (operation=='/'){
        printf("Result : %f",firstvalue/secondvalue);
    }



    return 0;
}
