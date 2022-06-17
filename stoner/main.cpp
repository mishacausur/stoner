//
//  main.cpp
//  stoner
//
//  Created by Misha Causur on 17.06.2022.
//

#include <iostream>
using namespace std;

struct TPoint {
    int x;
private:
    int y;
public:
    void SetY(int y1) {
        y = y1;
    }
    int GetY() {
        return y;
    }
};

int main() {
    TPoint p;
    p.x = 10;
    p.SetY(44);
    cout << p.x << " " << p.GetY() << endl;
    
    return 0;
}
