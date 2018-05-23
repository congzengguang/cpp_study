//
// Created by Administrators_ on 2018/5/22.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    str = "hello world";
    string *p;
    p = &str;
    cout << *p << endl;
    cout << *p + "!" << endl;
    return 0;
}