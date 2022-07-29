#include<iostream>
int max_element(int array[], int n){
int max=array[0];
for(int i=0;i<n;i++){
    if(array[i]>max){
    max=array[i];
    }
}
    if(n<1){
        return 0;
    }
    return max;
}
