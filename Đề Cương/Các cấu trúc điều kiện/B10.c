

// xếp loại học sinh
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct Sinhvien{
    char masv[10];
    char name[20];
    int tongdiem;
} Sinhvien;

Sinhvien XepLoai() {
    Sinhvien sv;
    if (sv.tongdiem < 15) {
        printf("Xep loai TB");
    } else if (sv.tongdiem <= 17 || sv.tongdiem >= 15) {
        printf("Xep loai Kha");
    } else {
        printf("Xep loai Gioi");
    }
}

int main() {
    Sinhvien sv;
    printf("Nhap vao masv: "); scanf("%s", sv.masv);
    printf("Nhap vao name: "); scanf("%s", sv.name);
    printf("Nhap vao tongdiem: "); scanf("%d", sv.tongdiem);

    XepLoai();

    return 0;
}