#include <stdio.h>
#include <strings.h>

int main() {
    char chuoi1[100];
    char chuoi2[100];
    printf("Nhap chuoi thu nhat: ");
    scanf("%s", chuoi1);
    printf("Nhap chuoi thu hai: ");
    scanf("%s", chuoi2);
    if (strcasecmp(chuoi1, chuoi2) == 0) {
        printf("Giong nhau\n");
    } else {
        printf("Khac nhau\n");
    }
    return 0;
}