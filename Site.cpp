#include "Site.h"


// Constructeur
Site::Site(const std::string& adressesInternet, const std::string& emailResponsable)
    : adressesInternet(adressesInternet), emailResponsable(emailResponsable)
{
}

// Destructeur
Site::~Site()
{
}

// Ajouter une adresse internet
void Site::ajouterAdresseInternet(const std::string& adresse)
{
    sitesInternet.push_back(adresse);
}

// Supprimer une adresse internet
void Site::supprimerAdresseInternet(const std::string& adresse)
{
    for (auto it = sitesInternet.begin(); it != sitesInternet.end(); ++it)
    {
        if (*it == adresse)
        {
            sitesInternet.erase(it);
            break;
        }
    }
}

// Getter pour l'adresse internet du site
const std::string& Site::getAdresseInternet() const
{
    return adressesInternet;
}

// Getter pour l'email du responsable du site
const std::string& Site::getEmailResponsable() const
{
    return emailResponsable;
}

// Getter pour la liste des adresses internet associées au site
const std::vector<std::string>& Site::getSitesInternet() const
{
    return sitesInternet;
}

// Setter pour l'adresse internet du site
void Site::setAdresseInternet(const std::string& adresse)
{
    adressesInternet = adresse;
}

// Setter pour l'email du responsable du site
void Site::setEmailResponsable(const std::string& email)
{
    emailResponsable = email;
}

// Setter pour la liste des adresses internet associées au site
void Site::setSitesInternet(const std::vector<std::string>& sites)
{
    sitesInternet = sites;
}
