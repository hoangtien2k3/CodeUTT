
/*
    Xây dựng một cấu trúc sinh viên hồm:
    a. viết hàm nhập vào 1 danh sách gồm n nhân viên
    b. in danh sách nhân viên lên màn hình
    c. in ra thông tin nhân viên có lương cao nhất
    d. sắp xếp danh sách lương theo thứ tự giảm dần
    e. Tìm nhân viên có mã 001NV. In kết quả lên màn hình.

*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct NhanVien {
    char manv[100];
    char hoten[100];
    float luong;
} NhanVien;

void print_line(int n) {
    printf("\n");
    for(int i=0; i<n; i++) {
        printf("_");
    }
    printf("\n");
}

//  b. in danh sách nhân viên lên màn hình.
void In_NhanVien(int n, NhanVien arr[]) {
    print_line(100);
    printf("\nIn danh sach Nhan Vien: ");
    for(int i=0; i<n; i++) {
        printf("\nManv nhan vien %d: %s",i + 1, arr[i].manv); 
        printf("\nHoten nhan vien %d: %s", i + 1, arr[i].hoten);
        printf("\nLuong nhan vien %d: %f\n", i + 1, arr[i].luong);
    }
    print_line(100);
}

//  c. in ra thông tin có lương cao nhất
void Nhan_Vien_Max_Luong(int n, NhanVien arr[]) {
    int max = arr[0].luong;
    int index;
    for(int i = 0; i < n; i++) {
        if (arr[i].luong >= max) {
            max = arr[i].luong;
            index = i;
        }
    }
    print_line(100);
    printf("Thong tin nhan vien co luong cao nhat: ");
    printf("\nManv %d: %s", index + 1,  arr[index].manv);
    printf("\nHoten %d: %s", index + 1, arr[index].hoten);
    printf("\nLuong %d: %f", index + 1, arr[index].luong);
    print_line(100);
}

//   d. sắp xếp danh sách lương theo thứ tự giảm dần
void swap_Luong(int n, NhanVien arr[]) {
    NhanVien temp;
    for(int i=0; i < n-1; i++) {
        for(int j = i + 1; j < n; i++) {
            if (arr[i].luong < arr[j].luong) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    print_line(100);
    printf("\nDanh Sach Luong tu nho -> lon: ");
    for(int i = 0; i < n; i++) {
        printf("%f ", arr[i].luong);
    }
    print_line(100);
}

int main() {
    int n;
    NhanVien arr[100];
    printf("Nhap vao n = "); scanf("%d", &n);

    printf("Enter the employee: "); 
    for(int i=0; i<n; i++) {
        fflush(stdin);
        printf("\nEnter mavn %d: ", i + 1 ); gets(arr[i].manv);
        printf("Enter the hoten %d: ", i + 1); gets(arr[i].hoten);
        printf("Enter the luong %d: ", i + 1); scanf("%f", &arr[i].luong);
    }

    In_NhanVien(n, arr);
    printf("\n");
    Nhan_Vien_Max_Luong(n, arr);
    printf("\n");
    swap_Luong(n, arr);

    return 0;
}