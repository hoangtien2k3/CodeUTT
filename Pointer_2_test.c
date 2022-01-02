
#include<stdio.h>

void swap (int *pa, int *pb) {
    int temp = *pa; // *pa = *&a = a
    *pa = *pb;
    *pb = temp;

}

int main() {
    int a = 10;
    int b = 20;

    swap (&a, &b); // đổi hai giá trị cho nhau
    printf ("\ngia tri cua a : %d", a);
    printf ("\ngia tri cua b : %d", b);
}