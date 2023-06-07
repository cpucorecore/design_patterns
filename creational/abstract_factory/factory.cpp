//
// Created by sky on 2023/6/6.
//

#include "factory.h"

abstract_blockchain* basic_factory::create_blockchain() {
    return new basic_blockchain;
}

abstract_state* basic_factory::create_state() {
    return new iavl_state;
}

abstract_evm* basic_factory::create_evm() {
    return new basic_evm;
}

abstract_blockchain* advanced_factory::create_blockchain() {
    return new advanced_blockchain;
}

abstract_state* advanced_factory::create_state() {
    return new mpt_state;
}

abstract_evm* advanced_factory::create_evm() {
    return new advanced_evm;
}
