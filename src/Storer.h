//
// Created by Miguel Pedrosa on 01/04/2023.
//

#ifndef INSTAGRAMFOLLOWERS_STORER_H
#define INSTAGRAMFOLLOWERS_STORER_H


#include <fstream>
#include <vector>

class Storer {
public:
    static void storeVectorToFile(const std::string &filename, const std::vector<std::string> &vectorInfo);
};


#endif //INSTAGRAMFOLLOWERS_STORER_H
