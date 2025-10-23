// A vector
#include <vector>
#include <typeinfo>
#include <iostream>
using namespace std;

class Tensor {
    public:
    vector<double> flattened_tensor; 
    vector<double> shape;
    int dimensions;

    template<typename T>
    Tensor(const vector<T> tensor) {
        determine_shape(tensor);

        for (double i : shape) {
            cout << i << endl;
        }
    }

    private:
    // Returns the shape of the given tensor
    template<typename T>
    void determine_shape(const vector<T> tensor) {
        this->shape.push_back(tensor.size());

        if constexpr (!is_arithmetic<T>::value) {
            determine_shape(tensor[0]);
        }
    }
    // template<typename T>
    // void determine_shape(const T tensor) {
    //     this->shape.push_back(tensor.size());

    //     if (!is_arithmetic<T>::value) {
    //         determine_shape(tensor[0]);
    //     }
    // }
};