#include<stdio.h>

void main()
{
    int num;
    printf("Enter the number you want to check:");
    scanf("%d",&num);

    if(num>0)
        printf("\nThe number %d is positive\n",num);
    else
        printf("The nubmer %d is not-positive ",num);
        

}