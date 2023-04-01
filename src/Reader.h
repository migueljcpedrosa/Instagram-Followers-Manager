//
// Created by Miguel Pedrosa on 01/04/2023.
//

#ifndef INSTAGRAMFOLLOWERS_READER_H
#define INSTAGRAMFOLLOWERS_READER_H


#include <string>
#include <vector>

class Reader {
public:
    static void reader(const std::string& filename, std::vector<std::string>& vectorInfo);
};


#endif //INSTAGRAMFOLLOWERS_READER_H
