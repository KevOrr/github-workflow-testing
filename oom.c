#include <stdddef.h>
#include <stdlib.h>

int main() {
    char *p;
    size_t amount = 1;

    while(1) {
        p = (char*) calloc(1, amount);
        if (p)
            amount *= 2;
        else
            amount /= 2;

        if (amount == 0)
            break;
    }
}
