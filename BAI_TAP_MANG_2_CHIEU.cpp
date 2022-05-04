
// mảng 2 chiều: 72DCHT21
/*


    e. đến cố nguyên tố trong mảng
    f. sắp sếp mảng tăng dần hoạc giâm dần
    g. đến số lần xuất hiện của số n bất kỳ trong mảng
    h. hóa phần tử trong mảng


*/  

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

void Print_Array(int m, int n, int arr[][100]) {
    printf("Elements Array 2: \n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int Sum_Elements_Array(int m, int n, int arr[][100]) {
    int sum = 0;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            sum += arr[i][j];
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

// tìm Min của mảng
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

// tìm max của mảng
int Elements_Max_Array (int m, int n, int arr[][100]) {
    int max = arr[0][0];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
    }
    return max;
}



//e. đến số nguyên tố trong mảng
bool nt(int a) {
    for (int i=2; i<=sqrt(a); i++) {
        if (a % i == 0) {
           return false;
        }
    }
    return a > 1;
}

int CountPrime(int m, int n, int arr[][100]) {
    int count = 0;
    for(int i=0; i<m; i++) {
        for(int j=0; j< n; j++) {
            if (nt(arr[i][j])) {
                count++;
            }
        }
    }
    return count;
}

// e. đếm số nguyên tố trong mảng
int CountPrime_Array (int m, int m, int arr[][100]) {

    for(int i=0; i<m; i++) {
        for(int j=0; j <n; j++) {
            if (arr[i][j] % 2 != 0) {
                count++;
            }
        }
    }



    return count;
}


// sắp xếp mảng 2 chiều tăng dần theo hàng
void Swap_Tang_BubbleSort(int m, int n, int arr[][100]) {

    for(int k=0; k<m; k++) {
        for(int i=0; i<n - 1; i++) {
            for(int j= n - 1; j > i; j--) {
                if (arr[k][j] < arr[k][j-1]) {
                    int temp = arr[k][j];
                    arr[k][j] = arr[k][j-1];
                    arr[k][j-1] = temp;
                }
            }
        } 
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

}


// sắp xếp mảng tăng dần
int Swap_Array_2_Tang (int m, int n, int arr[][100]){
    int p = m * n;
    for(int i=0; i<m-1; i++) {
        for(int j = i+ 1; j<n ; j++) {
            if (arr[i/n][i%n] > arr[j/n][j%n]) {
                int temp = arr[i/n][i%n];
                arr[i/n][i%n] = arr[j/n][j%n];
                arr[j/n][j%n] = temp;
            }
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}






// số lần xuất hiện của các phần tử trong mảng
// void Count_Element_Array () {
//     in brr[100][100], count;
//     for(int i=0; i<m; i++) {
//         for(int j=0; j<n; j++) {
//             brr[i][j] = 1;
//         }
//     }
    
//     for (int i=0; i<m; i++) {
//         for(int j=0; j<n; j++) {
//             if (brr[i][j]) {
//                 count = 1;
//                 for (int j=i+1; j<n; j++) {
//                     if (arr[i] == arr[j]) {
//                         count++;
//                         brr[j] = 0;
//                     }
//                 }
//                 printf ("\nGia tri %d xuat hien %d lan!", arr[i], count);
//             }
//         }
//     }
// }


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
    printf("\nSum Elements Even Array:\t %d", Sum_Elements_Array(m, n, arr));
    printf("\nElements Min Array:\t %d", Elements_Min_Array(m, n, arr));
    printf("\nElements Max Array:\t %d", Elements_Max_Array(m, n, arr));
    printf("\nTong Cac Phan Tu Tren Duong Cheo Chinh:\t %d", Tong_Phan_Tu_Tren_Duong_Cheo_Chinh(m, n, arr));


    printf("\nCountPrime: \t%d\n", CountPrime(m, n, arr));

    printf("Mang tang dan theo hang: \n");
    Swap_Tang_BubbleSort(m, n, arr);

    printf("Mang sap xep tang dan: \n");
    Swap_Array_2_Tang(m, n, arr);


    return 0;
}