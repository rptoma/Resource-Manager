#ifndef image_h
#define image_h
#include "resource.h"
#include <iostream>

class image:public resource{
    int h,w;
public:
    void setRes(int w, int h);
    int getH();
    int getW();
};

#endif /* image_h */
