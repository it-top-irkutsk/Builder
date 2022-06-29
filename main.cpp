#include <iostream>

#include "House.h"
#include "BuilderOne.h"
#include "BuilderTwo.h"

using namespace std;

int main() {

    BuilderOne* builderOne = new BuilderOne(5);
    House* house1 = builderOne->Build();

    BuilderTwo* builderTwo = new BuilderTwo;
    House* house2;
    builderTwo->UseFoundation("s", 10, 10);
    builderTwo->UseFloors("f", 5, 10);
    builderTwo->UseRoof("d", 10, 10, 10);
    house2 = builderTwo->Build();

    return 0;
}
