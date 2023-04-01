//
// Created by Miguel Pedrosa on 01/04/2023.
//

#include "Display.h"

void Display::displayFollowers(std::vector<std::string> followers) {
    // Print out the followers vector
    std::cout << "FOLLOWERS" << std::endl;
    for (const auto &followerValue: followers) {
        std::cout << followerValue << std::endl;
    }
}

void Display::displayFollowing(std::vector<std::string> following) {
    // Print out the following vector
    std::cout << "FOLLOWING" << std::endl;
    for (const auto &followingValue: following) {
        std::cout << followingValue << std::endl;
    }
}

void Display::displayPeopleWhoDontFollowBack(std::vector<std::string> result) {
    // Print out the result vector
    std::cout << "People I'm following but not followed by:\n";
    for (const auto &name: result) {
        std::cout << name << "\n";
    }
}
