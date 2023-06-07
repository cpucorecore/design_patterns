//
// Created by sky on 2023/6/6.
//

#ifndef DESIGN_PATTERNS_EVM_H
#define DESIGN_PATTERNS_EVM_H


#include "blockchain.h"
#include "state.h"

class abstract_evm : name {
public:
    virtual void run(const abstract_blockchain &blockchain, abstract_state &state) = 0;
};

class basic_evm : public abstract_evm {
    std::string get_name() const override;
    void run(const abstract_blockchain &blockchain, abstract_state &state) override;
};

class advanced_evm : public abstract_evm {
    std::string get_name() const override;
    void run(const abstract_blockchain &blockchain, abstract_state &state) override;
};

#endif //DESIGN_PATTERNS_EVM_H
