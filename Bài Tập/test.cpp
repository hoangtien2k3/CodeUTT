
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef struct Sach {
    char masach[20];
    char tensach[50];
    int sotrang;
} Sach;

void Print_Line(int n) {
    printf("\n");
    for(int i=0; i<n; i++) {
        printf("_");
    }
    printf("\n");
}

void Print_Thong_Tin(int i, Sach nv[]) {
    printf("\t\t%s", nv[i].masach);
    printf("\t\t\t%s", nv[i].tensach);
    printf("\t\t\t%d", nv[i].sotrang);
}

void Information_NhanVien(int n, Sach nv[]) {
    Print_Line(100);
    printf("THONG TIN CAC NHAN VIEN: ");
    printf("\nSTT\t\tMASACH\t\t\tTEN SACH\t\t\t\tSO TRANG");
    for(int i=0; i<n; i++) {
        printf("\n %d", i + 1);
        Print_Thong_Tin(i, nv);
        printf("\n");
    }
    Print_Line(100);
}


void Print_tuoi(int n, Sach nv[]) {
    printf("SACH CO SO TRANG > 150: ");
    printf("\nSTT\t\tMASACH\t\t\tTEN SACH\t\t\t\tSO TRANG");
    for(int i=0; i<n; i++) {
        if (nv[i].sotrang >= 150 ) {
            printf("\n %d", i + 1);
            Print_Thong_Tin(i, nv);
        }
    }
    Print_Line(100);
}


void Check_Manv(int n, Sach nv[]) {
    printf("Nhap vien co ma 001:" );
    printf("\nSTT\t\tMASACH\t\t\tTEN SACH\t\t\t\tSO TRANG");
    char manv1[] = "ngon ngu lap trinh C";
    for(int i=0; i<n; i++) {
        if (strcmpi(manv1, nv[i].masach) == 0) {
            printf("\n %d", i + 1);
            Print_Thong_Tin(i, nv);
        }
    }
}

int main() {
    Sach nv[100];
    int n; // nhập vao số lượng nhân viên
    printf("Nhap vao so quyen sach: "); scanf("%d", &n);
    for(int i = 0; i < n; i++) { // nhập vào thông tin nhân viên.
        fflush(stdin);
        printf("\nNhap vao masach %d: ", i + 1); gets(nv[i].masach);
        printf("Nhap vao tensach: %d: ", i + 1); gets(nv[i].tensach);
        printf("Nhap vao sotrang: %d: ", i + 1); scanf("%d", &nv[i].sotrang); 
    }

    Information_NhanVien(n, nv);
    Print_tuoi(n, nv);
    Check_Manv(n, nv);

    return 0;
}