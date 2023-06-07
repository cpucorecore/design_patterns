//
// Created by sky on 2023/6/7.
//

#ifndef DESIGN_PATTERNS_PRODUCT_H
#define DESIGN_PATTERNS_PRODUCT_H

#include <iostream>

using std::cout;
using std::endl;

class Product {
public:
    Product(int o1, int o2) : option1(o1), option2(o2) {}
    void doSomething() {
        cout << option1 << "-" << option2 << endl;
    }

private:
    int option1;
    int option2;
};
#endif //DESIGN_PATTERNS_PRODUCT_H
