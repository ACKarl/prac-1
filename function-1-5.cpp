#include<iostream>
int count_evens(int number){
    int a=0;
    for(int i=0;i<number;i++){
    if(i%2==0){
    a=a+1;
    }
    }
    if(number<1){
        return 0;
    }
    return a;
}