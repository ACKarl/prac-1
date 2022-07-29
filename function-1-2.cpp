#include<iostream>
double array_mean(int array[], int n){
    double sum=0;
    for(int i=0;i<n;i++){
    sum=sum+array[i];
    }
    sum=sum/n;
    if(n<1){
        return 0;
    }
    return sum;
}