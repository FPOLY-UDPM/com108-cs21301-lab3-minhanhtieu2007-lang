/******************************************************************************
 * Họ và tên: Tiêu Anh Minh
 * MSSV:      PS48358
 * Lớp:       CS21301
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
//  2.1 BẬC 1 
//  Phương trình có dạng ax + b = 0 
//  Input: nhập vào từ bàn phím giá trị của a, b 
//  Output: Hiển thị nghiệm của phương trình 
//  Biết rằng: 
//  Nếu a == 0,  
//   b == 0: Phương trình có vô số nghiệm 
//   b != 0: Phương trình vô nghiệm 
//  Ngược lại: Phương trình có nghiệm x = -b/a 
 
#include <stdio.h>

int main(){
    int a, b;
int x;
    printf("Nhap a: ");
    scanf("%lf", &a);

    printf("Nhap b: ");
    scanf("%lf", &b);

    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem");
        } else {
            printf("Phuong trinh vo nghiem");
        }
    } else {
     x = -b / a;
        printf("Phuong trinh co nghiem x = %lf", x);
    }
    return 0;
}