#include <output_layer.hpp>

std::vector<double> Output_Layer::softmax(std::vector<double> x) 
{
    // Convert to exp
    for (auto & element : x)
    {
        element = std::exp(element);
    }

    double tot_sum = layer::sum(x);
    std::vector<double> y = x;

    for (auto & element : y)
    {
        element = element / tot_sum;
    }

    return x;
}