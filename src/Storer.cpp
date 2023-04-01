//
// Created by Miguel Pedrosa on 01/04/2023.
//

#include <iostream>
#include "Storer.h"

void Storer::storeVectorToFile(const std::string &filename, const std::vector<std::string> &vectorInfo) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open file" << std::endl;
        return;
    }
    for (const auto &info: vectorInfo) {
        file << info << '\n';
    }
    std::cout << "Vector information stored in " << filename << std::endl;
    file.close();
}
