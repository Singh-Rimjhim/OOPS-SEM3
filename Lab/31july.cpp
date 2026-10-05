#include<iostream>
#include<cstdarg>
using namespace std;    
int sum(int count, ...) {
    va_list args;
    va_start(args, count);
    int total = 0;
    for (int i = 0; i < count; ++i) {
        total += va_arg(args, int);
    }
    va_end(args);
    return total;
}
int main() {
    int result1 = sum(3, 10, 20, 30);
    cout << "Sum of 10, 20, 30 = " << result1 << endl;

    int result2 = sum(5, 1, 2, 3, 4, 5);
    cout << "Sum of 1, 2, 3, 4, 5 = " << result2 << endl;

    return 0;
}
//Write a program to find maximum value among given numbers using variable function 
#include <iostream>
#include <cstdarg>  
using namespace std;
int findMax(int count, ...) {
    va_list args;
    va_start(args, count);
    int maxVal = va_arg(args, int); 
    for (int i = 1; i < count; ++i) {
        int num = va_arg(args, int);
        if (num > maxVal) {
            maxVal = num;
        }
    }
    va_end(args);
    return maxVal;
}
int main() {
    int max1 = findMax(4, 10, 20, 5, 15);
    cout << "Maximum value among 10, 20, 5, 15 = " << max1 << endl;

    int max2 = findMax(6, 3, 7, 2, 9, 1, 8);
    cout << "Maximum value among 3, 7, 2, 9, 1, 8 = " << max2 << endl;

    return 0;
}