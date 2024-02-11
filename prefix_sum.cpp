#include <iostream>
#include "prefix_sum.h"

int non_negative_prefix(int ary[],int length){
    bool result= true;
    int sum=0;
    for (int i=0;i<length;i++){
        sum+= ary[i];
        if (sum<0){
            result=false;
            break;
        }
    }
    return result;
}

int non_positive_prefix(int ary[],int length){
    bool result= true; //intruction state that values may not go above 0. Hence 0 or empty return true.
    int sum=0;
    for (int i=0;i<length;i++){
        sum+= ary[i];
        if (sum>0){
            result=false;
            break;
        }
    }
    return result;
} 

int prefix_sum(int ary[], int length){
    int sum=0;
    for (int i=0; i<length; i++){
        sum += ary[i];
    }
    return sum;
}

