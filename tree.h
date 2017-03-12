#ifndef tree_h
#define tree_h
#include "image.h"
#include "sound.h"
#include "resource.h"
class tree {
    std::string id_imagine, id_sunet;
    int nr_frunze;
    
public:
    void setIdImagine(std::string);
    void setIdSunet(std::string);
    std::string getIdImagine();
    std::string getIdSunet();
    
    void setNrFrunze(int x);
    int getNrFrunze();
    
    image* getImg();
    sound* getSnd();
};

#endif /* tree_h */
