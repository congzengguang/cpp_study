//
// Created by Administrators_ on 2018/5/24.
//

#include <iostream>
#include <string>
using namespace std;

//sizeof()  方法获取一种类型的存储空间

int main(){
    cout << sizeof(int) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(string) << endl;

    double a ;
    string h;
    cout << sizeof(a) << endl;
    cout << sizeof(h) << endl;
    return 0;
}