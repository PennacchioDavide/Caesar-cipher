#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char *phrase = "Hello World";
    char *s = cypher(phrase, 14);
    printf("%s\n", s);

    char *s2 = deCypher(s, 14);
    printf("%s\n", s2);

    free(s);
    free(s2);

    
    return 0;
}