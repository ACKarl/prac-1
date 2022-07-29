#include<iostream>
extern int count_evens(int number);
int main() {
    int number=114514;
    std::cout << count_evens(number) << std::endl;
    return 0;
}