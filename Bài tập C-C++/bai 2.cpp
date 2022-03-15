#include<stdio.h>
#include<conio.h>

int main()
{
//    int i, n;
//    long S;
//    S = 0;
//    i = 1;
//    printf("\nNhap n = ");
//    scanf("%d", &n);
//
//    while(i <= n)
//    {
//        S = S + (i * i) ;
//        i++;
//    }
//    printf("i = %d", i);
//    printf("\nTong 1^2 + 2^2 + ... + %d^2 = %ld", n, S);

    int n,i;
    int sum=0;
    printf("nhap gia tri n = ");
    scanf("%d",&n);
    sum = (n * (n + 1) * (2 * n + 1 )) / 6;
    printf("\nTong cua chuoi = ");
    for(i =1;i<=n;i++){
         if (i != n)
             printf("%d^2 + ",i);
         else
             printf("%d^2 = %d ",i,sum);
    } 

    getch();
    return 0;
}
