/*
برنامه ای بنویسید که خروجی زیر را نشان دهد
*
* *
* * *
* * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Rows :";
    cin >> n;
    for (int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
