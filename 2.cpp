// برنامه ای بنویسید که یک عدد دریافت کرده و قدرمطلق آن را نمایش دهد

#include <iostream>
using namespace std;
int main(){
int x;
cin >> x;
if (x < 0){
    cout << x * (-1);
}else{
    cout << x;
}
return 0;
}
