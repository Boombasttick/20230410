// 位段---存储

#include <stdio.h>

struct S
{
    int a : 3;
    int b : 4;
    int c : 5;
    int d : 4 ;
};

int main()
{
    struct S s = {0};
    s.a = 10;    //1010放不下，只存放010
    s.b = 20;    //10100放不下，只存放0100
    s.c = 3;
    s.d = 4;
    printf("%d\n",sizeof(s));
    return 0;
}