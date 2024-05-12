// برنامه ای بنویسید که آرایه ای به طول 10 را با اعداد صحیح مختلف پر کرده و با جابجایی مقادیر، آنرا معکوس نماید.

#include <iostream>
using namespace std;
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Array before inversion: ";
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; ++i) {
        int temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }
    cout << "Array after inversion: ";
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}