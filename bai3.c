/******************************************************************************
 * Họ và tên: Tiêu Anh Minh
 * MSSV:      PS48358
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main(){
int kWh;
    long tien = 0;

    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &kWh);

    if (kWh <= 50) {
        tien = kWh * 1678;
    } 
    else if (kWh <= 100) {
        tien = 50 * 1678 + (kWh - 50) * 1734;
    } 
    else if (kWh <= 200) {
        tien = 50 * 1678 + 50 * 1734 + (kWh - 100) * 2014;
    } 
    else if (kWh <= 300) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kWh - 200) * 2536;
    } 
    else if (kWh <= 400) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kWh - 300) * 2834;
    } 
    else {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834+ (kWh - 400) * 2927;
    }

    printf("So tien dien phai dong: %ld dong", tien);

    return 0;
}