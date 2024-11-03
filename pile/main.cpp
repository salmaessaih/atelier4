#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

class pile{

private:
    vector<int>elt;//vecteur qui stocke les elements de la pile

public:
    pile()=default;
    //empiler
    void push(int valeur){
        elt.push_back(valeur);
    }

    //depiler
    void pop(){
        if(elt.empty()){
            throw std::out_of_range("pile vide impossible de depiler!!");
        }
        elt.pop_back();

    }
    //methode pour verifer si pile est vide
    bool estVide() const {
        return elt.empty();
    }

    //afficher
    void afficher()const{
    for(int element : elt){
        cout<<element<<" ";
    }
    cout<<endl;
    }

};


int main(){

    pile p1;
    pile p2;

    //empiler dans p1
    p1.push(3);
    p1.push(4);
    p1.push(6);
    p1.push(7);
    cout<<"les element de la pile 1 apres l empilement :";
    p1.afficher();

    //empiler dans p2
    p2.push(11);
    p2.push(5);
    p2.push(1);
    cout<<"les element de la pile 2 apres l empilement :";
    p2.afficher();

    //depiler p1
    p1.pop();
    cout<<"les element de la pile 1 apres l depilement :";
    p1.afficher();

    //depiler p2
    p2.pop();
    p2.pop();//depiler  2fois
    cout<<"les element de la pile 2 apres l depilement :";
    p2.afficher();

















}







