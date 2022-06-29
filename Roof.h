#ifndef UNTITLED2_ROOF_H
#define UNTITLED2_ROOF_H

#include <string>

using namespace std;

class Roof {
public:
    string material;
    double width;
    double length;
    double height;

    Roof(const string &material, double width, double length, double height) : material(material), width(width),
                                                                               length(length), height(height) {}
};


#endif //UNTITLED2_ROOF_H
