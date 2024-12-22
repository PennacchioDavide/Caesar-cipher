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

        if (c >= 'A' && c <= 'Z') {
            res[i] = 'A' + (c - 'A' + dec) % 26;
        }
        else if (c >= 'a' && c <= 'z') {
            res[i] = 'a' + (c - 'a' + dec) % 26;
        }
        else {
            res[i] = c;
        }
    }

    res[len] = '\0';
    return res;
}

// Part to Decypher
char *deCypher(char *phrase, int dec) {
    int len = strlen(phrase);
    char *res = (char *) malloc(sizeof(char) * (len + 1));
    if (res == NULL) {
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        char c = phrase[i];

        if (c >= 'A' && c <= 'Z') {
            res[i] = 'Z' + (c - 'Z' - dec) % 26;
        }
        else if (c >= 'a' && c <= 'z') {
            res[i] = 'z' + (c - 'z' - dec) % 26;
        }
        else {
            res[i] = c;
        }
    }

    res[len] = '\0';
    return res;
}