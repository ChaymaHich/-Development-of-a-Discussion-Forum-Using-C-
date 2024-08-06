#include "Profil.h"


Profil::Profil(int numeroInscription, const string& nom, const string& prenom, const string& adresse,
               const string& dateNaissance, const string& courriel, const string& numeroTelephone)
    : numeroInscription(numeroInscription), nom(nom), prenom(prenom), adresse(adresse), dateNaissance(dateNaissance),
      courriel(courriel), numeroTelephone(numeroTelephone) {}

int Profil::getNumeroInscription() const {
    return numeroInscription;
}

string Profil::getNom() const {
    return nom;
}

string Profil::getPrenom() const {
    return prenom;
}

string Profil::getAdresse() const {
    return adresse;
}

string Profil::getDateNaissance() const {
    return dateNaissance;
}

string Profil::getCourriel() const {
    return courriel;
}

string Profil::getNumeroTelephone() const {
    return numeroTelephone;
}

vector<AuteurMessage*>& Profil::getAuteursMessages() {
    return auteursMessages;
}

void Profil::ajouterAuteurMessage(AuteurMessage* auteurMessage) {
    auteursMessages.push_back(auteurMessage);
}

