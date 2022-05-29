
/*
    a. thực hành với switch - case đơn giản

*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>



int Tinh_Toan_Don_Gian(int month, int year) {
    int ngaytrongthang;
    switch(month) {// điều kiện
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
            ngaytrongthang = 31;
            break;
        case 4: case 6: case 9: case 11:
            ngaytrongthang = 30;
            break;
        default: 
            return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? ngaytrongthang = 29 : ngaytrongthang = 28;
    } 
    return ngaytrongthang;
}







int main() {
    int month, year;
    printf("Nhap vao month, year: "); scanf("%d%d", &month, &year);

    printf("%d", Tinh_Toan_Don_Gian(month, year));




}