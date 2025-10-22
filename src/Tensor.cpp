// A vector
#include <vector>
#include <typeinfo>
#include <iostream>

class Tensor {
    public:
    std::vector<double> numbers; 
    std::vector<double> shape;
    int dimensions;

    template<typename T>
    Tensor(const std::vector<T> tensor) {
        std::cout << typeid(tensor).name() << std::endl;
    }
}