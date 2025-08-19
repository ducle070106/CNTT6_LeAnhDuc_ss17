#include <stdio.h>
#include <string.h>

int kiemTraPalindrome(char chuoi[]) {
    int doDai = strlen(chuoi);
    int i = 0;
    int j = doDai - 1;
    while (i < j) {
        if (chuoi[i] != chuoi[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main() {
    char chuoi[100];
    printf("Nhap vao mot chuoi: ");
    scanf("%s", chuoi);
    if (kiemTraPalindrome(chuoi)) {
        printf("La palindrome\n");
    } else {
        printf("Khong phai palindrome\n");
    }
    return 0;
}