#ifndef UNTITLED2_HOUSE_H
#define UNTITLED2_HOUSE_H

#include "Foundation.h"
#include "Floor.h"
#include "Roof.h"

#include <vector>

using namespace std;

class House {
public:
    Foundation* foundation;
    vector<Floor*> floors;
    Roof* roof;

    House(Foundation *foundation, const vector<Floor *> &floors, Roof *roof) : foundation(foundation), floors(floors),
                                                                               roof(roof) {}
};

#endif //UNTITLED2_HOUSE_H
