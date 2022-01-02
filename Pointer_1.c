

// Con trỏ mang giá trị chính là địa chỉ của một biến
// 

#include<stdio.h>

int main() {
    int a = 10;
    int *p;
    p = &a;
    // int *p = &a;

    printf ("Gia tri cua a : %d", a);  
    printf ("\nDia chi cua a : %x", &a);    // p = &a
    printf ("\nDia chi cua a : %x", p);     // p = &a  
    printf ("\nGia tri cua a : %d", *p);    // *p = &a hay *p = *&a = a
    printf("\nGia tri cua a : %d", *&a);    // *p = *&a = a

}

