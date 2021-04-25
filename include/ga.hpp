#ifndef GA_HPP
#define GA_HPP

#include "attributed_graph.hpp"

namespace ga {
void perform_clasterization(attributed_graph graph,
                            matrix<double> transition_matrix,
                            uint32_t number_of_clasters,
                            double restart_probability,
                            double influence_coef);

};

#endif // GA_HPP
