#include<iostream>
extern int sum_two_arrays(int array[], int secondarray[], int n);
int main() {
    int array[5] = {1,2,3,4,5};
    int secondarray[5]={7,8,9,10,11};
    std::cout << sum_two_arrays(array,secondarray,5) << std::endl;
    return 0;
}