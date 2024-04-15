// برنامه ای بنویسید که سه عدد دریافت کرده و بزرگترین عدد را نمایش دهد

#include <iostream>
using namespace std;
int main(){
int a, b, c, maximum;
cout << "Enter: ";
cin >> a >> b >> c;
maximum = a;
if (b > maximum) maximum = b;
if (c > maximum) maximum = c;
cout << maximum;
return 0;
}
