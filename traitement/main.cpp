#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>
using namespace std;

class traitement{
private:
    vector<int> valeur;
public:
    //methode initialise
    void initialise(){

    int n;
    int count =0;

    cout << "Veuillez saisir 15 entiers pairs non nuls:" << endl;

    while(count<15){
        cout<<"entrez un nombre pair non nul"<<endl;
        cin>>n;

        //verification des entiers saisies
        if(cin.fail()|| n%2!=0||n==0){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Erreur: entrez un entier pair non nul." << endl;

        }else{
            valeur.push_back(n);//pour remplir le vect
            count++;

        }
    }

 }
    //methode show
    void show(int index=0)const{

     if (index < valeur.size()) {
            cout << valeur[index] << " ";
            show(index + 1);
        }


    }

    // Methode amie pour calculer la moyenne des éléments du vecteur
    friend double moyenne(const traitement& t);

    // Methode amie pour calculer la médiane des éléments du vecteur
    friend double median(const traitement& t);

};

//fct amie moyenne
double moyenne(const traitement& t){
    if(t.valeur.empty()) return 0.0;//vecteur vide

    double somme=0;
    for( int val:t.valeur){
        somme+=val;
    }
    return somme/t.valeur.size();

}
//fct amie mediane
double median(const traitement& t) {
    if (t.valeur.empty()) return 0.0;

    vector<int> sorted = t.valeur;
    sort(sorted.begin(), sorted.end());

    int taille = sorted.size();
    if (taille % 2 == 0) {
        // Si le nombre d'éléments est pair, la médiane est la moyenne des deux éléments centraux
        return (sorted[taille / 2 - 1] + sorted[taille / 2]) / 2.0;
    } else {
        // Si le nombre d'éléments est impair, la médiane est l'élément central
        return sorted[taille / 2];
    }
}


int main() {
    traitement t;

    // Initialisation des valeurs
    t.initialise();

    // Affichage des valeurs
    cout << "Valeurs du vecteur : ";
    t.show();
    cout << endl;

    // Calcul et affichage de la moyenne
    cout << "Moyenne des valeurs : " << moyenne(t) << endl;

    // Calcul et affichage de la médiane
    cout << "Mediane des valeurs : " << median(t) << endl;

    return 0;
}





















