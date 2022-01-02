

#include<stdio.h>

int main() {
    int a;
    a = 10;
    int *p;
    p = &a; // &a - address of a
    // // Pointer arithmetic
    // printf ("\nAddress p is %d", p); // Ex: p is 2002
    // printf ("\nSize of integer is %d bytes", sizeof(int));
    // printf ("\nAddress p + 1 is %d",p + 1); // Ex: p + 1 is 2003??? -> False (because address integer pointer, so integer is 4 bytes, we need to skip 4 byte(+4)
    //                         // True : p + 1 is 2006
    // printf ("\nAddress p + 2 is %d", p + 2); // p is 2010
    // printf("\nValue at address p + 1 : %d", *(p + 1));


    printf ("\ndia chi cua bien a : %x",&a); // (%x : format của địa chỉ)
    printf("\ndia chi cua bien a : %x", p);
    // ( %x : format address / %d : format kiểu dữ liệu )

    // printf("\nAddress of P is : %d", p);
    // printf("\nValue at P is : %d ", *p);
    // int b = 20;
    // *p = b; // with the address in p change to point b ?
    // printf ("\nAddress of P is : %d", p);
    // printf ("\nValue at P is : %d ", *p);


    // printf ("\na = %d", a);
    // *p = 12;
    // printf ("\na = %d", a);


    // printf ("\n%d", p );    // &a - address of a
    // printf ("\n%d", *p);    // *p - value at address pointer by p
    // printf ("\n%d", &a);
    
}