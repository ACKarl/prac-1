#include<iostream>
int num_count(int array[], int n, int number){
    int m=0;
    for(int i=0;i<n;i++){
    if(array[i]==number){
    m=m+1;
    }
    }
    if(n<1){
        return 0;
    }
    return m;
}