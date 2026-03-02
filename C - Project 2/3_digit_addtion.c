
#include <stdio.h>


int main(){

    int num, first, second;

    printf("Enter any Number: ");
    scanf("%d",&num);

    second = num  % 10;

    while (num > 10)
    {
        num = num / 10;
    }

    first = num;

    printf("The sum of the first and the second digit:%d",first + second);

    return 0;
    
}