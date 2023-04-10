//结构体传参

#include <stdio.h>


struct S
{
    char c;
    int a;
    double d;
    char arr[20];
};

void Init(struct S* tep)
{
    tep->c = 'w';
    tep->a = 1;
    tep->d = 3.14;
    tep->arr = "hello bit";
}

int main()
{
    struct S s ;
    Init(&s);
    printf("%c %d %lf %s \n",s.c,s.a,s.d,s.arr);
    return 0;
}