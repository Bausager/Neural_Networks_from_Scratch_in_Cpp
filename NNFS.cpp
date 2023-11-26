

#include "NNFS.h"

double inner_product(const std::vector<double> *const x, const std::vector<double> *const y)
{
	float output = 0;
	uint64_t N = (*x).size();

	for (uint64_t i = 0; i < N; ++i)
	{
		output += (*x).at(i) * (*y).at(i);
	}
	return output;
}




matrix matmult(const matrix& m1, const matrix& m2)
{
    matrix result(m1.size(), std::vector<double>(m2.at(0).size()));

    for(std::size_t row = 0; row < result.size(); ++row) {
        for(std::size_t col = 0; col < result.at(0).size(); ++col) {
            for(std::size_t inner = 0; inner < m2.size(); ++inner) {
                result.at(row).at(col) += m1.at(row).at(inner) * m2.at(inner).at(col);
            }
        }
    }
    return result;
}


matrix matmult1(const matrix *const m1, const matrix *const m2)
{
    matrix result((*m1).size(), std::vector<double>((*m2).at(0).size()));

    for(std::size_t row = 0; row < result.size(); ++row) {

        for(std::size_t col = 0; col < result.at(0).size(); ++col) {

            for(std::size_t inner = 0; inner < (*m2).size(); ++inner) {

                result.at(row).at(col) += (*m1).at(row).at(inner) * (*m2).at(inner).at(col);
            }
        }
    }
    return result;
}


