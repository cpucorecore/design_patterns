//
// Created by sky on 2023/6/7.
//

#include "client.h"
#include "ProductBuilder.h"

namespace builder_client {
    void demo() {
        ProductBuilder pb;
        auto p = pb.setO1(1).setO2(2).create();
        p->doSomething();
        delete p;
    }
}