//
// Created by zplty on 2019/7/11.
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
    FILE* fp = fopen("test", "wb+");
    printf("start cc!\n");
    clock_t begin, end;
    begin = clock();

    unsigned int a[10];
    for (unsigned int i = 0; i < 10; i++) {
        a[i] = i;
    }
    fwrite(a, sizeof(a[0]), 10, fp);
    fclose(fp);

    fp = fopen("test", "rb");
    fseek(fp,0,SEEK_END);
    int size = ftell(fp);
    printf("file size: %d\n", size);

    end = clock();
    printf("Running Time：%f s\n", (double)(end - begin) / CLOCKS_PER_SEC );
}
