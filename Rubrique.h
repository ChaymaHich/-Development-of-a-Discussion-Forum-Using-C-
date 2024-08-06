#ifndef RUBRIQUE_H
#define RUBRIQUE_H
#include <string>
#include <vector>
#include "Message.h"
#include<algorithm>
using namespace std;
class Rubrique {
public:
    Rubrique(const string& theme, const Date& dateCreation, const string& animateur);
    ~Rubrique();

    string getTheme() const;
    Date getDateCreation() const;
    string getAnimateur() const;
    vector<Message*>& getMessages();
    vector<string>& getSitesInternet();

    void ajouterMessage(Message* message);
    void ajouterSiteInternet(const string& site);
    void afficherMessages() const;

    void afficherMessagesChronologique() const;
    vector<Message*> rechercherMessagesAuteur(const string& auteur) const;
    vector<Message*> rechercherMessagesDuJour(const Date& date) const;
    vector<string> rechercherAuteursMessages() const;


private:
    string theme;
    Date dateCreation;
    string animateur;
    vector<Message*> messages;
    vector<string> sitesInternet;
};

#endif // RUBRIQUE_H
