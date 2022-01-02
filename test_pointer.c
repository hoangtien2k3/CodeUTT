
// Con Trỏ trong c
// con trỏ trong chương trình c là gì:
// và mục địch sinh ra con trỏ để làm gì;
/*
// // What are Pointers ?
// int *ip;    /* pointer to an integer */
// double *dp; /* pointer to a double */
// float *fp;  /* pointer to a float */
// char *ch    /* pointer to a character */

#include<stdio.h>
int main() {

    // int var1;
    // char var2[10];


    // printf("Address of var1 variable: %x\n", &var1); // Sẽ in ra địa chỉ của var1
    //printf("Address of var2 variable: %x\n", &var2); // sẽ in ra địa chỉ của var2[10]
    // khi đoạn mã được biên dịch và thực thi ( compiled and executed )

    int var = 20; // actual variable declaration
    int *ip;        // pointer variable declaration
    ip = &var;      // store address of var in pointer variable;

    printf ("Address of var variable: %x\n", &var);
    printf ("Address store in ip variable: %x\n", ip);
    printf ("Variable of *ip variable: %d\n", *ip);
}
// #include<stdio.h>

// int main() {
//     int a;
//     int *p;
//     p = &a;
//     a = 5;
    
//     printf ("%d", p); // address in a
//     printf ("\n%d", &a);    // address myself a (because p = &a)
//     printf("\n%d", &p);     // address myself p;

//     printf ("\n%d", *p);    // value in p;



//     return 0;
// }


