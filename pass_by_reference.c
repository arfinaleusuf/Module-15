#include<stdio.h>
void fun(int* p)
{
    *p = 20;
    // printf("fun er x: %p\n",&x);
}
int main()
{
    int x =10;
    fun(&x);
    printf("%d",x);
    // printf("main funcrion er x: %p\n",&x);
    return 0;
}