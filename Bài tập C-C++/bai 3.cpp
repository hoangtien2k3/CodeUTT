#include<stdio.h>
#include<conio.h>

int main()
{
    int i, n;
    float sum = 0;
//    sum = 0; i = 1;
    do
    {
        printf("\nNhap n: ");
        scanf("%d", &n);
        if(n < 1)
        {
            printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
        }

    }while(n < 1);

//    while(i <= n)
//    {
//        sum = sum + 1.0 / i;  // ph?i nh? l� 1.0 / i
//        i++;
//    }

    for (int i=1; i<=n; i++) {
    	sum += 1.0 / i;
	}
	printf ("\n");
    printf("i = %d", i);
    printf("\nsum = %f", sum);
    printf("\nTong 1 + 1/2 + ... + 1/%d = %.2f ",n, sum);

    getch();
    return 0;
}
