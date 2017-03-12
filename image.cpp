#include "image.h"
#include <iostream>

void image::setRes(int w, int h) {
    this->h = h;
    this->w = w;
}

int image::getH() {
    return h;
}

int image::getW() {
    return w;
}
