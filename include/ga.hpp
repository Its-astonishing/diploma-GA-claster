#ifndef GA_HPP
#define GA_HPP

#include "sources/attributed_graph.hpp"

namespace ga {

template <class matrix_element, class attribute_type>
void perform_clasterization(attributed_graph<matrix_element, attribute_type> graph,
                            uint32_t number_of_clasters,
                            double restart_probability,
                            double influence_coef);

};

#endif GA_HPP
