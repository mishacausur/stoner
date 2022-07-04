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
    a = (int*)malloc( sizeof(a));
    *a = 5;
    cout << *a << endl;
    free(a);
    return 0;
}
