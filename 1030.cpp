#include <stdio.h>
void foo(void)
{
    char a;
    printf("%c\n", a);
}
void bar(void)
{
    int a = 97 << 24;
}
int main(void)
{
    bar();
    foo();
}
