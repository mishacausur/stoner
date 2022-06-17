//
//  main.cpp
//  stoner
//
//  Created by Misha Causur on 17.06.2022.
//

#include <iostream>
using namespace std;

// HW

class TPoints {
    int x;
    int y;
public:
    TPoints(int _x, int _y) {
        x = _x;
        y = _y;
    }
    
    int GetM();
    
    ~TPoints() {
        cout << GetM() << endl;
    }
    
};

int TPoints::GetM() {
    return  x - y;
}

int main() {
    TPoints x(6, 3);
    {
        TPoints y(21, 5);
    }
    return 0;
}
