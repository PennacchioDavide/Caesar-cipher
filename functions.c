#include "functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Part to Cypher
char *cypher(char *phrase, int dec) {
    int len = strlen(phrase);
    char *res = (char *) malloc(sizeof(char) * (len + 1));
    if (res == NULL) {
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        char c = phrase[i];

        res[i] = c + dec;
    }

    res[len] = '\0';
    return res;
}

// Part to Decypher
char *decypher(char *phrase, int dec) {
    return cypher(phrase, -dec);
}

// Part to Brutforce