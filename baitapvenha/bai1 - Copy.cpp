#include <stdio.h> 

int main() {
    int n; 
    int tongUoc = 0;
    int i = 1;

   
    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");  
}
    printf("Cac uoc cua %d la: ", n);   
    while (i <= n) {
      
        if (n % i == 0) {
            printf("%d ", i); 
            tongUoc += i;      
        }
        i++; 
    }

    printf("\n");
    printf("Tong cac uoc cua %d la: %d\n", n, tongUoc);
}

