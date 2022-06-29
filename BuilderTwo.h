#ifndef UNTITLED2_BUILDERTWO_H
#define UNTITLED2_BUILDERTWO_H

#include "Foundation.h"
#include "Floor.h"
#include "Roof.h"
#include "House.h"

using namespace std;

class BuilderTwo {
private:
    Foundation* _foundation;

    vector<Floor*> _floors;

    Roof* _roof;

public:

    void UseFoundation(const string &material, double width, double length) {
        _foundation = new Foundation(material, width, length);
    }

    void UseRoof(const string &material, double width, double length, double height) {
        _roof = new Roof(material, width, length, height);
    }

    void UseFloors(const string &material, int numberOfWindows, int number_of_floors) {
        for (int i = 0; i < number_of_floors; ++i) {
            _floors.push_back(new Floor(material, numberOfWindows));
        }
    }

    House* Build() {
        return new House(_foundation, _floors, _roof);
    }

};

#endif //UNTITLED2_BUILDERTWO_H
