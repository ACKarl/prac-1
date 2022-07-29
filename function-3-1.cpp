#include<iostream>
bool is_fanarray(int array[], int n){
    if(n>=1){
        int a=0;
        int b=0;
if(n%2==0){
    for(int i=0;i<n/2;i++){
    if(array[i]==array[n-i-1]&&array[i]<=array[i+1]){
    a++;
    
    }
    }
    if(a=n/2){
    return true;
    }else{
        return false;
    }
}else if(n%2!=0){
    for(int i=0;i<(n+1)/2;i++){
    if(array[i]==array[n-1-i]&&array[i]<=array[i+1]){
      b++;
    }
    }  
    if(b=(n+1)/2){  
    return true;
    }else{
    return false;
    }
    }
    }else{
    return false;
}
    
    return true;
}