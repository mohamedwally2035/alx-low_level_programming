#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }

    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        return 0; // Unable to open the file
    }

    char *buffer = malloc(letters);
    if (buffer == NULL) {
        close(fd);
        return 0; // Memory allocation error
    }

    ssize_t bytesRead = read(fd, buffer, letters);
    if (bytesRead == -1) {
        // Reading error
        perror("Error reading from file");
        free(buffer);
        close(fd);
        return 0;
    }

    ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
    if (bytesWritten == -1 || (size_t)bytesWritten != (size_t)bytesRead) {
        // Writing error or not all bytes were written
        perror("Error writing to standard output");
        free(buffer);
        close(fd);
        return 0;
    }

    free(buffer);
    close(fd);

    return bytesRead;
}

int main() {
    const char *filename = "example.txt";
    size_t letters_to_read = 100;

    ssize_t result = read_textfile(filename, letters_to_read);

    if (result == 0) {
        printf("Failed to read and print the file.\n");
    } else {
        printf("Successfully read and printed %zd letters from the file.\n", result);
    }

    return 0;
}
