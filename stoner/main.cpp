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

int main() {
    TPoint p;
    p.x = 10;
    p.SetY(44);
    cout << p.x << " " << p.GetY() << endl;
    
    return 0;
}
