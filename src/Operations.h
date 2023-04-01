//
// Created by Miguel Pedrosa on 01/04/2023.
//

#ifndef INSTAGRAMFOLLOWERS_OPERATIONS_H
#define INSTAGRAMFOLLOWERS_OPERATIONS_H

#include <vector>
#include <string>
#include <algorithm>

class Operations {
public:
    static std::vector<std::string> subtract(std::vector<std::string>& following, std::vector<std::string>& followers);
};


#endif //INSTAGRAMFOLLOWERS_OPERATIONS_H
