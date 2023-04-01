//
// Created by Miguel Pedrosa on 01/04/2023.
//

#include "Reader.h"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void Reader::reader(const std::string &filename, std::vector<std::string> &vectorInfo) {
// Open the JSON file
    std::ifstream ifs(filename);
    if (!ifs.is_open()) {
        std::cerr << "Failed to open file" << std::endl;
        return;
    }

    // Read the contents of the file into a string
    std::string json((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());

    // Parse the JSON string manually
    size_t pos = 0;
    while (pos < json.size()) {
        // Find the next occurrence of "value"
        pos = json.find("\"value\"", pos);
        if (pos == std::string::npos) {
            break;
        }

        // Find the corresponding "href"
        size_t start_pos = json.rfind("\"href\"", pos);
        size_t end_pos = json.find('"', start_pos + 8);
        if (start_pos == std::string::npos || end_pos == std::string::npos) {
            break;
        }
        std::string href = json.substr(start_pos + 8, end_pos - start_pos - 8);

        // Extract the value between the quotes
        start_pos = json.find('"', pos + 8);
        end_pos = json.find('"', start_pos + 1);
        if (start_pos == std::string::npos || end_pos == std::string::npos) {
            break;
        }
        std::string value = json.substr(start_pos + 1, end_pos - start_pos - 1);

        // Add the value to the followers vector
        vectorInfo.push_back(value);

        // Move to the next position in the JSON string
        pos = end_pos + 1;
    }
}
