#include <iostream>
#include "Cercle.h"
#include "Point.h"
 
using namespace std;

int main()
{
    Point p(12,14);
    Cercle c(p,2);
    
    Point t(12, 14);

    c.afficher();
    c.changement(12);

    c.afficher();
    cout <<"la surface :" << c.surface()<<endl;
    cout <<"le perimetre :" << c.perimetre() << endl;

    double rr = 12;

    if (c.test_egelite(rr,t) )
    {

        cout << "equal" << endl;

    }

    else {

        cout << "not equal" << endl;


    }

    

    if (c.appartenence(t) )
    {

        cout << "appartient" << endl;

    }

    else {

        cout << "n'appartient pas" << endl;


    }

}