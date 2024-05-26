// برنامه ای بنویسید که یک عدد را از لیست بصورتی حذف کند که تمامی عناصر بعد از آن عدد یک واحد به چپ شیفت داده شوند

#include <iostream>
using namespace std;

int main(){
    int x, index, n = 7;
    int myArray[n] = {12, 9, 19, 21, 8, 19, 123};
    cout << "Please enter a number to remove :";
    cin >> x;
    for(int i=0; i<n; i++){
        if(myArray[i] == x){
            index = i;
            break;
        }
    }
    for(int i=index; i<n; i++){
        myArray[i] = myArray[i+1];
    }
    for(int i=0; i<n; i++){
        cout << myArray[i] << " ";
    }
    return 0;
}