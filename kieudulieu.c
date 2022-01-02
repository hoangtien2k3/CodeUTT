
#include <stdio.h>
#include <limits.h> // for int,char macros
#include <float.h>  // for float,double macros

int main()
{
    char c;
    short s;
    int i;
    unsigned int ui;
    float f;
    double d;
    long long ll;

    long a;

    // sizeof
    printf("Size of char is %d\n", sizeof(c)); 
    printf("Size of short is %d\n", sizeof(s));
    printf("Size of int is %d\n", sizeof(i));
    printf("Size of unsigned int is %d\n", sizeof(ui));
    printf("Size of float is %d\n", sizeof(f));
    printf("Size of double is %d\n", sizeof(d));
    printf("Size of long long is %d\n", sizeof(ll));
    printf ("Size of long is %d\n", sizeof(a));

    printf("char ranges from : %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("int ranges from : %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int ranges from : 0 to %lli\n", UINT_MAX);

    // printf ("unsigned int ranger from : %d to %d :\n", UINT_MIN, UINT_MAX);



}
