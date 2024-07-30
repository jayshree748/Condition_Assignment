#include<iostream>
using namespace std;
int main(){
    char a, b;
    cout << "Enter the characters" << endl;
    cin >> a >> b;
    int diff = (int)a - (int)b;
    cout << abs(diff) << endl;
}