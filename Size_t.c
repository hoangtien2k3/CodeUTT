//

#include <stdio.h>
#include <stdlib.h>

void Z1(int *z)
{
    printf(" size of z1 = %d\n", sizeof(z));
}

void Z2(int z[])
{
    printf(" size of z2 = %d\n", sizeof(z));
}

void Z3(int z[10])
{
    printf(" size of z3    = %d\n", sizeof(z));
    printf(" size of z3[5] = %d\n", sizeof(z[5]));
}

int main(int argc, char *argv[])
{
    char a1;
    short int a2;
    int a3;
    long int a4;
    float a5;
    double a6;

    int myarray[10];

    for (a3 = 0; a3 < 10; a3++)
    {
        myarray[a3] = a3;
    }

    printf("\n");
    printf(" size of char      = %d\n", sizeof(a1));
    printf(" size of short int = %d\n", sizeof(a2));
    printf(" size of int       = %d\n", sizeof(a3));
    printf(" size of long int  = %d\n", sizeof(a4));
    printf(" size of float     = %d\n", sizeof(a5));
    printf(" size of double    = %d\n", sizeof(a6));

    printf(" size of myarray      = %d\n", sizeof(myarray));
    printf(" size of myarray[5]   = %d\n", sizeof(myarray[5]));

    printf("\n");

    Z1(myarray);
    Z2(myarray);
    Z3(myarray);
}