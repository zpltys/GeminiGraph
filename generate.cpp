//
// Created by zplty on 2019/7/11.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    FILE* fp = fopen("test", "wb+");

    uint32_t a[10];
    for (uint32_t i = 0; i < 10; i++) {
        a[i] = i;
    }
    fwrite(a, sizeof(a), 10, fp);
}