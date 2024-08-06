#ifndef FORUM_H
#define FORUM_H

#include<algorithm>
#include <string>
#include <vector>
#include"Profil.h"
#include "Rubrique.h"
#include"Message.h"
#include<iostream>
using namespace std;
class Forum {
public:
    Forum(const std::string& adresseInternet, const std::string& emailResponsable);
    ~Forum();

    const std::string& getAdresseInternet() const;
    const std::string& getEmailResponsable() const;
    const std::vector<Rubrique>& getRubriques() const;

    void setAdresseInternet(const std::string& adresseInternet);
    void setEmailResponsable(const std::string& emailResponsable);

    void ajouterRubrique(const Rubrique& rubrique);
    void supprimerRubrique(const std::string& themeRubrique);
    void afficherRubriques() const;
    void listerReponsesMessage(Message* message);
    void afficherMessagesRubrique(const Rubrique& rubrique);
    void afficherMessagesChronologiqueRubrique(const Rubrique& rubrique);
    std::vector<Message*> rechercherMessagesAuteur(const std::string& pseudoAuteur);
    std::vector<Profil*> rechercherProfilsRubrique(const Rubrique& rubrique);
    void afficherMessagesDuJour(const Date& date);

private:
    std::string adresseInternet;
    std::string emailResponsable;
    std::vector<Rubrique> rubriques;
};

#endif // FORUM_H
