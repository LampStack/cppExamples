// معرفی انواع تابع ها بر اساس ورودی و خروجی

#include <iostream>
using namespace std;

void printHello(){
    cout << "HELLO";
}

void plusNumber(int num){
    num = num + 1;
    cout << num;
}

float PI_number(){
    return 3.14;
}

int sum_of_two_digits(int a, int b){
    return a + b;
}

int main(){
    int x = sum_of_two_digits(5, 3);
    cout << x;
    return 0;
}
