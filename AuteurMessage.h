#ifndef AUTEURMESSAGE_H
#define AUTEURMESSAGE_H

#include <string>
#include <vector>
#include "Message.h"
using namespace std;

class AuteurMessage {
public:
    AuteurMessage(const string& pseudo, const string& datePremierMessage, const string& dateDernierMessage,
                  int nombreMessages);

    string getPseudo() const;
    string getDatePremierMessage() const;
   string getDateDernierMessage() const;
    int getNombreMessages() const;
    vector<Message*>& getMessages();

    void ajouterMessage(Message* message);
    bool peutPublier() const ;
    string getNom() const;
private:
    string pseudo;
    string datePremierMessage;
    string dateDernierMessage;
    int nombreMessages;
    vector<Message*> messages;


};

#endif // AUTEURMESSAGE_H
