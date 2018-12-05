#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <locale.h>
int main(int argc, char **argv) {
    FILE *in;
    in = fopen(argv[1], "r");

    char buffer[128];
    unsigned count = 0;
    while (!feof(in)) {
        fgets(buffer, 127, in);
        if ((++count % 2) == 0) printf("%s", buffer);
    }
    fclose(in);
}