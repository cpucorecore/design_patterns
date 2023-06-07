//
// Created by sky on 2023/6/6.
//

#include "factory.h"

namespace abstract_factory_client {
    void demo() {
        basic_factory bf;
        advanced_factory af;

        auto bc = bf.create_blockchain();
        auto s = bf.create_state();
        auto vm = bf.create_evm();
        vm->run(*bc, *s);

        auto bc2 = af.create_blockchain();
        auto s2 = af.create_state();
        auto vm2 = af.create_evm();
        vm2->run(*bc2, *s2);

        vm->run(*bc2, *s2);
    }
}