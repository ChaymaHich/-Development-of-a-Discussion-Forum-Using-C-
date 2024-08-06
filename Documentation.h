#ifndef DOCUMENTATION_H
#define DOCUMENTATION_H
#include <string>

class Documentation {
private:
    std::string adresse_internet;
    std::string id_Rubrique;

public:
    Documentation();
    Documentation(const std::string& adresse_internet, const std::string& id_Rubrique);
    virtual ~Documentation();
    std::string getAdresseInternet() const;
    std::string getIdRubrique() const;
    void afficherIdRubrique() const;
    void afficherAdresseInternet() const;
    void setAdresseInternet(const std::string& adresse_internet);
    void setIdRubrique(const std::string& id_Rubrique);
};

#endif // DOCUMENTATION_H
