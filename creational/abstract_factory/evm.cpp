//
// Created by sky on 2023/6/6.
//

#include "evm.h"

#include <iostream>

using std::cout;
using std::endl;

void basic_evm::run(const abstract_blockchain &blockchain, abstract_state &state) {
    cout << get_name() << "-" << blockchain.get_name() << "-" << state.get_name() << endl;
}

std::string basic_evm::get_name() const {
    return "basic_evm";
}

void advanced_evm::run(const abstract_blockchain &blockchain, abstract_state &state) {
    cout << get_name() << "-" << blockchain.get_name() << "-" << state.get_name() << endl;
}

std::string advanced_evm::get_name() const {
    return "advanced_evm";
}
