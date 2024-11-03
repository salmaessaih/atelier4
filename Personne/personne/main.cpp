#include<iostream>
#include<string>
using namespace std;

class personne{
protected:

    string nom;
    string prenom;
    string date;

public:

//constructeur
personne(string n,string p,string d): nom(n),prenom(p),date(d){}

//fct virtuelle
virtual void afficher(){
cout<<"nom: "<<nom<<endl<<"prenom :"<<prenom<<endl<<"date de naissance :"<<date<<endl;
}
};

//classe derivee employe
class employe : public personne{

protected :
    float salaire;
public:
    //constructeur
    employe(string n,string p,string d,float s):personne(n,p,d),salaire (s){}
    //redefinition de la methode afficher
    void afficher() override{
    personne::afficher();
    cout<<"salaire :"<<salaire<<endl;

    //ou on paut faire la redefinition par
    //void afficher(){
    //cout<<"nom: "<<endl<<nom<<"prenom :"<<prenom<<endl<<"date de naissance :"<<date<<endl<<"salaire"<<salaire<<endl;
    //}
    }

};

class chef : public employe{
protected:
    string service;

public:
    //constructeur
    chef(string n, string p, string d, float s, string serv) : employe(n, p, d, s), service(serv) {}
//redefinition de la methode afficher
void afficher() override{
    employe::afficher();
    cout<<"service : "<<service<<endl;
  //ou on peut faire la redefinition par
    //void afficher(){
   // cout<<"nom: "<<nom<<endl<<"prenom :"<<prenom<<endl<<"date de naissance :"<<date<<endl<<"salaire : "<<salaire<<endl<<"service : "<<service<<endl;
   // }
}
};

class directeur : public chef {
private:
    string societe;

public:
    // Constructeur pour
    directeur(string n, string p, string d, float s, string serv, string soc) : chef(n, p, d, s, serv), societe(soc) {}

    // redefinition de la méthode Afficher
    void afficher() override {
        chef::afficher();
        cout << "Societe: " << societe << endl;
    }
    //ou on peut faire la redefinition par
    //void afficher(){
   // cout<<"nom: "<<nom<<endl<<"prenom :"<<prenom<<endl<<"date de naissance :"<<date<<endl<<"salaire : "<<salaire<<endl<<"service : "<<service<<"societe: "<<societe<<endl;
   // }
};

int main(){
//creation d objet
personne p("jackson","alex","19/02/1991");
employe e("mendes","robert","09/04/1989",6500);
chef c("horan","nick","23/11/1998",6000,"dev");
directeur d("azaad","dua","25/08/1992",7600.89,"RH","abc");

//affichage
cout<<"personne"<<endl;
p.afficher();
cout << "\n employe:" << endl;
e.afficher();
cout << "\n chef:" << endl;
c.afficher();
cout << "\n directeur:" << endl;
d.afficher();

return 0;


}

