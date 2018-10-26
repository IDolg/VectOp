#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

struct vector sum(struct vector v1, struct vector v2){
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    result.z = v1.z + v2.z;
    return result;
}

struct vector subtraction(struct vector v1, struct vector v2){
    struct vector result;
    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    result.z = v1.z - v2.z;
    return result;
}

struct vector vectMult(struct vector v1, struct vector v2){
    struct vector result;
    result.x = v1.y*v2.z - v2.y*v1.z;
    result.y = v2.x*v1.z - v2.z*v1.x;
    result.z = v1.x*v2.y - v2.x*v1.y;
    return result;
}
