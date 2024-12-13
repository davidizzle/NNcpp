#include <nnet.hpp>

void SimpleNeuralNetwork::addLayer(int output_size)
{
    int input_size;

    if(!this->layers.empty())
    {
        // Match output 
        input_size = this->layers.back().activations.size();
    }

    this->layers.emplace_back()
}