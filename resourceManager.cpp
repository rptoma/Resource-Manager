#include "resourceManager.h"
#include "resource.h"

#include <iostream>
#include <map>

resourceManager::resourceManager() {}

resourceManager::~resourceManager() {
    delete s;
}

resourceManager* resourceManager::s(new resourceManager);

void resourceManager::addResource(std::string a, resource* b) {
    resourcesMap[a] = b;
}

resource* resourceManager::getResource(std::string a) {
    return resourcesMap[a];
}
