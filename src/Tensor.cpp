// A vector
#include <vector>
#include <typeinfo>
#include <iostream>
using namespace std;

class Tensor {
    public:
    vector<double> numbers; 
    vector<double> shape;
    int dimensions;

    template<typename T>
    Tensor(const vector<T> tensor) {
        std::cout << typeid(tensor).name() << std::endl;
    }
};