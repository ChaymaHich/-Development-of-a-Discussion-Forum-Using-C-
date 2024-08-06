#include "Documentation.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;
Documentation::Documentation()
{
    //ctor
}
Documentation::Documentation(const string& adresse_internet, const string& id_Rubrique):adresse_internet(adresse_internet),id_Rubrique(id_Rubrique){}
Documentation::~Documentation()
{
    //dtor
}

string Documentation::getAdresseInternet() const{return adresse_internet;}
string Documentation::getIdRubrique() const{return id_Rubrique;}
void Documentation::afficherIdRubrique() const {
    cout << "ID de la rubrique : " << id_Rubrique << endl;
  }
void Documentation::setAdresseInternet(const string& adresseInternet){}
void Documentation::setIdRubrique(const string& id_Rubrique){}
ostream& operator<<(ostream& os, const Documentation& doc) {
    os << "Adresse internet : " << doc.getAdresseInternet() << endl;
    os << "ID de la rubrique : " << doc.getIdRubrique() << endl;
    return os;}
void Documentation::afficherAdresseInternet() const {
    cout << "adresse_internet : " << adresse_internet << endl;
  }
istream& operator>>(istream& is, Documentation& doc) {
    string adresse_internet;
    string id_Rubrique;

    cout << "Adresse internet : ";
    is >> adresse_internet;

    cout << "ID de la rubrique : ";
    is >> id_Rubrique;

    doc.setAdresseInternet(adresse_internet);
    doc.setIdRubrique(id_Rubrique);

    return is;
}
