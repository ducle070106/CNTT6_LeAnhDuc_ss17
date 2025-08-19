#include <stdio.h>
#include <string.h>

void xoaKyTuTrongChuoi(char chuoi[], char kyTuCanXoa) {
    int i, j;
    int doDai = strlen(chuoi);
    for (i = 0, j = 0; i < doDai; i++) {
        if (chuoi[i] != kyTuCanXoa) {
            chuoi[j] = chuoi[i];
            j++;
        }
    }
    chuoi[j] = '\0';
}
int main() {
    char chuoi[100];
    char kyTuCanXoa;
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';
    printf("Nhap vao ky tu can xoa: ");
    scanf(" %c", &kyTuCanXoa);
    xoaKyTuTrongChuoi(chuoi, kyTuCanXoa);
    printf("Chuoi sau khi da xoa: %s\n", chuoi);
    return 0;
}
