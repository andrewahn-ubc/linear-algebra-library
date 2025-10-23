#include <iostream>
#include <vector>
#include "Tensor.h"
using namespace std;

int main() {
    vector<vector<vector<double>>> v = {{{1, 2, 3},{1, 2, 3}},{{1, 2, 3},{1, 2, 3}}};
    Tensor t(v);
}
