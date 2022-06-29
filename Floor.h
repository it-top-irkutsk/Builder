#ifndef UNTITLED2_FLOOR_H
#define UNTITLED2_FLOOR_H

#include <string>

using namespace std;

class Floor {
public:
    string material;
    int number_of_windows;

    Floor(const string &material, int numberOfWindows) : material(material), number_of_windows(numberOfWindows) {}
};


#endif //UNTITLED2_FLOOR_H
