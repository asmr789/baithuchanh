#include <stdio.h>

int main() {
    int doidonvi;
    float tiencanchuyen, tiendachuyen;
    
    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE=============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhap don vi tien te ban muon chuyen doi (1-8) ? ");
    scanf("%d", &doidonvi);
    printf("Nhap so tien can chuyen doi: ");
    scanf("%f", &tiencanchuyen);
    
    switch(doidonvi) {
        case 1:
            tiendachuyen = tiencanchuyen * 23500; 
            printf("%.2f USD = %.2f VND\n", tiencanchuyen, tiendachuyen);
            break;
        case 2:
            tiendachuyen = tiencanchuyen * 25000;
            printf("%.2f EUR = %.2f VND\n", tiencanchuyen, tiendachuyen);
            break;
        case 3:
            tiendachuyen = tiencanchuyen * 28000;
            printf("%.2f GBP = %.2f VND\n", tiencanchuyen, tiendachuyen);
            break;
        case 4:
            tiendachuyen = tiencanchuyen * 180;
            printf("%.2f JPY = %.2f VND\n", tiencanchuyen, tiendachuyen);
            break;
        case 5:
            tiendachuyen = tiencanchuyen / 23500;
            printf("%.2f VND = %.2f USD\n", tiencanchuyen, tiendachuyen);
            break;
        case 6:
            tiendachuyen = tiencanchuyen  / 25000;
            printf("%.2f VND = %.2f EUR\n", tiencanchuyen, tiendachuyen);
            break;
        case 7:
            tiendachuyen = tiencanchuyen  / 28000;
            printf("%.2f VND = %.2f GBP\n", tiencanchuyen, tiendachuyen);
            break;
        case 8:
            tiendachuyen = tiencanchuyen  / 180;
            printf("%.2f VND = %.2f JPY\n", tiencanchuyen, tiendachuyen);
            break;
        default:
            printf("Lua chon khong hop le!\n");
    }
    
    return 0;
}