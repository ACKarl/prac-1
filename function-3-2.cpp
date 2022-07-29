#include<iostream>

int median_array(int array[],int n){
	if(n<1||n%2==0)
		return 0;
	for(int j=0;j<n;j++){
	for(int i=0;i<n;i++){
		int a=0;
		if(array[j]<array[i]){
			a=array[i];
			array[i]=array[j];
			array[j]=a;
		}
	}
	}
	
	int b=0;
	if(n%2!=0){
		b=n/2+0.5;
		std::cout<<array[b]<<std::endl;
	}
	
	return 0;
}