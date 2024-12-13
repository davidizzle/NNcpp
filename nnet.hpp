#pragma once
#include <vector>
#include <iostream>


class SimpleNeuralNetwork 
{
    private:
        std::vector<Layer> layers;
        double learning_rate;

    public:
        SimpleNeuralNetwork(double lr) : learning_rate(lr) {}

        // Add a new layer
        void addLayer(int input_size, int output_size);
        
        // Forward-pass everything
        std::vector<double> forward(const std::vector<double> & input);
        
        // Perform backpropagation to update weights and biases
        void backpropagate(const std::vector<double>& expected_output);

        // Train the network
        void train(const std::vector<std::vector<double>>& X, const std::vector<std::vector<double>> y, int epochs);

        // Predict output for new data
        std::vector<double> predict(const std::vector<double>& input);

};