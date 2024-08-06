#ifndef MESSAGE_H
#define MESSAGE_H

using namespace std;

#include <string>
#include <vector>
#include "Date.h"

class Message {
public:
    Message(const string& titre, const string& texte, const Date& datePublication, const string& auteur);
    ~Message();

    string getTitre() const;
    string getTexte() const;
    Date getPublicationDate() const;
    Message* getMessageParent() const;
    string getAuteur() const;
    vector<Message*>& getReponses();

    void setParentMessage(Message* parent);
    void ajouterReponse(Message* reponse);
    void afficher() const;

private:
    string titre;
    string texte;
    Date datePublication;
    string auteur;
    Message* messageParent;
    vector<Message*> reponses;
};
#endif // MESSAGE_H
