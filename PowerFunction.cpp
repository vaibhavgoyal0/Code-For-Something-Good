#include <iostream>
#include<cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter Number ";
    cin >> n;

    int j = 2;
    for(int i = 1;i <= n; i++) {
    cout << pow(j,i) << " " << endl;
    }
}