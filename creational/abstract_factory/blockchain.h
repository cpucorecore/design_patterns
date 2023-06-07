//
// Created by sky on 2023/6/6.
//

#ifndef DESIGN_PATTERNS_BLOCKCHAIN_H
#define DESIGN_PATTERNS_BLOCKCHAIN_H

#include <map>
#include "name.h"

using std::map;

struct abstract_block {
    virtual int get_number() = 0;
};

class block : public abstract_block {
public:
    int get_number() override {
        return number;
    }

protected:
    int number;
};

class abstract_blockchain : public name {
public:
    virtual abstract_block& get_block(int number) = 0;
    virtual void set_block(abstract_block & block) = 0;

protected:
    map<int, abstract_block*> blocks;
};

class basic_blockchain : public abstract_blockchain {
public:
    std::string get_name() const override;
    abstract_block& get_block(int number) override;
    void set_block(abstract_block & block) override;
};

class advanced_blockchain : public abstract_blockchain {
public:
    std::string get_name() const override;
    abstract_block& get_block(int number) override;
    void set_block(abstract_block & block) override;
};

#endif //DESIGN_PATTERNS_BLOCKCHAIN_H
