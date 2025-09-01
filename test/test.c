#include "../source/inc.c"

int main() {
    NNT body = {255};
    NNA nna = {
        .nnt = &body, 
        .length = 1
    };

    NNUnit rdt[64];
    NNA result = {
        .nnt = &rdt, 
        .length = nna_inc(nna, &rdt)
    };

    return 0;
}
