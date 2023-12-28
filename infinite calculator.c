#include <stdio.h>

int main()
{
    char i;
    float n1,n2,result;

    printf("Welcome to cal \n");
    printf("----------------------------\n");
    printf("Enter number = \n");

    scanf("%f %c %f", &n1, &i, &n2);

    switch(i)
    {
        case '+': 
            result = n1 + n2;
            break;

        case '-': 
            result = n1 - n2;
            break;

        case '*': 
            result = n1 * n2;
            break;

        case '/': 
            result = n1 / n2;
            break;

        default: 
            printf("Invalid operator");
    }

    printf("%.2f %c %.2f = %.2f", n1, i, n2, result);

}	