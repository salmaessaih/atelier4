#include <iostream>
using namespace std;

class Test{
private:
    //variable statique pour compter les appels
    static int compteur;

public:
    //methode statique qui incremente le compteur
    static void call(){
    compteur++;
    }
    //on utilise get pour acceder a compteur(prive)
    //la methode est pour obtenir le nbre d appels
    static int getCompteur(){
    return compteur;

    }

};
int Test::compteur=0;
int main(){

// Appel de la méthode call de la classe Test
    Test::call();
    Test::call();
    Test::call();
    Test::call();
    Test::call();

    cout << "La fonction call a ete appelee " << Test::getCompteur() << " fois." <<endl;
}



