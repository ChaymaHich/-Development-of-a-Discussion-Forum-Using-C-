#include "Rubrique.h"


Rubrique::Rubrique(const string& theme, const Date& dateCreation, const string& animateur)
    : theme(theme), dateCreation(dateCreation), animateur(animateur) {}

Rubrique::~Rubrique() {
    for (unsigned int i=0;i<messages.size();i++) {
        delete messages[i];
    }
}
string Rubrique::getTheme() const {
    return theme;
}

Date Rubrique::getDateCreation() const {
    return dateCreation;
}

string Rubrique::getAnimateur() const {
    return animateur;
}

vector<Message*>& Rubrique::getMessages() {
    return messages;
}

vector<string>& Rubrique::getSitesInternet() {
    return sitesInternet;
}

void Rubrique::ajouterMessage(Message* message) {
    messages.push_back(message);
}

void Rubrique::ajouterSiteInternet(const string& site) {
    sitesInternet.push_back(site);
}

void Rubrique::afficherMessages() const {
    for (unsigned int i=0;i<messages.size();i++) {
        messages[i]->afficher();
    }
}

void Rubrique::afficherMessagesChronologique() const {
    std::vector<Message*> messagesTri;

    // Copier tous les pointeurs de messages dans le vecteur trié
    for (unsigned int i=0;i<messages.size();i++) {
        messagesTri.push_back(messages[i]);
    }

    // Effectuer le tri manuel en comparant les dates de publication
    for ( unsigned int i = 0; i < messagesTri.size() - 1; ++i) {
        for (unsigned int j = i + 1; j < messagesTri.size(); ++j) {
            if (messagesTri[j]->getPublicationDate() < messagesTri[i]->getPublicationDate()) {
                std::swap(messagesTri[i], messagesTri[j]);
            }
        }
    }

    // Afficher les messages triés
    for (unsigned int i=0; i<messagesTri.size();i++) {
        messagesTri[i]->afficher();  // Remplacez par l'appel à votre fonction d'affichage appropriée
    }
}

vector<Message*> Rubrique::rechercherMessagesAuteur(const string& auteur) const {
    vector<Message*> messagesAuteur;
    for (unsigned int i=0;i<messages.size();i++) {
        if (messages[i]->getAuteur() == auteur) {
            messagesAuteur.push_back(messages[i]);
        }
    }
    return messagesAuteur;
}

vector<Message*> Rubrique::rechercherMessagesDuJour(const Date& date) const {
    vector<Message*> messagesDuJour;
    for (unsigned int i=0;i<messages.size();i++) {
        if (messages[i]->getPublicationDate() == date) {
            messagesDuJour.push_back(messages[i]);
        }
    }
    return messagesDuJour;
}

vector<string> Rubrique::rechercherAuteursMessages() const {
    vector<string> auteurs;
    for (unsigned int i=0;i<messages.size();i++) {
        string auteur = messages[i]->getAuteur();
        if (find(auteurs.begin(), auteurs.end(), auteur) == auteurs.end()) {
            auteurs.push_back(auteurs[i]);
        }
    }
    return auteurs;
}
