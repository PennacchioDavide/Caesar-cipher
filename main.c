#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    char *phrase = "ABCD";
    char *s = cypher(phrase, 2);
    printf("%s\n", s);

    free(s);
    
    return 0;
}