//
// Created by zplty on 2019/7/11.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    FILE* fp = fopen("test", "wb+");

    unsigned int a[10];
    for (unsigned int i = 0; i < 10; i++) {
        a[i] = i;
    }
    fwrite(a, sizeof(a), 10, fp);
}
