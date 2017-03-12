#include "tree.h"
#include "sound.h"
#include "resource.h"
#include "resourceManager.h"

void tree::setIdImagine(std::string id) {
    id_imagine = id;
}

std::string tree::getIdImagine() {
    return id_imagine;
}

void tree::setIdSunet(std::string id) {
    id_sunet = id;
}

std::string tree::getIdSunet() {
    return id_sunet;
}

void tree::setNrFrunze(int x) {
    nr_frunze = x;
}

int tree::getNrFrunze() {
    return nr_frunze;
}

image* tree::getImg() {
    image* x;
    x = dynamic_cast<image*>(resourceManager::instance()->getResource(this->getIdImagine()));
    return x;
}

sound* tree::getSnd() {
    sound* x;
    x = dynamic_cast<sound*>(resourceManager::instance()->getResource(this->getIdSunet()));
    return x;
}
