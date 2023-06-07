//
// Created by sky on 2023/6/7.
//

#ifndef DESIGN_PATTERNS_PRODUCTBUILDER_H
#define DESIGN_PATTERNS_PRODUCTBUILDER_H


#include "Product.h"

class ProductBuilder {
public:
    ProductBuilder(){}

    ProductBuilder& setO1(int o) {
        option1 = o;
        return *this;
    }

    ProductBuilder& setO2(int o) {
        option2 = o;
        return *this;
    }

    Product* create() {
        return new Product(option1, option2);
    }

private:
    int option1;
    int option2;
};


#endif //DESIGN_PATTERNS_PRODUCTBUILDER_H
