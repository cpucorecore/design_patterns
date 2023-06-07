//
// Created by sky on 2023/6/6.
//

#ifndef DESIGN_PATTERNS_STATE_H
#define DESIGN_PATTERNS_STATE_H

#include <map>
#include "name.h"

using std::map;

class abstract_state : public name {
public:
    virtual int get_state(int key) = 0;
    virtual void set_state(int key, int value) = 0;

protected:
    map<int, int> kvs;
};

class iavl_state : public abstract_state {
public:
    std::string get_name() const override;
    int get_state(int key) override;
    void set_state(int key, int value) override;
};

class mpt_state : public abstract_state {
public:
    std::string get_name() const override;
    int get_state(int key) override;
    void set_state(int key, int value) override;
};

#endif //DESIGN_PATTERNS_STATE_H
