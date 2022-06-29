#ifndef UNTITLED2_BUILDERONE_H
#define UNTITLED2_BUILDERONE_H

#include "Foundation.h"
#include "Floor.h"
#include "Roof.h"
#include "House.h"

using namespace std;

class BuilderOne {
public:
    int number_of_floors;

    BuilderOne(int numberOfFloors) : number_of_floors(numberOfFloors) {}

    House* Build() {
        auto foundation = new Foundation("wood", 5, 6);
        auto roof = new Roof("iron", 5, 6, 1.5);

        vector<Floor*> floors;
        for (int i = 0; i < number_of_floors; ++i) {
            floors.push_back(new Floor("wood", 5));
        }

        return new House(foundation, floors, roof);
    }
};


#endif //UNTITLED2_BUILDERONE_H
