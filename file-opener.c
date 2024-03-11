//
// Created by aidan on 10 Mar 2024.
//

#include "file-opener.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

char *file_opener(const char *filename, int *rows, int *cols) {

    // Add file path to the front
    strcpy()
    // Get the file and open it
    FILE *file = fopen(filename, "r");
    // Make sure the file is present
    if (file != NULL) {
        // Get the size of the file
        fseek(file, 0, SEEK_END);
        int size = ftell(file);
        rewind(file);

        // Declare memory for the file and copy contents to it
        char *contents = malloc((sizeof(char) * size + 1));
        fread(contents, 1, size, file);

        // Make sure to include null char at the end
        contents[size] = '\0';

        return contents;

    } else {
        printf("File unreachable");
        return 0;
    }

}
