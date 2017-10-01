#include "home1.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <locale>
using namespace std;

h1::h1(){
    cout<<"Введите строку"<<endl;
    getline(cin,str);
}
h1::~h1()=default;
    void h1::getstr() {
        cout << str << endl;
    }
    void h1::h1() {
        cout << "'+'" << "-"count(str.begin(), str.end(), '+') << endl;
        cout << "'-'" << "-"count(str.begin(), str.end(), '-') << endl;
        cout << "'*'" << "-"count(str.begin(), str.end(), '*') << endl;
        cout << "'/'" << "-"count(str.begin(), str.end(), '/') << endl;
        cout << "'='" << "-"count(str.begin(), str.end(), '=') << endl;
        int a = 0;
        for (int i = str.find("exp"); i != string::npos; i = str.find("exp", i + 1)) {
            a++;
        }
        cout << "'exp'" << "-" << a << endl;
    }

