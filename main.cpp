#include <iostream>
#include <vector>
#include <cmath>
//#include <numeric> // has an inner_product function

#include <chrono> // Time function calls

#include "NNFS.h"





int main()
{
	// Enable measuring execution time of a function
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;


    std::vector<double> inputs_{1.0, 2.0, 3.0, 2.5};
    std::vector<double> weights_{0.2, 0.8, -0.5, 1,
                                0.5, -0.91, 0.26, -0.5,
                                -0.26, -0.27, 0.17, 0.87};
    std::vector<double> biases_{2.0, 3.0, 0.5};
    

    matrix inputs(4, std::vector<double>(1, 0));
    matrix weights(3, std::vector<double>(4, 0));
    matrix biases(1, std::vector<double>(3, 0));


    std::cout << "inputs matrix:\n";
    std::cout << "rows of inputs: " << inputs.size() << "\ncols of inputs: " << inputs.at(0).size()  << std::endl;

    for (int i = 0; i < inputs.size(); ++i)
    {
        for (int ii = 0; ii < inputs.at(0).size(); ++ii)
        {
            inputs.at(i).at(ii) = inputs_.at((i*inputs.at(0).size())+ii);
            std::cout << inputs.at(i).at(ii) << ' ';
        }
        std::cout << '\n';
    }


    std::cout << "weights matrix:\n";
    std::cout << "rows of weights: " << weights.size() << "\ncols of weights: " << weights.at(0).size()  << std::endl;

    for (int i = 0; i < weights.size(); ++i)
    {
        for (int ii = 0; ii < weights.at(0).size(); ++ii)
        {
            weights.at(i).at(ii) = weights_.at((i*weights.at(0).size())+ii);
            std::cout << weights.at(i).at(ii) << ' ';
        }
        std::cout << '\n';
    }

    std::cout << "biases matrix:\n";
    std::cout << "rows of biases: " << biases.size() << "\ncols of biases: " << biases.at(0).size()  << std::endl;

    for (int i = 0; i < biases.size(); ++i)
    {
        for (int ii = 0; ii < biases.at(0).size(); ++ii)
        {
            biases.at(i).at(ii) = biases_.at((i*biases.at(0).size())+ii);
            std::cout << biases.at(i).at(ii) << ' ';
        }
        std::cout << '\n';
    }


    // Now add two matrices (output + biases)
    matrix output = matmult(weights, inputs);
    output = inner_product(&output, &biases_)
    std::cout << "output matrix:\n";
    std::cout << "rows of output: " << output.size()  << std::endl;

    for (int i = 0; i < output.size(); ++i)
    {

        std::cout << output.at(i) << ' ';
 
        std::cout << '\n';
    }


 
    //m1 = ;



 // Book page. 43-

    //std::vector<double> v1 = {1.0, 2.0, 3.0, 2.5};
    //std::vector<double> v2 = {0.2, 0.8, -0.5, 1.0};
    //double bias = 2.0;

    //double dotProduct = inner_product(&v1, &v2) + bias;

    //std::cout << "Dot product: " << dotProduct << std::endl;

    /* Getting number of milliseconds as a double. */


	return 0;
}