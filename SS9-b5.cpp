#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int m = 0; // So luong phan tu mang
    int a[100]; // Mang voi toi da 100 phan tu

    do {
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &num);

        if (num == 1) {
            printf("Nhap so luong phan tu m: ");
            scanf("%d", &m);

            if (m <= 0 || m > 100) {
                printf("So luong phan tu khong hop le! Vui long nhap lai.\n");
            } else {
                printf("Nhap gia tri cac phan tu cua mang:\n");
                for (int i = 0; i < m; i++) {
                    printf("Nhap phan tu a[%d]: ", i);
                    scanf("%d", &a[i]);
                }
            }
        }
        else if (num == 2) {
            if (m == 0) {
                printf("Mang chua duoc nhap! Vui long nhap mang truoc.\n");
            } else {
                printf("Mang da nhap:\n");
                for (int i = 0; i < m; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
        }
        else if (num == 3) {
            if (m == 0) {
                printf("Mang chua duoc nhap! Vui long nhap mang truoc.\n");
            } else {
                int tong = 0;
                printf("Cac phan tu chan trong mang:\n");
                for (int i = 0; i < m; i++) {
                    if (a[i] % 2 == 0) {
                        printf("%d ", a[i]);
                        tong += a[i];
                    }
                }
                printf("\nTong cac phan tu chan: %d\n", tong);
            }
        }
        else if (num == 4) {
            if (m == 0) {
                printf("Mang chua duoc nhap! Vui long nhap mang truoc.\n");
            } else {
                int max = a[0], min = a[0];
                for (int i = 1; i < m; i++) {
                    if (a[i] > max) {
                        max = a[i];
                    }
                    if (a[i] < min) {
                        min = a[i];
                    }
                }
                printf("Gia tri lon nhat trong mang: %d\n", max);
                printf("Gia tri nho nhat trong mang: %d\n", min);
            }
        }
        else if (num == 5) {
            if (m == 0) {
                printf("Mang chua duoc nhap! Vui long nhap mang truoc.\n");
            } else {
                int tong = 0;
                printf("Cac phan tu la so nguyen to trong mang:\n");
                for (int i = 0; i < m; i++) {
                    int isPrime = 1;
                    if (a[i] < 2) {
                        isPrime = 0;
                    } else {
                        for (int j = 2; j <= sqrt(a[i]); j++) {
                            if (a[i] % j == 0) {
                                isPrime = 0;
                                break;
                            }
                        }
                    }
                    if (isPrime) {
                        printf("%d ", a[i]);
                        tong += a[i];
                    }
                }
                printf("\nTong cac phan tu la so nguyen to: %d\n", tong);
            }
        }
        else if (num == 6) {
            if (m == 0) {
                printf("Mang chua duoc nhap! Vui long nhap mang truoc.\n");
            } else {
                int x, count = 0;
                printf("Nhap so can thong ke: ");
                scanf("%d", &x);
                for (int i = 0; i < m; i++) {
                    if (a[i] == x) {
                        count++;
                    }
                }
                printf("So %d xuat hien %d lan trong mang.\n", x, count);
            }
        }
        else if (num == 7) {
            if (m == 0) {
                printf("Mang chua duoc nhap! Vui long nhap mang truoc.\n");
            } else {
                int pos, value;
                printf("Nhap vi tri muon them phan tu: ");
                scanf("%d", &pos);
                if (pos < 0 || pos > m) {
                    printf("Vi tri khong hop le!\n");
                } else {
                    for (int i = m; i > pos; i--) {
                        a[i] = a[i - 1];
                    }
                    printf("Nhap phan tu muon them: ");
                    scanf("%d", &value);
                    a[pos] = value;
                    m++;
                    printf("Mang sau khi them phan tu:\n");
                    for (int i = 0; i < m; i++) {
                        printf("%d ", a[i]);
                    }
                    printf("\n");
                }
            }
        }
        else if (num == 8) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }

    } while (num != 8);

    return 0;
}

