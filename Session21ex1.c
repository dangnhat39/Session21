#include <stdio.h>

int main() {
    char chuoi[100];
    FILE *file;

    printf("Nhap mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Loi khi mo file.\n");
        return 1;
    }

    fputs(chuoi, file);
    fclose(file);

    printf("Chuoi da duoc ghi vao file bt01.txt.\n");

    return 0;
}

