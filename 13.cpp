// برنامه ای بنویسید که یک عنصر را در یک لیست جستجو کرده و اگر وجود داشت اندیس آن را نمایش دهد و در غیراینصورت -1 را نمایش دهد

#include <iostream>
using namespace std;

int main(){
    int x, n = 5;
    int myArray[n] = {12, 9, 7, 3, 8};
    bool flag = false;
    cout << "Please enter x to search :";
    cin >> x;
    for(int i=0; i<n; i++){
        if(myArray[i] == x){
            cout << "element index is : " << i;
            flag = true;
            break;
        }
    }
    if(!flag)
        cout << "-1";
    return 0;
}