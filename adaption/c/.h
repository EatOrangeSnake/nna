#pragma once
#include <stdlib.h>
#include <stdbool.h>

typedef unsigned char NNUnit;
typedef NNUnit NNT[];
typedef struct _NNA {
    NNT* nnt;
    size_t length;
} NNA;
