#include<iostream>
using namespace std;
#define pi 3.14
int main(){
    int r, h;
    cout << "Enter the value of radius and height" << endl;
    cin >> r >> h;
    float vol = pi*r*r*h;
    cout << "Volume of cylinder is " << vol << endl;
}