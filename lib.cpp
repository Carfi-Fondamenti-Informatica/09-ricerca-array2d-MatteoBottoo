#include "lib.h"

float mass(int n,float a[]){
    float m;
    for (int c=0;c<n;c++){
        if(c==0){
            m=a[c];
        } else if (a[c]>m) {
            m=a[c];
        }
    }
    return m;
}
