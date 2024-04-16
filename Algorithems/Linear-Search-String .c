//
// Created by 33133 on 24-4-16.
//
# include <stdio.h>
# include <string.h>
int main(void){
    char target[100];
    char *strings[]={"a","b","c","d","e"};
    scanf("%s",target);
    for (int i = 0;i <4; i++) {
        if (strcmp(strings[i],target)==0){
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}