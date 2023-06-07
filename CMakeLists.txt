cmake_minimum_required(VERSION 3.23)
project(design_patterns)

set(CMAKE_CXX_STANDARD 20)

add_executable(design_patterns main.cpp creational/abstract_factory/evm.cpp creational/abstract_factory/evm.h creational/abstract_factory/state.cpp creational/abstract_factory/state.h creational/abstract_factory/blockchain.cpp creational/abstract_factory/blockchain.h creational/abstract_factory/factory.cpp creational/abstract_factory/factory.h creational/abstract_factory/name.h creational/abstract_factory/client.cpp creational/abstract_factory/client.h)
