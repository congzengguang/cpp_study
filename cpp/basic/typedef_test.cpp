//
// Created by Administrators_ on 2018/5/23.
//
#include <iostream>
#include <string>
#include <limits>
using namespace std;
typedef int newInt;
int main(){
    newInt a = 0;
    cout << numeric_limits<newInt>::max() << endl;
    cout << numeric_limits<int>::max() << endl;
    return 0;
}
