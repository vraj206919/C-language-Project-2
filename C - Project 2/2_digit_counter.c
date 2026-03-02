

#include <stdio.h>


int main(){

    int num, count = 0;

    printf("Enter your number: ");
    scanf("%d",&num);

      while (num  > 0 )
      {
        count++;

        num = num / 50;
      }

      printf("Total Number of Digit:%d",count);
      

    return 0;
}