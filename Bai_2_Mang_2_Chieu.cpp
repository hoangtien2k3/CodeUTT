
/*



*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int arr[100][100];
    int m, n;
    printf("Nhap vao m, n: "); scanf("%d%d", &m, &n);
    for(int i=0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }



    return 0;
}