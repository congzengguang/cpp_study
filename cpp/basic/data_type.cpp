//
// Created by Administrators_ on 2018/5/23.
//
#include <iostream>
#include <string>
#include <limits>
using namespace std;
int main(){
    bool one = true;
    char a = 'a';
    int b = 1;
    float f = 1.2;
    double d = 2.3;
    wchar_t  wc = 'A';
    cout << one << endl;
    cout << a << endl;
    cout << b << endl;
    cout << f << endl;
    cout << d << endl;
    cout << wc << endl;
    cout << numeric_limits<bool>::max() << endl;
    cout << numeric_limits<double>::min() << endl;
    cout << numeric_limits<double>::max() << endl;
    return 0;
}
