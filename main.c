#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shell_loop() {
    char *input = NULL;
    size_t bufsize = 0;
    ssize_t nread;

    while (1) {
        printf("#cisfun$ ");
        nread = getline(&input, &bufsize, stdin);

        if (nread == -1) {
            printf("\n");
            break;
        }

        if (strcmp(input, "\n") == 0) {
            continue;
        }

        printf("You typed: %s", input);
    }

    free(input);
}

int main() {
    shell_loop();
    return 0;
}
