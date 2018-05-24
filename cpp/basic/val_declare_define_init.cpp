//
// Created by Administrators_ on 2018/5/24.
//

#include <iostream>
#include <string>
using namespace std;
//声明变量
extern int a,b;
extern double c,d;

int main(){
    //定义变量
    int a,b;
    double c,d;
    //初始化变量
    a = 1;
    b =2;
    c = 1.1;
    d = 2.2;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    return 0;
}