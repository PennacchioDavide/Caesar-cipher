#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *s = cypher("ABCD", 2);
    printf("%s", s);
    free(s);
    return 0;
}