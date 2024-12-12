#include <stdio.h>

int main(){
 float sogiolamviec, luongtheogio, luongCoBan, phuCap = 0, tongLuong;
	printf("Nhap so gio lam viec trong thang: ");
	scanf("%f",&sogiolamviec);
	printf("Nhap muc luong theo gio lam viec trong thang: ");
	scanf("%f",&luongtheogio);
	luongCoBan=luongtheogio*sogiolamviec;
	if (sogiolamviec > 160){
		phuCap=luongCoBan * 0.10;
	}
	tongLuong=luongCoBan+phuCap;
	printf("Tien luong co ban: %.2f\n", luongCoBan);
    printf("Tien phu cap: %.2f\n", phuCap);
    printf("Tong tien luong: %.2f\n", tongLuong);
	
	return 0;
}