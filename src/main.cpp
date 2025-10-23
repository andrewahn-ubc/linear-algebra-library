#include <iostream>
#include <vector>
#include "Tensor.h"
using namespace std;

int main() {
    vector<vector<vector<double>>> v = {{{1, 2, 3},{4, 5, 6}},{{7, 8, 9},{10, 11, 12}}};
    Tensor t(v);
}
