#include <iostream>
#include "resourceManager.h"
#include "resource.h"
#include "image.h"
#include "tree.h"
#include "sound.h"

int main() {
    tree t1, t2, t3;
    t1.setNrFrunze(1);
    t2.setNrFrunze(2);
    t3.setNrFrunze(3);
    
    image img_stejar;
    img_stejar.setName("stejar.png");
    img_stejar.setRes(200, 500);
    
    image img_brad;
    img_brad.setName("brad.png");
    img_brad.setRes(150, 700);
    
    resourceManager::instance()->addResource("img_stejar", &img_stejar);
    resourceManager::instance()->addResource("img_brad", &img_brad);
    
    sound snd_stejar;
    snd_stejar.setName("sunt_un_STEJAR_vorbitor.wav");
    snd_stejar.setDuration(8);
    
    sound snd_brad;
    snd_brad.setName("sunt_un_BRAD_vorbitor.wav");
    snd_brad.setDuration(24);
    
    resourceManager::instance()->addResource("snd_stejar", &snd_stejar);
    resourceManager::instance()->addResource("snd_brad", &snd_brad);
    
    t1.setIdImagine("img_stejar");
    t1.setIdSunet("snd_stejar");
    t2.setIdImagine("img_brad");
    t2.setIdSunet("snd_brad");
    t3.setIdImagine("img_stejar");
    t3.setIdSunet("snd_stejar");
    
    std::cout << "Tree 1: ";
    std::cout << t1.getImg()->getName()
    << " cu rezolutia: " << t1.getImg()->getW() << "x"
    << t1.getImg()->getH() << " (adr. " << t1.getImg() << ")  |  "
    << t1.getSnd()->getName() << " (adr. " << t1.getSnd() << ")"
    << " cu durata: " << t1.getSnd()->getDuration() << "s\n";
    std::cout << "Tree 2: ";
    std::cout << t2.getImg()->getName()
    << " cu rezolutia: " << t2.getImg()->getW() << "x"
    << t2.getImg()->getH() << " (adr. " << t2.getImg() << ")    |  "
    << t2.getSnd()->getName() << " (adr. " << t2.getSnd() << ")"
    << " cu durata: " << t2.getSnd()->getDuration() << "s\n";
    ;
    std::cout << "Tree 3: ";
    std::cout << t3.getImg()->getName()
    << " cu rezolutia: " << t3.getImg()->getW() << "x"
    << t3.getImg()->getH() << " (adr. " << t3.getImg() << ")  |  "
    << t3.getSnd()->getName() << " (adr. " << t3.getSnd() << ")"
    << " cu durata: " << t3.getSnd()->getDuration() << "s\n";
    
    return 0;
}
