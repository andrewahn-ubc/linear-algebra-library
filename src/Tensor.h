#ifndef TENSOR_H
#define TENSOR_H

#include <vector>
#include "Tensor.h"

using namespace std;

class Tensor {
    public:

    vector<double> flattened_tensor; 
    vector<int> shape;
    int num_dimensions;

    template<typename T>
    Tensor(const vector<T> tensor) {
        determine_shape(tensor); 
        this->num_dimensions = this->shape.size();
        flatten(tensor);
        for (auto i : flattened_tensor) {
            cout << i << endl;
        }
    }

    private:

    // Recursively finds the shape of the given tensor
    // TODO: handle invalid tensor shapes to make the function more robust
    template<typename T>
    void determine_shape(const vector<T> tensor) {
        this->shape.push_back(tensor.size());

        if (!is_arithmetic<T>::value) {
            determine_shape(tensor[0]); // assumes the tensor isn't empty
        }
    }

    // Overloads determine_shape so that when it gets called on a double, nothing happens
    template<typename T>
    void determine_shape(const T tensor) {}

    // Recursively ransforms the n-dimensional tensor into a flat, 1-dimensional one
    template<typename T>
    void flatten(const vector<T> tensor) {
        for (auto i : tensor) {
            flatten(i);
        }
    }
    void flatten(const double leaf_element) {
        this->flattened_tensor.push_back(leaf_element);
    }
};

#endif