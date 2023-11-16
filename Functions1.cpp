#include <iostream>

using namespace std;

int factorial (int n) {
    int ans = 1;

    for(int i=2; i <=n; i++) {
        ans = ans * i;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    cout << factorial(6) << endl;
    cout << factorial(4) << endl;
    cout << factorial(11) << endl;
    cout << factorial(19) << endl;
    cout << factorial(n) << endl;

}