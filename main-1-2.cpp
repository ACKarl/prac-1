#include<iostream>
extern double array_mean(int array[], int n);
int main() {
    int array[5] = {1,2,3,4,6};
    std::cout << array_mean(array,5) << std::endl;
    return 0;
}