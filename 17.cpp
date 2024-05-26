// تابعی بنویسید که دو استرینگ را در ورودی دریافت کند و آنها را به هم متصل کند

#include<iostream>
using namespace std;
void addString(char mySTR1[], char mySTR2[]){
    char result[20];
    int index = 0;
    for(int i=0; mySTR1[i] != '\0'; ++i){
        result[index++] = mySTR1[i];
    }
    for(int i=0; mySTR2[i] != '\0'; ++i){
        result[index++] = mySTR2[i];
    }
    cout << result;
}
int main(){
    char mySTR1[5] = "Hi";
    char mySTR2[5] = "Ali";
    addString(mySTR1, mySTR2);
    return 0;
}