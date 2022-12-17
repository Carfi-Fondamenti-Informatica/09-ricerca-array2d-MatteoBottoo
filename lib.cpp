#include "lib.h"

bool comp(char list[10][10], int &p, char name[]){
    for (int i=0;i<10;i++){
        for (int k=0;k<20;k++){
            if(list[i][k]!=name[j]){
                k=20;
            }else{
                if(k==19){
                    p=i;
                    return true;
                }
            }
        }
    }
    return false;
}
