/******************************************************************************
 * Họ và tên: Tiêu Anh Minh
 * MSSV:      PS48358
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>

int main(){
    
   int choice;

    printf("===== MENU CHUONG TRINH =====\n");
    printf("1. Tinh hoc luc sinh vien\n");
    printf("2. Giai phuong trinh bac 2\n");
    printf("3. Tinh tien dien\n");
    printf("============================\n");
    printf("Nhap lua chon: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            // BAI 1: TINH HOC LUC
              float diem;
    printf("Nhap diem sinh vien (0-10): ");
    scanf("%f", &diem);

    if (diem >= 9) {
        printf("Hoc luc xuat sac");} 
    else if (diem >= 8) 
    {
        printf("Hoc luc gioi");
    }
     else if (diem >= 6.5) {
        printf("Hoc luc kha");
    }
     else if (diem >= 5) {
        printf("Hoc luc trung binh");
    }
     else if (diem >= 3.5) {
        printf("Hoc luc yeu");
    }
     else 
     {printf("Hoc luc kem");
    }
            break;
        }

        case 2: {
            // BAI 2: PHUONG TRINH BAC 2
    int a, b, c, x;
    int delta, x1, x2;

    printf("Nhap a: ");
    scanf("%lf", &a);
    printf("Nhap b: ");
    scanf("%lf", &b);
    printf("Nhap c: ");
    scanf("%lf", &c);

    if (a == 0) {
        // Phuong trinh bac 1: bx + c = 0
        if (b == 0) {
            if (c == 0)
                printf("Phuong trinh co vo so nghiem");
            else
                printf("Phuong trinh vo nghiem");
        } else {
            int x = -c / b;
            printf("Phuong trinh co nghiem x = %lf", x);
        }
    } else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem");
        } else if (delta == 0) {
            int x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep x = %lf", x);
        } else {
            x1 = (-b + delta) / (2 * a);
            x2 = (-b - delta) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %lf\n", x1);
            printf("x2 = %lf", x2);
        }
    }
            break;
        }

        case 3: {
            // BAI 3: TINH TIEN DIEN
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
        }

    
    }

    return 0;

}