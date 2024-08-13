#include "bmh.h"

bool Bmh(String *t, String *p){
    int n = t->length, m = p->length;
    int i, j, k;
    int d[256];
    for(j = 0; j < 256; j++){
        d[j] = m;
    }
    for(j = 1; j < m; j++){
        d[p->str[j-1]] = m-j;
    }
    i = m;
    while(i<=n){
        k = i; j = m;
        while(t->str[k-1] == p->str[j-1] && j > 0){
            k--; j--;
        }
        if(j == 0){
            return true;
        }
        i += d[t->str[i-1]];
    }
    return false;
}