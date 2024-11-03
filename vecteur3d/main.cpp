#include <iostream>
#include<cmath>
using namespace std;

class vecteur3d{
protected:
    float x,y,z;
public:
    //constructeur par defaut
    vecteur3d(float x=0,float y=0,float z=0):x(x),y(y),z(z){}
    // fonction d’affichage
    void afficher() const{
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    }
    // fonction permettant d’obtenir la somme de 2 vecteurs

    vecteur3d somme (const vecteur3d& v){
    return vecteur3d(x+v.x,y+v.y,z+v.z);
    }

    //  fonction permettant d’obtenir le produit scalaire de 2 vecteurs.
    //le type de retour est float (on a pas de vecteur a la fin)
    float produit(const vecteur3d& v){
    return x*v.x+y*v.y+z*v.z;
    }

    // fonction coincide
    bool coincide(const vecteur3d& v){
    return x==v.x&& y==v.y && z==v.z;
    }

    // fonction qui renvoie la norme du vecteur

    //le type de retour est float car c une racine
    float norme()const{
    return sqrt(x*x+y*y+z*z);

    }
    //fonction nommée normax
    //par valeur
    const vecteur3d normauxV(const vecteur3d& v){
    return (this->norme()>= v.norme())? *this:v;

    }

    //par adresse
    const vecteur3d* normauxA(const vecteur3d* v){
    return (this->norme() >= v->norme()) ? this : v;
    }
    //par reference

    const vecteur3d& normauxR(const vecteur3d& v){
     return (this->norme() >= v.norme()) ? *this : v;
    }
};

int main(){
vecteur3d v1(4,5,2);
vecteur3d v2(1,2,4);

cout<<"vecteur v1 : ";
v1.afficher();
cout<<"vecteur v2 : ";
v2.afficher();

 vecteur3d somme = v1.somme(v2);
    cout << "Somme de v1 et v2 : ";
    somme.afficher();

float produit = v1.produit(v2);
    cout << "Produit scalaire de v1 et v2 : " << produit << endl;

    bool coincide = v1.coincide(v2);
    cout << "v1 et v2 ont les memes composantes : " << (coincide ? "Oui" : "Non") << endl;

    cout << "Norme de v1 : " << v1.norme() << endl;
    cout << "Norme de v2 : " << v2.norme() << endl;

    // Normaux par valeur
    vecteur3d maxParValeur = v1.normauxV(v2);
    std::cout << "Vecteur avec la plus grande norme (par valeur) : ";
    maxParValeur.afficher();

    // Normaux par adresse
    const vecteur3d* maxParAdresse = v1.normauxA(&v2);
    cout << "Vecteur avec la plus grande norme (par adresse) : ";
    maxParAdresse->afficher();

    // Normaux par référence
    const vecteur3d& maxParReference = v1.normauxR(v2);
    cout << "Vecteur avec la plus grande norme (par reference) : ";
    maxParReference.afficher();

    return 0;





}











