#ifndef _NNFS_H_
#define _NNFS_H_

#include <string>
#include <vector>


using matrix = std::vector<std::vector<double>>;






double inner_product(const std::vector<double> *const x,
					const std::vector<double> *const y);




matrix matmult(const matrix& m1, const matrix& m2);


matrix matmult1(const matrix *const m1, const matrix *const m2);






#endif // _NNFS_H_