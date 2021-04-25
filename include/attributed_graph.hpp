#ifndef GA_ATTRIBUTED_GRAPH_HPP
#define GA_ATTRIBUTED_GRAPH_HPP

#include "matrix.hpp"
#include "vector"

namespace ga {

class attributed_graph {

    auto get_attribute_vector_length() -> uint32_t;

private:
    std::vector<vertix> get_adjacent_vertixes(vertix v);
    std::vector<std::vector<vertix>> find_paths_length_less_than(vertix &first,
                                                                 vertix &second,
                                                                 uint32_t max_length);

    bool path_contains_vertix(std::vector<vertix> &path, vertix &vertix_to_find);

    matrix<uint32_t> adjacency_matrix;
    matrix<std::vector<double>> attribute_matrix;

};
}

#endif GA_ATTRIBUTED_GRAPH_HPP
