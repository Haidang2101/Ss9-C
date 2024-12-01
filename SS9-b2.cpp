#include <stdio.h>

int main() {
    int n, i;
    
    printf("nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    
    int array[n];
    
    for(i = 0; i < n; i++) {
        printf("Nhap phan tu array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int index, newValue;
    printf("nhap vi tri can sua (0 den %d): ", n-1);
    scanf("%d", &index);
    
    if (index >= 0 && index < n) {
        printf("nhap gia tri moi: ");
        scanf("%d", &newValue);
        
        array[index] = newValue;
        
        printf("mang sau khi sua: \n");
        for(i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}

