//
//  main.cpp
//  stoner
//
//  Created by Misha Causur on 17.06.2022.
//

#include <iostream>

using namespace std;

int main() {
    int *a = NULL;
    a = new int(7);
    cout << *a << endl;
    delete a;
    return 0;
}
