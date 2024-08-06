#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include <string>
using namespace std ;
class Utilisateur {
protected:
    bool peutPublier;
public:
    Utilisateur();
    virtual ~Utilisateur() {}
    void setPeutPublier(bool peutPublier);
};


#endif // UTILISATEUR_H
