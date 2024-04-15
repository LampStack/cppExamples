// برنامه ای بنویسید که یک عدد دریافت کرده و زوج یا فرد بودن آن را مشخص نماید

#include <iostream>
using namespace std;
int main(){
int x;
cout << "Enter X :";
cin >> x;

if (x%2 == 0)
    cout << "ZOJ";
else
    cout << "FARD";
return 0;
}