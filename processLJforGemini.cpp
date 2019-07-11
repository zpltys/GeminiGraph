#include <bits/stdc++.h>
using namespace std;

char filePath[100] = "soc-LiveJournal1.txt";
char binFile[100] = "livejournal.bin";

typedef unsigned int uint;

int line = 68993773;
uint maxV = 0;

int main()
{
    FILE* re = fopen(filePath, "r");
    FILE* wr = fopen(binFile, "wb+");
    int i;
    uint src, dst;
    for(i = 0; i < line; i++) {
        fscanf(re, "%u%u", &src, &dst);
        maxV = max(maxV, src);
        maxV = max(maxV, dst);
        fwrite(&src, sizeof(src), 1, wr);
        fwrite(&dst, sizeof(dst), 1, wr);
        printf("src:%u dst:%u\n", src, dst);
    }
    fclose(re);
    fclose(wr);
}

