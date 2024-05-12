// برنامه ای بنویسید که 20 جمله اول سری فیبوناتچی را درون یک آرایه به همین اندازه قرار داده و نمایش دهد

#include <iostream>
using namespace std;
int main() {
    const int numTerms = 20;
    int fibonacci[numTerms];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int i = 2; i < numTerms; ++i) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    for (int i = 0; i < numTerms; ++i) {
        cout << fibonacci[i] << " ";
    }
    cout << endl;
    return 0;
}