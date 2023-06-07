//
// Created by sky on 2023/6/6.
//

#include "blockchain.h"

abstract_block &basic_blockchain::get_block(int number) {
    return *blocks[number];
}

void basic_blockchain::set_block(abstract_block &block) {
    blocks[block.get_number()] = &block;
}

std::string basic_blockchain::get_name() const {
    return "basic_blockchain";
}

abstract_block &advanced_blockchain::get_block(int number) {
    return *blocks[number];
}

void advanced_blockchain::set_block(abstract_block &block) {
    blocks[block.get_number()] = &block;
}

std::string advanced_blockchain::get_name() const {
    return "advanced_blockchain";
}
