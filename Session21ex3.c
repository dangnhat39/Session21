#include <stdio.h>

int main() {
    FILE *file;
    char chuoi[100];

    printf("Nhap chuoi de them vao file: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Loi khi mo file.\n");
        return 1;
    }

    fputs(chuoi, file);
    fclose(file);

    printf("Chuoi da duoc them vao file bt01.txt.\n");

    return 0;
}

