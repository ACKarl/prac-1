#include<iostream>

extern double weighted_average(int array[], int n);

int main(){
	int array[6]={2,4,2,7,9};
	std::cout<<weighted_average(array,6)<<std::endl;
}