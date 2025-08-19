#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuyenSangChuHoa(char chuoi[]) {
    for (int i = 0; chuoi[i] != '\0'; i++) {
        chuoi[i] = toupper(chuoi[i]);
    }
}
void chuyenSangChuThuong(char chuoi[]) {
    for (int i = 0; chuoi[i] != '\0'; i++) {
        chuoi[i] = tolower(chuoi[i]);
    }
}
int main() {
    char chuoi[100];
    int luaChon;
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = 0;
    printf("\n--- MENU ---\n");
    printf("1. Chuyen chuoi thanh chu hoa\n");
    printf("2. Chuyen chuoi thanh chu thuong\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &luaChon);
    switch (luaChon) {
    case 1:
        chuyenSangChuHoa(chuoi);
        printf("Chuoi sau khi chuyen thanh chu hoa: %s\n", chuoi);
        break;
    case 2:
        chuyenSangChuThuong(chuoi);
        printf("Chuoi sau khi chuyen thanh chu thuong: %s\n", chuoi);
        break;
    default:
        printf("Lua chon khong hop le!\n");
        break;
    }
    return 0;
}