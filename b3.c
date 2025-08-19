#include <stdio.h>
#include <string.h>

int main() {
    char chuoi1[100];
    char chuoi2[50];
    printf("Nhap chuoi thu nhat: ");
    scanf("%s", chuoi1);
    printf("Nhap chuoi thu hai: ");
    scanf("%s", chuoi2);
    strcat(chuoi1, chuoi2);
    printf("Chuoi sau khi noi : %s\n", chuoi1);
    return 0;
}