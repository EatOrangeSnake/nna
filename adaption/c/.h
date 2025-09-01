#pragma once
#include <stdlib.h>
#include <stdbool.h>

typedef unsigned char NNUnit;
typedef NNUnit NNT[];
typedef size_t NNTLen;
typedef struct _NNA {
    NNT* nnt;
    NNTLen length;
} NNA;
