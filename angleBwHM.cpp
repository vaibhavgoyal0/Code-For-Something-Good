#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int m, h;
    float ah, am, A, i;
    cout << "Enter Time ";
    cin >> h >> m;
    ah = h*30 + (m*0.5);
    cout << "Angle of Hour hand w.r.t to 12 = " << ah<< endl;
    am = m*6;
    cout << "Angle of Minute hand w.r.t to 12 = " << am << endl;
    if (am>ah)
    {
        A = am-ah;
    } else if(ah>am){
        A = ah-am;
    } else if(am==ah);
    {
        cout<< "Angle = " << am-ah;
    }
    exit;
    i = 360 -A;
    if(A<i){
        cout << "Angle = " << A;
    } else if(i<A){
        cout << "Angle = " << i;
    } else if(i==A) {
        cout<< "Angle = " << A;
    }
}