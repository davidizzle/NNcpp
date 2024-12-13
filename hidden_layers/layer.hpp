#pragma once
#include <cmath>
#include <vector>

class Layer {
    private:

    public:

        Layer();
        double sigmoid(double x);
        double sigmoid_derivative(double x);
        double sum(std::vector<double> x);


};