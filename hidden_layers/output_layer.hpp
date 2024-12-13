#pragma once
#include <layer.hpp>
#include <vector>

class Output_Layer : public Layer
{
private:

public:
    Output_Layer(/* args */);
    ~Output_Layer();

    std::vector<double> softmax(std::vector<double> x);

};

