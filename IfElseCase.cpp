#include<iostream>

using namespace std;

int main() {
    int n;
    cout << "enter number" << endl;
    cin >> n;

    if( n%3 == 0 && n%5 == 0) {
        cout << "Bang";
     } else if(n%3 == 0){
        cout << "flizz";
     } else if(n%5 == 0){
        cout << "buzz";
     } else {
        cout << "Sad";
     }
}