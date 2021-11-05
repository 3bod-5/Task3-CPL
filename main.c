#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    printf("Enter a number : ");
    scanf("%f",&num);
    if(num>=0 && num<=25){
        printf("%f is between 0 to 25\n",num);
    }
    if(num>25 && num<=50){
        printf("%f is between 25 to 50\n",num);
    }
    if(num>50 && num<=75){
        printf("%f is between 50 to 75\n",num);
    }
    if(num>75 && num<=100){
        printf("%f is between 75 to 100\n",num);
    }
    if(num>100 || num<0){
        printf("Out of Intervals");
    }
    return 0;
}
