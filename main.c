#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main(){
    
    struct vector v1, v2, v3;
    printf("enter x,y,z for first vector \n");
    scanf("%f %f %f",&v1.x, &v1.y, &v1.z);
    printf("enter x,y,z for second vector \n");
    scanf("%f %f %f",&v2.x, &v2.y, &v2.z);
    
    v3 = sum(v1,v2);
    printf(" \nv1+v2=(%f, %f, %f) \n",v3.x,v3.y,v3.z);
    v3 = subtraction(v1,v2);
    printf(" \nv1-v2=(%f, %f, %f) \n",v3.x,v3.y,v3.z);
    
    
    return 0;
}
