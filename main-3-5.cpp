#include<iostream>

extern double sum_even(double array[], int n);

int main(){
	double array[5]={8,4,2,5,6};
	std::cout<<sum_even(array,5)<<std::endl;
}