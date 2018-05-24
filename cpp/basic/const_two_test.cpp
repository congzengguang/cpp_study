//
// Created by Administrators_ on 2018/5/24.
//
#include <iostream>
#include <string>
using namespace std;
//定义常量后面不能加分号；
#define HEIGHT 10
#define WIDTH 20
int main(){
    const int c = 90;

    int area;
    area = HEIGHT * WIDTH;
    cout << area << endl;
    cout << c << endl;
    return 0;
}
