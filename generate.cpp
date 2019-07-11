//
// Created by zplty on 2019/7/11.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    FILE* fp = fopen("test", "wb+");

    int a[10];
    for (int i = 0; i < 10; i++) {
        a[i] = i;
    }
    fwrite(a, sizeof(a), 10, fp);
}