/*
برنامه ای بنویسید که 5 جفت عدد را دریافت کرده و به کمک ضرب های متوالی عدد اول را به توان عدد دوم برساند
*/
#include<iostream>
using namespace std;
int main(){
    int a, b;
    int result;
    for(int i=0; i<5; i++){
        result = 1.0;
        cout << "Enter digits :";
        cin >> a >> b;
        for(int j=1; j<=b; j++){
            result *= a;
        }
        cout << endl << result << endl;
    }
    return 0;
}


