//
// Created by Miguel Pedrosa on 01/04/2023.
//

#include "Operations.h"

std::vector<std::string> Operations::subtract(std::vector<std::string> &following, std::vector<std::string> &followers) {
    std::vector<std::string> result;
    std::sort(following.begin(), following.end());
    std::sort(followers.begin(), followers.end());
    std::set_difference(following.begin(), following.end(),
                        followers.begin(), followers.end(),
                        std::back_inserter(result));
    return result;
}
