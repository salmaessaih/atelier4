#include <iostream>
using namespace std;
class complexe{
private:
    float rel;
    float img;
public:
//constructeur par defaut
    complexe():rel(0),img(0){}
    //constructeur avec parametres
    complexe(float rel_,float img_):rel(rel_),img(img_){}

    void afficher() const {
        cout << rel << " + " << img << "i" << endl;
    }
    //egalite
    bool operator==(const complexe& nv)
    {
        return (rel == nv.rel && img == nv.img);

    }

    //addition
    complexe operator+(const complexe& nv)
    {
        return complexe(rel + nv.rel,img + nv.img);
    }
    //soustraction
    complexe operator-(const complexe& nv)
    {
        return complexe(rel - nv.rel,img - nv.img);
    }
    //multiplication

    complexe operator*(const complexe& nv)
    {
        float rel_=rel*nv.rel - img*nv.img;//partie reelle avec i*i=-1
        float img_=rel*nv.img + img*nv.rel;//partie imaginaire

        return complexe(rel_,img_);
    }

    //division

    complexe operator/(const complexe& nv)
    {
        float denominateur = nv.rel * nv.rel + nv.img * nv.img; //On multiplie le numérateur et le dénominateur par le conjugué

        float rel_ = (rel * nv.rel + img * nv.img) / denominateur;//partie reelle avec i*i=-1
        float img_ = (rel * nv.rel - img * nv.img) / denominateur;//partie imaginaire
        return complexe(rel_, img_);
    }

};



int main(){
    float rel1,rel2,img1,img2;
    int choix;

    cout << "Entrez la partie reelle du premier nombre complexe: ";
    cin >> rel1;
    cout << "Entrez la partie imaginaire du premier nombre complexe: ";
    cin >> img1;

    cout << "Entrez la partie reelle du deuxieme nombre complexe: ";
    cin >> rel2;
    cout << "Entrez la partie imaginaire du deuxieme nombre complexe: ";
    cin >> img2;

    complexe c1(rel1, img1);
    complexe c2(rel2, img2);
    complexe resultat;

    cout << "\n Choisissez une operation:\n";
    cout << "1. Addition\n";
    cout << "2. Soustraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. egalite\n";
    cout << "Votre choix: ";
    cin >> choix;


    //menu
    switch (choix) {
        case 1:
            resultat = c1 + c2;
            cout << "Résultat de l'addition: ";
            resultat.afficher();
            break;
        case 2:
            resultat = c1 - c2;
            cout << "Résultat de la soustraction: ";
            resultat.afficher();
            break;
        case 3:
            resultat = c1 * c2;
            cout << "Résultat de la multiplication: ";
            resultat.afficher();
            break;
        case 4:
            if (rel2 == 0 && img2 == 0) {
                cout << "Erreur : Division par zéro!" << endl;
            } else {
                resultat = c1 / c2;
                cout << "Résultat de la division: ";
                resultat.afficher();
            }
            break;
        case 5:
            if (c1 == c2) {
                cout << "Les deux nombres complexes sont égaux." << endl;
            } else {
                cout << "Les deux nombres complexes sont différents." << endl;
            }
            break;
        default:
            cout << "Choix invalide!" << endl;
            break;
    }

    return 0;

}













