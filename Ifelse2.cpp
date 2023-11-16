#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "enter number";
    cin >> n;

    if(n%3 == 0 && n%5 ==0){
    cout << "Bang";
    } else {
        cout << "Sad";
    }
}