//
// Created by Administrators_ on 2018/5/22.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    int a[9] = {0,1,2,3,4,5,6,7,8};
    for(int x=0;x< sizeof(a)/ sizeof(a[0]);x++){
        cout << "第"<< x+1 << "个元素:" <<a[x] << endl;
    }
    return 0;
}