
#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;     // ? g�n gi� tr? ��ng
        b = r;     // ? g�n gi� tr? ��ng
    }
    return a;
}

int main() {
    int a, b;
    printf("Nhap 2 so: ");
    scanf("%d %d", &a, &b);

    int ketqua = ucln(a, b);
    printf("Uoc chung lon nhat la: %d\n", ketqua);
    return 0;
}

