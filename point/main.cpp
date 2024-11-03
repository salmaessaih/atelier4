#include"point.h"

int main(){

point p(4.5,3.2);
cout<<"les coordonnees du point initial:";
p.affiche();

p.deplace(-1.4,2.6);
cout<<"les coordonnees apres le deplacement :";
p.affiche();


return 0;




}


