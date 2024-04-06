//
// Created by 33133 on 2024/4/5.
//
#include <stdio.h>

int main(){
    int n,m;
    char C,c;
    scanf("%d",&n);
    C = (char)n;
    c = (C>='A'&&C<='Z')?(char)(C+32):C;
    m = (int)c;
    printf("%d,%c\n",n,C);
    printf("%d,%c\n",m,c);
}