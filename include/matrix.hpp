#ifndef GA_MATRIX_HPP
#define GA_MATRIX_HPP

#include <cstdint>

namespace ga {
class vertix {
public:
    vertix(uint32_t i, uint32_t j) : i(i), j(j) {

    }

    bool operator==(vertix &other) {
        if (i == other.i && j == other.j) {
            return true;
        } else {
            return false;
        }
    }

    uint32_t i;
    uint32_t j;
};

template <class element_type>
class matrix {
public:
    matrix(element_type *data, uint32_t data_length, uint32_t rows, uint32_t lines) :
        matrix_data(data) {
        number_of_rows = rows;
        number_of_lines = lines;
    }

    auto at(uint32_t i, uint32_t j) -> element_type;

    auto get_nubmer_of_rows () -> uint32_t;
    auto get_nubmer_of_lines () -> uint32_t;

private:

    element_type *const matrix_data;
    uint32_t number_of_rows;
    uint32_t number_of_lines;
};
}

#endif // GA_MATRIX_HPP
