#ifndef TENSOR_H
#define TENSOR_H

#include <vector>
#include "Tensor.h"

class Tensor {
    public:
    std::vector<double> numbers; 
    std::vector<double> shape;
    int dimensions;

    template<typename T>
    Tensor(const std::vector<T> tensor) {
        std::cout << typeid(tensor).name() << std::endl;
    }
};

#endif