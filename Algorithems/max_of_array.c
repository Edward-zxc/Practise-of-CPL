//
// Created by 33133 on 24-4-19.
//
#include <stdio.h>

int findMax(int arr[], int size) {
    // 假设第一个元素是最大的
    int max = arr[0];

    // 遍历数组，找到最大值
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {12, 45, 67, 89, 34, 56};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, size);
    printf("The maximum value in the array is: %d\n", max);

    return 0;
}
