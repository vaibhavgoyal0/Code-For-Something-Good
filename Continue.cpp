#include<iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter Number ";
    cin>> num;
    int i;
    for(i=2;i<num;++i){
        if (i%2 != 0)
        {
            continue;
        }
        cout << i << " ";
    }
}