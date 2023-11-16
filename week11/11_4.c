//
// Created by Kevin Ye on 11/16/2023.
// Copyright (c) 2023 Kevin Ye. All rights reserved.

#include <stdio.h>

int Union(int (*a)[6], int res[25]) {
    int unionSet[1000] = {0};  // 临时数组存储并集
    int count = 0;           // 记录并集中元素的个数

    for (int i = 0; i < 5; i++) {
        int setSize = a[i][0];  // 当前集合的元素个数
        for (int j = 1; j <= setSize; j++) {
            int element = a[i][j];  // 当前集合的元素
            if (!unionSet[element]) {
                unionSet[element] = 1;  // 标记为已出现在并集中
                res[count++] = element; // 将元素加入并集
            }
        }
    }

    return count;
}

int main() {
    int sec[5][6] = {0};
    for (int i = 0; i < 5; i++) {
        scanf("%d", &sec[i][0]);
        for (int j = 1; j <= sec[i][0]; j++)scanf("%d", &sec[i][j]);
    }

    int result[25];
    int resultSize = Union(sec, result);

    printf("Union set: ");
    for (int i = 0; i < resultSize; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}
