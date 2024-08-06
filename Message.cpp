#include "Message.h"
#include <iostream>

Message::Message(const string& titre, const string& texte, const Date& datePublication, const string& auteur)
    : titre(titre), texte(texte), datePublication(datePublication), auteur(auteur), messageParent(NULL) {}

Message::~Message() {}

string Message::getTitre() const {
    return titre;
}

string Message::getTexte() const {
    return texte;
}

Date Message::getPublicationDate() const {
    return datePublication;
}

Message* Message::getMessageParent() const {
    return messageParent;
}

string Message::getAuteur() const {
    return auteur;
}

vector<Message*>& Message::getReponses() {
    return reponses;
}

void Message::setParentMessage(Message* parent) {
    messageParent = parent;
}

void Message::ajouterReponse(Message* reponse) {
    reponses.push_back(reponse);
}

void Message::afficher() const {
    cout << "Titre: " << titre << endl;
    cout << "Texte: " << texte << endl;
    cout << "Date de publication: ";
    datePublication.printDate();
    if (messageParent != NULL) {
        cout << "En réponse à: " << messageParent->getTitre() << endl;
    }
    if (!reponses.empty()) {
        cout << "Réponses:" << endl;
        for (int i=0;i<reponses.size();i++) {
            cout << "--- " << reponses[i]->getTitre() << endl;
        }
    }
}
