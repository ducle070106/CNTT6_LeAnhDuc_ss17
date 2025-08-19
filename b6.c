#include <stdio.h>
#include <string.h>

void timTuDaiNhat(char chuoi[]) {
    int maxLength = 0;
    int currentLength = 0;
    int startIndex = 0;
    int maxStartIndex = 0;
    for (int i = 0; i <= strlen(chuoi); i++) {
        if (chuoi[i] != ' ' && chuoi[i] != '\0') {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIndex = startIndex;
            }
            currentLength = 0;
            startIndex = i + 1;
        }
    }
    char tuDaiNhat[maxLength + 1];
    for (int i = 0; i < maxLength; i++) {
        tuDaiNhat[i] = chuoi[maxStartIndex + i];
    }
    tuDaiNhat[maxLength] = '\0';
    printf("Tu dai nhat la: %s\n", tuDaiNhat);
    printf("Do dai cua tu: %d\n", maxLength);
}
int main() {
    char chuoi[200];
    printf("Nhap vao mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';
    timTuDaiNhat(chuoi);
    return 0;
}