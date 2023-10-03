#include <stdio.h>
#include <stdlib.h>

int append_text_to_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1;
    }

    if (text_content == NULL) {
        FILE *file = fopen(filename, "r");
        if (file == NULL) {
            return -1;
        } else {
            fclose(file);
            return 1;
        }
    }

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        return -1;
    }

    fputs(text_content, file);
    fclose(file);
    return 1;
}
