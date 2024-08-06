#ifndef PROFIL_H
#define PROFIL_H
#include <string>
#include <vector>
#include "AuteurMessage.h"
using namespace std;
class Profil {
public:
    Profil(int numeroInscription, const string& nom, const string& prenom, const string& adresse,
           const string& dateNaissance, const string& courriel, const string& numeroTelephone);

    int getNumeroInscription() const;
    string getNom() const;
    string getPrenom() const;
    string getAdresse() const;
    string getDateNaissance() const;
    string getCourriel() const;
    string getNumeroTelephone() const;
    vector<AuteurMessage*>& getAuteursMessages();

    void ajouterAuteurMessage(AuteurMessage* auteurMessage);

private:
    int numeroInscription;
    string nom;
    string prenom;
    string adresse;
    string dateNaissance;
    string courriel;
    string numeroTelephone;
    vector<AuteurMessage*> auteursMessages;
};

#endif // PROFIL_H
