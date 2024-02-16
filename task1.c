// Q.1 Write a Program to find the minimum number from the given 2 numbers using if else.
#include<stdio.h>
main(){

    int num1,num2;

    printf("Enter the number 1:");
    scanf("%d", &num1);

    printf("Enter the number 2:");
    scanf("%d", &num2);

    printf("Number 1 is--> %d\n",num1);
    printf("Number 2 is--> %d\n",num2);

    if(num1<num2){
        printf("---> %d is Minimum",num1);
    }else{
        printf("---> %d is Minimum",num2);
    }

// Q.2 Write a Program to find if a given number is neutral or not using a ladder if else.

    int num;

    printf("\nEnter the Number:");
    scanf("%d", &num);

    printf("Number is--> %d\n",num);

    if(num==0){
        printf("--->%d :Number is Neutral",num);
    } else if(num<0){
        printf("--->%d :Number is Negative",num);
    }else{
        printf("--->%d :Number is Positive",num);
    }
}