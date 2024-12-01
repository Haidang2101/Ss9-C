#include <stdio.h>

int main() {
    int array[100];  
    int n, i, local;
    
    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Nhap vi tri can xoa (0 den %d): ", n - 1);
    scanf("%d", &local);

    if (local < 0 || local >= n) {
        printf("Vi tri xoa sai.\n");
        return 1;
    }

    for (i = local; i < n - 1; i++) {
        array[i] = array[i + 1];
    }

    n--;

    printf("Mang sau khi xoa phan tu:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

