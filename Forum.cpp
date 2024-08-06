#include "Forum.h"

#include<iostream>
Forum::Forum(const std::string& adresseInternet, const std::string& emailResponsable)
    : adresseInternet(adresseInternet), emailResponsable(emailResponsable)
{
}


Forum::~Forum()
{
}


const std::string& Forum::getAdresseInternet() const
{
    return adresseInternet;
}


const std::string& Forum::getEmailResponsable() const
{
    return emailResponsable;
}


const std::vector<Rubrique>& Forum::getRubriques() const
{
    return rubriques;
}


void Forum::setAdresseInternet(const std::string& adresseInternet)
{
    this->adresseInternet = adresseInternet;
}


void Forum::setEmailResponsable(const std::string& emailResponsable)
{
    this->emailResponsable = emailResponsable;
}


void Forum::ajouterRubrique(const Rubrique& rubrique)
{
    rubriques.push_back(rubrique);
}


void Forum::supprimerRubrique(const std::string& themeRubrique)
{
    for (auto it = rubriques.begin(); it != rubriques.end(); ++it)
    {
        if (it->getTheme() == themeRubrique)
        {
            rubriques.erase(it);
            break;
        }
    }
}

void Forum::afficherRubriques() const
{
    std::cout << "Rubriques du forum :" << std::endl;
    for (const auto& rubrique : rubriques)
    {
        std::cout << "- " << rubrique.getTheme() << std::endl;
    }
}
void Forum::listerReponsesMessage(Message* message) {
    for (unsigned i = 0; i < rubriques.size(); i++) {
        const std::vector<Message*>& messages = rubriques[i].getMessages();
        for (unsigned j = 0; j < messages.size(); j++) {
            const Message* m = messages[j];
            if (m->getMessageParent() == message) {
                std::cout << "Réponse à \"" << m->getTitre() << "\": " << m->getTexte() << std::endl;
            }
        }
    }
}
 void Forum:: afficherMessagesRubrique(const Rubrique& rubrique) {
        rubrique.afficherMessages();
    }
void Forum:: afficherMessagesChronologiqueRubrique(const Rubrique& rubrique) {
        rubrique.afficherMessagesChronologique();
    }
std::vector<Message*> Forum:: rechercherMessagesAuteur(const std::string& pseudoAuteur) {
    std::vector<Message*> messagesAuteur;
    for (size_t i = 0; i < rubriques.size(); i++) {
        const std::vector<Message*>& messagesRubrique = rubriques[i].rechercherMessagesAuteur(pseudoAuteur);
        messagesAuteur.insert(messagesAuteur.end(), messagesRubrique.begin(), messagesRubrique.end());
    }
    return messagesAuteur;
}

std::vector<Profil*> Forum:: rechercherProfilsRubrique(const Rubrique& rubrique) {
    return rubrique.rechercherProfilsRubrique();
}

void Forum:: afficherMessagesDuJour(const Date& date) {
    for (size_t i = 0; i < rubriques.size(); i++) {
        const std::vector<Message*> messagesJour = rubriques[i].rechercherMessagesDate(Date);
        for (size_t j = 0; j < messagesJour.size(); j++) {
            const Message* message = messagesJour[j];
            std::cout << message->getTitre() << ": " << message->getTexte() << std::endl;
        }
    }
}

