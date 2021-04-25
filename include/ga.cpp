#include "ga.hpp"

namespace {
template <class matrix_element>
void perform_clasterization(attributed_graph<matrix_element> graph,
                            matrix<double> transition_matrix,
                            uint32_t number_of_clasters,
                            double restart_probability,
                            double influence_coef) {
    std::vector<double> attributes_weights_vector(graph.get_attribute_vector_length(), 0u);
    
}
}