#include <layer.hpp>

Layer::Layer() {}

double Layer::sigmoid(double x) 
{
    return 1.0 / ( 1.0 + std::exp(-x));
}

double Layer::sigmoid_derivative(double x)
{
    return Layer::sigmoid(x) * ( 1 - Layer::sigmoid(x) );
}

double Layer::sum(std::vector<double> x)
{
    double cumulative_sum = 0;

    for (auto &element : x)
    {
        cumulative_sum += element;
    }

    return cumulative_sum;
}
