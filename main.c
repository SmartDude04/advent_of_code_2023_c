#include <stdio.h>
#include "file-opener.h"

int main() {
    printf("Hello, World!\n");

    int rows = 3;
    int cols = 5;

    char *file = file_opener("../test.txt", &rows, &cols);

    printf("%s\n", file);

}
