#include "AuteurMessage.h"


AuteurMessage::AuteurMessage(const string& pseudo, const string& datePremierMessage,
                             const string& dateDernierMessage, int nombreMessages)
    : pseudo(pseudo), datePremierMessage(datePremierMessage), dateDernierMessage(dateDernierMessage),
      nombreMessages(nombreMessages) {}

string AuteurMessage::getPseudo() const {
    return pseudo;
}

string AuteurMessage::getDatePremierMessage() const {
    return datePremierMessage;
}

string AuteurMessage::getDateDernierMessage() const {
    return dateDernierMessage;
}

int AuteurMessage::getNombreMessages() const {
    return nombreMessages;
}

vector<Message*>& AuteurMessage::getMessages() {
    return messages;
}

void AuteurMessage::ajouterMessage(Message* message) {
    messages.push_back(message);
}
bool AuteurMessage::peutPublier() const {
    return true;
}

string AuteurMessage::getNom() const {
    return pseudo;
}
