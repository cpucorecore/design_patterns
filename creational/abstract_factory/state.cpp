//
// Created by sky on 2023/6/6.
//

#include "state.h"

int iavl_state::get_state(int key) {
    return kvs[key];
}

void iavl_state::set_state(int key, int value) {
    kvs[key] = value;
}

std::string iavl_state::get_name() const {
    return "iavl_state";
}

int mpt_state::get_state(int key) {
    return kvs[key];
}

void mpt_state::set_state(int key, int value) {
    kvs[key] = value;
}

std::string mpt_state::get_name() const {
    return "mpt_state";
}
