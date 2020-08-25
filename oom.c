#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    char *p;
    size_t amount = 1;

    setvbuf(stdout, NULL, _IONBF, 0);

    while(1) {
        printf("Allocating: %zu bytes\n", amount);
        p = (char*) calloc(1, amount);
        if (p)
            amount *= 2;
        else
            amount /= 2;

        if (amount == 0)
            break;
    }
}
