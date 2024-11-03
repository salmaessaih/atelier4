#include <iostream>
#include<string>
using namespace std;
//classe de base(mere)
class animal{
protected:
    string nom;
    int age;
public:
    void set_value(string n,int a)
    {
        nom=n;
        age=a;
    }
};

//classe derivee(fille) zebra
class zebra:public animal{
public:
    void afficher(){
    cout<<"zebre:"<<nom<<" ,age:"<<age<<endl;
    cout<<"les informations supplementaires sur l origine de zebre :  le continent americain";
    }

};
//classe derivee(fille) dolphin
class dolphin:public animal{
public:
    void afficher(){
    cout<<"dauphin:"<<nom<<" ,age:"<<age<<endl;
    cout<<"les informations supplementaires sur l origine du dauphin :  le continent americain";
    }

};

int main(){

zebra z;
dolphin d;

//definition des valeurs
z.set_value("ricky",4);
d.set_value("mike",8);

//affichage des informations

z.afficher();
cout<<endl;
d.afficher();

}











