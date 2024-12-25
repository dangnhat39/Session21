#include <stdio.h>

int main() {
    FILE *file;
    int ch;

    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Loi khi mo file.\n");
        return 1;
    }

    ch = fgetc(file);
    if (ch == EOF) {
        printf("File rong.\n");
    } else {
        printf("Ky tu dau tien trong file la: %c\n", ch);
    }

    fclose(file);
    return 0;
}

