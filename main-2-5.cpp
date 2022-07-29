#include<iostream>
bool is_descending(int array[], int n);
int main() {
    int array[5] = {5,4,3,2,1};
    
    std::cout << is_descending(array,5) << std::endl;
}