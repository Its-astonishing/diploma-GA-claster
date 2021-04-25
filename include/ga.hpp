#ifndef GA_HPP
#define GA_HPP

#include "sources/attributed_graph.hpp"

namespace ga {

template <class matrix_element>
void perform_clasterization(attributed_graph<matrix_element> graph,
                            matrix<double> transition_matrix,
                            uint32_t number_of_clasters,
                            double restart_probability,
                            double influence_coef);

};

#endif GA_HPP
