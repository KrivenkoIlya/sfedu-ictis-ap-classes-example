//
// Created by elpil on 23.04.2022.
//

#include "Circle.h"
#include <iostream>
using namespace std;

class construct
{
public:
    int a, b;
    construct()
    {
        a = 5;
        b = 9;
    }
};

int main()
{
    construct c;
    cout << "a: " << c.a<< "\n" << "b: " << c.b;
}
