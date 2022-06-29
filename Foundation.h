#ifndef UNTITLED2_FOUNDATION_H
#define UNTITLED2_FOUNDATION_H

#include <string>

using namespace std;

class Foundation {
public:
    string material;
    double width;
    double length;

    Foundation(const string &material, double width, double length) : material(material), width(width),
                                                                      length(length) {}
};


#endif //UNTITLED2_FOUNDATION_H
