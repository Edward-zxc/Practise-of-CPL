//
// Created by 33133 on 2024/4/5.
//

#include <stdio.h>

int main(){
    int num;
    printf("Please input an int num: \n");
    scanf("%d",&num);
    int fifty,twenty,ten,five,one;
    fifty = num / 50;
    num = num % 50;
    twenty = num / 20;
    num = num % 20;
    ten = num / 10;
    num = num % 10;
    five = num / 5;
    num = num %5;
    one = num / 1;
    printf("%d\n",fifty);
    printf("%d\n",twenty);
    printf("%d\n",ten);
    printf("%d\n",five);
    printf("%d\n",one);
}