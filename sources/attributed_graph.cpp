#include "attributed_graph.hpp"
#include <queue>

namespace ga {
std::vector<vertix> attributed_graph::get_adjacent_vertixes(vertix v) {
    std::vector<vertix> result;

    for (uint32_t i = 0; i < adjacency_matrix.get_nubmer_of_rows(); i++) {
        if (adjacency_matrix.at(i, v.j)) {
            result.push_back(vertix(i, v.j));
        }
    }

    return result;
}

bool attributed_graph::path_contains_vertix(std::vector<vertix> &path, vertix &vertix_to_find) {
    for (auto &vertix_in_path : path) {
        if (vertix_in_path == vertix_to_find) {
            return true;
        }
    }

    return false;
}

std::vector<std::vector<vertix>> attributed_graph::
                                    find_paths_length_less_than(vertix &first,
                                                                vertix &second,
                                                                uint32_t max_length) {
    std::queue<std::vector<vertix>> paths_queue;

    std::vector<vertix> current_path;

    std::vector<std::vector<vertix>> result_paths;

    current_path.push_back(first);

    paths_queue.push(current_path);

    while (!paths_queue.empty()) {
        current_path = paths_queue.front();

        if (current_path.back() == second) {
            result_paths.push_back(current_path);
        }

        if (current_path.size() > max_length) {
            return result_paths;
        }

        paths_queue.pop();

        auto adj_vertixes = get_adjacent_vertixes(current_path.back());

        for (auto &current_vertix : adj_vertixes) {
            if (!path_contains_vertix(current_path, current_path.back())) {
                std::vector<vertix> new_path(current_path);
                new_path.push_back(current_vertix);
                paths_queue.push(new_path);
            }
        }
    }

    return result_paths;
}
}
