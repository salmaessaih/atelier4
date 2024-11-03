#include"point.h"

//declaration du constructeur
point :: point(float x,float y):x(x),y(y){}

//declaration du fct deplace
void point::deplace(float dx,float dy){
x+=dx;
y+=dy;
}

//declaration du fct affiche
void point::affiche()const{
cout<<"les cordoonnees du point sont :"<<x<<","<<y<<endl;
}
