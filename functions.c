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

    int i;
    for(i = 0; phrase[i] != '\0'; i++) {
        phrase[i]+= dec;
    }
    res[len] = '\0';
    return res;
}

// Part to Decypher

// Part to Brutforce