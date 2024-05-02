/*
برنامه ای بنویسید که تمام اعداد اول سه رقمی را نمایش دهد
*/
#include<iostream>
using namespace std;
int main(){
    bool flag = true;
    for(int num=100; num<1000; num++){
            flag = true;
        for (int j=2; j<num/2; j++){
            if(num%j == 0) flag = false;
        }
        if (flag == true) cout << num << " ";
    }
    return 0;
}

