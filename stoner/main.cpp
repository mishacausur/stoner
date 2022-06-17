//
//  main.cpp
//  stoner
//
//  Created by Misha Causur on 17.06.2022.
//

#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "constructor" << endl;
    }
    void Print() {
        cout << "print\n";
    }
};

int main() {
    Test p;
    p.Print();
    return 0;
}
