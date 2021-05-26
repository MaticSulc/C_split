#include <stdlib.h>
#include <string.h>

char **split(char *str, char delim, int *n) {
    if (strlen(str) <= 0) exit(-1);
    *n = 1;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == delim) {
            (*n)++;
        }
    }
    char **words = malloc((*n) * sizeof(char *) + (strlen(str) + 1) * sizeof(char));
    char *copy = (char *)&words[*n];
    strcpy(copy, str);

    words[0] = &copy[0];
    for (int i = 0, counter = 1; i < strlen(str); i++) {
        if (copy[i] == delim) {
            copy[i] = '\0';
            words[counter] = &copy[i + 1];
            counter++;
        }
    }
    return words;
}
