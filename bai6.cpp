#include <stdio.h>

int main() {
    const float PI = 3.14f;// Khai bao haang so Pi kieufloat
    float banKinh = 5.0f; // Khai bao va gan gia tri ban kinh
//
//    float chuVi = 2 * PI * banKinh; // Tinh chu vi
//    float dienTich = PI * banKinh * banKinh;// Tinh dien tich
    double chuVi = 3.14;  // dung, vi 3.14 la double
    double dienTich = 3.14f; // cung dung, float -> double la an toan

    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}


