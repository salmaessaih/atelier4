#include <iostream>
#include<string>
using namespace std;

class dateHeure{
private:
    string jour;
    string mois;
    string annee;
    string heure;
    string minute;
    public:
    //constructeur jjmmaaaahhnn
    dateHeure(const string& chaine){
    jour = chaine.substr(0,2);// extrait les 2 premiers caracteres
    mois = chaine.substr(2,2);// extrait les 2 caracteres suivante
    annee = chaine.substr(4,4);//extrait les 4 suivants
    heure = chaine.substr(8, 2);//les 2 suivants
    minute = chaine.substr(10, 2);//les 2 derniers
    }
    //methode pour afficher la date et l heure
    void afficher()const{
    cout<<"date :"<< jour<<"/"<<mois<<"/"<<annee<<endl;
    cout << "Heure : " << heure << "h" << minute << endl;

    }
};


int main()
{
  string chaine = "290520020900" ;

  dateHeure dateHeure(chaine);

  dateHeure.afficher();

    return 0;
}
