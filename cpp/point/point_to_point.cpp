//
// Created by Administrators_ on 2018/6/23.
//
#include <iostream>
using namespace std;
int main(char argc, char **argv){
    int **c = NULL;
    int *b = NULL;
    int a = 0;
    b = &a;
    c = &b;
    cout << b << endl;
    cout << c << endl;
    return 0;
}
