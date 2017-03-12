#ifndef sound_h
#define sound_h
#include "resource.h"

class sound:public resource{
    int duration;
public:
    void setDuration(int x);
    int getDuration();
};


#endif /* sound_h */
