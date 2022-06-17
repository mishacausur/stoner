//
//  main.cpp
//  stoner
//
//  Created by Misha Causur on 17.06.2022.
//

#include <iostream>
using namespace std;

class TPoint {
    int y;
public:
    int x;
    void SetY(int y1);
    int GetY();
};

void TPoint::SetY(int y1) {
    y = y1;
}

int TPoint::GetY() {
    return y;
}

 // HW

class Setter {
public:
    int w;
    void SetW(int w1);
    int GetW();
    int GetSQR();
    int GetRT();
};

void Setter::SetW(int w1) {
    w = w1;
}

void exer() {
    Setter s;
    s.SetW(4);
   
    cout << s.w << " " << s.GetW() << " " << s.GetSQR() << endl;
}

int Setter::GetW() {
    return w;
}

int Setter::GetSQR() {
    return w * w;
}

int main() {
    TPoint p;
    p.x = 10;
    p.SetY(44);
    cout << p.x << " " << p.GetY() << endl;
    exer();
    return 0;
}
