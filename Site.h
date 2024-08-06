#ifndef SITE_H
#define SITE_H
#include <string>
#include <vector>
#include<algorithm>

class Site {
private:
    std::string adressesInternet;
    std::vector<std::string> sitesInternet;
    std::string emailResponsable;

public:
    Site(const std::string& adressesInternet, const std::string& emailResponsable);
    virtual ~Site();

    void ajouterAdresseInternet(const std::string& siteInternet);
    void supprimerAdresseInternet(const std::string& siteInternet);

    const std::string& getAdresseInternet() const;
    const std::string& getEmailResponsable() const;
    const std::vector<std::string>& getSitesInternet() const;

    void setAdresseInternet(const std::string& adressesInternet);
    void setEmailResponsable(const std::string& emailResponsable);
    void setSitesInternet(const std::vector<std::string>& sitesInternet);
};

#endif // SITE_H
