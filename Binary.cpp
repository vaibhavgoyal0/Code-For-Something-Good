#include <iostream>

using namespace std;

int main () {
    int n;

    cout << "Enter Number ";
    cin >> n;

    int binary = 0;
    
    while(n>0) {
        binary = n%2;
        n = n/2;
        cout << binary << " ";
// reverse the given output to obtain correct Binary Number... V@ibh@v... Signing Off...
    }
}