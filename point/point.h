#include<iostream>

using namespace std;

class point {
private:
    float x;
    float y;

public:
    point(float x=0,float y=0);
    void deplace(float dx,float dy);
    void affiche()const;
};
