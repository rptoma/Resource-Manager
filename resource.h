#ifndef resource_h
#define resource_h
#include <iostream>

class resource {
    std::string name;
    
public:
    virtual void setName(std::string s);
    virtual std::string getName();
};

#endif /* resource_h */
