#include "Cercle.h"
#include "Point.h"
#include <iostream>
#include <math.h>
using namespace std;



Cercle::Cercle()
{
    this->p;
    this->r = 0;

}

Cercle::Cercle(Point p, double ra)
{

    this->p = p;
    this->r = ra;


}

void Cercle::afficher() 
{

    cout<< "le rayon : " << this->r << endl;
    this->p.afficherp();
  
}

void Cercle::changement(double ra)
{
   
    this->r = ra;

}


double Cercle::surface() const
{
  
   return pow(this->r, 2)* this->pi;

}

double Cercle::perimetre() const
{
  return 2* this->pi *this->r ;

}

bool Cercle::test_egelite(double &r , Point po) 
{
    if (this->r == r && this->p.test_egelitep(po)   == true ) {

        return true;

    }

    else
    {
       
        return false;
       
    }

}


bool Cercle::appartenence(Point &p)
{
    
    double x;
       x = this->p.distance( p );


    if (x == this->r) {

        return true;

    }

    else {

        return false;

    }
}