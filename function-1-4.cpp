#include<iostream>
int sum_two_arrays(int array[], int secondarray[], int n){
    int suma=0;
    for(int i=0;i<n;i++){
    suma=suma+array[i];
    }
    int sumb=0;
    for(int i=0;i<n;i++){
    sumb=sumb+secondarray[i];
    }
    int sum=suma+sumb;
    if(n<1){
        return 0;
    }
    return sum;
}