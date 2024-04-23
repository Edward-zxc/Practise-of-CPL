//
// Created by 33133 on 24-4-21.
//
#include <stdio.h>

int main(void) {
    int num[8];

    // 输入数组元素
    for (int i = 0; i < 8; i++) {
        scanf("%d", &num[i]);
    }

    // 冒泡排序
    for (int i = 0, length1 = sizeof(num) / sizeof(num[0]) - 1; i < length1; i++) {
        for (int j = 0, length2 = sizeof(num) / sizeof(num[0]) - 1; j < length2 - i - 1; j++) {
            if (num[j] > num[j + 1]) {
                // 交换元素
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    // 输出排序后的数组
    for (int i = 0; i < 8; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}
