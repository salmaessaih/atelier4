#include <iostream>
#include <cstring> // pour memset

using namespace std;

class fichier{

private:
    char*p; //ptr pour stocker le contenu du fichier en memoire
    size_t longueur; // taille en octets

public:
    //constructeur
    fichier (size_t taille=0):p(nullptr), longueur(taille){
        creation(taille);
    }

    //methode creation
    void creation(size_t taille){

    longueur=taille;
    p=new char[taille];//alloue un espase dependante

    }
    //methode remplit
    void remplit (){
        if (p != nullptr) {
            memset(p, 'A', longueur); // Remplit l'espace avec le caract�re 'A'
            cout << "Espace memoire rempli avec 'A'." << endl;
        }
    }

    //methode afficher

    void affiche() const {
        if (p != nullptr) {
            for (size_t i = 0; i < longueur; ++i) {
                cout << p[i];
            }
            cout << endl;
        }
    }
    //destructeur
    ~fichier() {
        delete[] p; // Lib�ration de l'espace m�moire
        cout << "Espace memoire libere." << endl;
    }



};


int main() {
    // Cr�ation dynamique de l'objet Fichier
    fichier* fich = new fichier(10);

    // Appel des m�thodes
    fich->remplit();
    cout << "Contenu du fichier : ";
    fich->affiche();

    // Lib�ration de l'objet Fichier
    delete fich; // Appelle automatiquement le destructeur

    return 0;
}


