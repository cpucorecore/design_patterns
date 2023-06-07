//
// Created by sky on 2023/6/6.
//

#ifndef DESIGN_PATTERNS_FACTORY_H
#define DESIGN_PATTERNS_FACTORY_H


#include "blockchain.h"
#include "state.h"
#include "evm.h"

class abstract_factory {
    virtual abstract_blockchain* create_blockchain() = 0;
    virtual abstract_state* create_state() = 0;
    virtual abstract_evm* create_evm() = 0;
};

class basic_factory : public abstract_factory {
public:
    abstract_blockchain* create_blockchain() override;
    abstract_state* create_state() override;
    abstract_evm* create_evm() override;
};

class advanced_factory : public abstract_factory {
public:
    abstract_blockchain* create_blockchain() override;
    abstract_state* create_state() override;
    abstract_evm* create_evm() override;
};

#endif //DESIGN_PATTERNS_FACTORY_H
