// برنامه ای بنویسید که عناصر یک ماتریس 3*5 را از کاربر دریافت و ذخیره کند

#include <iostream>
using namespace std;

int main(){
    int myArray[3][5];
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            cout << "myArray[" << i << "][" << j << "] :";
            cin >> myArray[i][j];
        }
    }
    return 0;
}