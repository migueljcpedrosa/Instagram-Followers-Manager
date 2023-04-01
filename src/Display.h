//
// Created by Miguel Pedrosa on 01/04/2023.
//

#ifndef INSTAGRAMFOLLOWERS_DISPLAY_H
#define INSTAGRAMFOLLOWERS_DISPLAY_H

#include <iostream>
#include <vector>

class Display {
public:
    static void displayFollowers(std::vector<std::string> followers);
    static void displayFollowing(std::vector<std::string> following);
    static void displayPeopleWhoDontFollowBack(std::vector<std::string> result);
};


#endif //INSTAGRAMFOLLOWERS_DISPLAY_H
