
#include<stdio.h>

void LoopFor_InC (int m, int n, int a[][100]) {
    for (int i=0; i<5; i++){
        for (int j=0; j<10; j++) {
            printf ("%d ", a[i][j]);
        }
    }
}

int main() {
    int m, n;
    int a[100][100];
    printf ("Input m = ");
    scanf ("%d", &m);
    printf ("Input n = ");
    scanf ("%d", &n);
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf ("a[%d][%d] = ",i, j);
            scanf ("%d", &a[i][j]);
        }
    }
    LoopFor_InC(m, n, a);

    return 0;
}