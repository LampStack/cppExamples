// برنامه ای بنویسید که نمرات دانشجویان کلاسی 10 نفره را دریافت کرده و نمراتی که از میانگین کالس باالتر هستند را نمایش دهد

#include <iostream>
using namespace std;
int main() {
    int numStudents = 10;
    float grades[numStudents];
    cout << "Please enter [" << numStudents << "] student grade: " << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Student grade" << i + 1 << ": ";
        cin >> grades[i];
    }
    float sum = 0;
    for (int i = 0; i < numStudents; ++i) {
        sum += grades[i];
    }
    float average = sum / numStudents;
    cout << "grades that are more than average:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        if (grades[i] > average) {
            cout << "grade" << i + 1 << ": " << grades[i] << endl;
        }
    }
    return 0;
}