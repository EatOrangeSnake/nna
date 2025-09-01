#include "adaption/c/.h"

NNTLen nna_inc(NNA nna, NNT* result) {
    NNTLen i = 0;

    while (i < nna.length) {
        if ((*result)[i] = ++(*nna.nnt)[i]) return i;
        i++;
    }

    (*result)[i++] = 0;
    return i;
}
