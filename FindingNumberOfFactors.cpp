#include<iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter Number ";
    cin>> num;
    int i;
    for(i=2;i<num;i++){
        if (num%i != 0)
        {
            continue;
        }
        cout << i << " ";
    }
}