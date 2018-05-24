//
// Created by Administrators_ on 2018/5/24.
//
#include <iostream>
#include <string>
using namespace std;
//函数的声明
void print(string);

int main(){
    string hello="Hello C++";
    //函数的调用
    print(hello);
    return 0;
}
//函数的定义
void print(string str){
    cout << str << endl;
}
