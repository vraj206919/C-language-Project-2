

#include <stdio.h>


int main(){

    char num = 'V';

    do
    {
       printf("%c\n",num);

       num = num + 4;
    } while (num <= 'z' );
    
    return 0;
}