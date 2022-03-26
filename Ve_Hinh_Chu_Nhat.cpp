
// Vẽ hình chữ nhật trong c

#include<stdio.h>
#include<math.h>
#include<conio.h>


/* 1. vẽ hình chữ nhật đặc

    *   *   *   *   *   *
    *   *   *   *   *   *
    *   *   *   *   *   *   
    *   *   *   *   *   *
    
*/
void Hinh_Chu_Nhat_Dac(int m, int n) {
    for (int i=0; i < m; i++) {
        for (int j=0; j < n; j++) {
            printf (" * ");
        }
        printf ("\n");
    }
    
} 




/* 2. vẽ hình chữ nhật rỗng.

    *   *   *   *   *   *
    *                   *
    *                   *  
    *   *   *   *   *   *
    
*/
void Hinh_Chu_Nhat_Rong(int m, int n) {
    for (int i=0; i < n; i++) {
        printf (" * ");
    } 
    printf ("\n");
    for (int i = 0; i < m - 2; i++) {
        for (int j = 0; j < n; j++){
            if (j == 0 || j == n - 1) {
                printf (" * ");
            } else {
                printf ("   ");
            }
        }
        printf ("\n");
    }
    for (int i=0; i < n; i++) {
        printf (" * ");
    }
}





int main() {
    int m, n;
    printf ("Nhap vao m, n: ");
    scanf ("%d%d", &m, &n);

    Hinh_Chu_Nhat_Dac(m, n);
    printf ("\n\n");
    Hinh_Chu_Nhat_Rong(m, n);


}