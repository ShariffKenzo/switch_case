#include<stdio.h>

int main(){

    int x;

    printf("enter integer from 1 to 10:");

    scanf("%d", &x);

    switch(x){

    case 1:printf("the value you entered is 1");
           break;
    case 2:printf("the value you entered is 2");
           break;
    case 3:printf("the value you entered is 3");
           break;
    case 4:printf("the value you entered is 4");
           break;
    case 5:printf("the value you entered is 5");
           break;
    case 6:printf("the value you entered is 6");
           break;
    case 7:printf("the value you entered is 7");
           break;
    case 8:printf("the value you entered is 8");
           break;
    case 9:printf("the value you entered is 9");
           break;
    case 10:printf("the value you entered is 10");
           break;
    default: printf("the value is outside the given range");

    }



}
