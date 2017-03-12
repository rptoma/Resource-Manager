#include "resource.h"
#include <iostream>

void resource::setName(std::string s) {
    name = s;
}

std::string resource::getName() {
    return name;
}
