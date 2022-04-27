
// mảng 2 chiều: 72DCHT21
/*
    a.  in mảng ra màn hình
    b. tinh tổng các phần tử lẻ
    c.  Tính TBC các só chia hết cho 3 và tận cùng là 6
    d. Tính tổng các phần tử nằm trên đường chéo chính
    e. Tìm phần tử nhỏ nhất

*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

void Print_Array(int m, int n, int arr[][100]) {
    printf("Elements Array 2: \n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int Sum_Even_Elements_Array(int m, int n, int arr[][100]) {
    int sum = 0;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if (arr[i][j] % 2 != 0) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
}

int Tong_Phan_Tu_Tren_Duong_Cheo_Chinh(int m, int n, int arr[][100]) {
    int sum = 0;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if ( i == j ) {
                sum += arr[i][j];
            }
        }
    }

    return sum;
}

float TBC_Array(int m, int n, int arr[][100]) {
    float TBC = 0, count = 0;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if (arr[i][j] % 3 == 0 && (arr[i][j] % 10 == 6)) {
                TBC += arr[i][j];
                count++;
            }
        }
    }
    TBC /= count;
    return TBC;
}

int Elements_Min_Array(int m, int n, int arr[][100]) {
    int min = arr[0][0];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if (min > arr[i][j]) {
                min = arr[i][j];
            }
        } 
    }
    return min;
}

int main() {
    int m, n;
    int arr[100][100];
    printf("Nhap vao m, n: "); scanf("%d%d", &m, &n);

    for(int i=0; i<m; i++) { // O(n^2)
        for(int j=0; j<n; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    Print_Array(m, n, arr);
    printf("\nSum Elements Even Array:\t %d", Sum_Even_Elements_Array(m, n, arr));
    printf("\nTBC digits:\t %.3f", TBC_Array(m, n, arr));
    printf("\nElements Min Array:\t %d", Elements_Min_Array(m, n, arr));
    printf("\nTong Cac Phan Tu Tren Duong Cheo Chinh:\t %d", Tong_Phan_Tu_Tren_Duong_Cheo_Chinh(m, n, arr));

    return 0;
}