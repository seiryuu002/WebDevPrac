#include<iostream>
using namespace std;

int main(){
    int a = 5,b = 10;
    cout << a << "," << a++ << "," << ++a << endl; // 567 X //767 O
    a = 5;
    cout << a << "," << ++a << "," << a++ << endl; // 566 X //775 O
    a = 5;
    cout<<a++ + ++a;
    return 0;
}