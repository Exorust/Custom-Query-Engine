#include<stdio.h>
void func_1();
void func_2();
int a, b = 10;  // declaring and initializing global variables

int main()
{
    printf("Global a = %d\n", a);
    printf("Global b = %d\n\n", b);

    func_2();
    func_1();
    int x,y=0,z=1;
    x = y & z;
    printf("%d\n", x );

    // signal to operating system program ran fine
    return 0;
}

void func_1()
{
    printf("From func_1() Global a = %d\n", a);
    printf("From func_1() Global b = %d\n\n", b);
}

void func_2()
{
    int* z = &a;
    *z = 5;
    printf("Inside func_2() a = %d\n", a);
}
