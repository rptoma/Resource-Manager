#ifndef resourceManager_h
#define resourceManager_h

#include <map>

#include "resource.h"

class resourceManager{
private:
    std::map<std::string, resource*> resourcesMap;
    static resourceManager* s;
    
private:
    resourceManager();
    ~resourceManager();
    resourceManager(const resourceManager& x);
    void operator=(const resourceManager& x);
public:
    static resourceManager* instance(){
        return s;
    }
    void addResource(std::string a, resource* b);
    resource* getResource(std::string a);
};

#endif /* eventManager_h */
