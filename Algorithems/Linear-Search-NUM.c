//
// Created by 33133 on 24-4-16.
//
#include <stdio.h>

int main(void){
    int target;
    int nums[] = {1,20,40,50,500};
    scanf("%d",&target);
    for(int i = 0 ; i < 5;i++){
        if (nums[i]==target)
        {
            printf("Found.\n");
            return 0;
        }
    }
    printf("Not found.\n");
    return 1;
}