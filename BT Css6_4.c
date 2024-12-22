#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;

    // Yeu cau nguoi dung nhap 3 so a, b, c
    printf("Nhap he so a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Tinh delta
    delta = b * b - 4 * a * c;

    // Giai phuong trinh bac 2
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem: x1 = %.2lf va x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Phuong trinh co mot nghiem kep: x = %.2lf\n", x1);
    } else {
        printf("Phuong trinh vo nghiem.\n");
    }

    return 0;
}