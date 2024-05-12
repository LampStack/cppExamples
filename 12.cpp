// درج در آرایه مرتب، به نحوی که مرتب باقی بماند

#include <iostream>
using namespace std;
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 9, 10};
    int n = 10;
    int num = 8;
    int i = n - 2;
    while (i >= 0 && arr[i] > num) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = num;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}