#include "Point.h"
#include "Cercle.h"
#include <iostream>
#include <math.h>
using namespace std;


Point::Point()
{
    this->px = 0;
    this->py = 0;
}

Point::Point(double x, double y)
{
    this->px = x;
    this->py = y;

}

void Point::translation(double xd, double yd)
{   
    this->px += xd;
    this->py += yd;
}

double Point::distance(Point& x)
{
    double dis;

    dis = pow(this->px - x.px, 2) + pow(this->py - x.py, 2);

    return dis;
}

void Point::afficherp()
{

    cout << "x= " << this->px<<endl;
    cout << "y= " << this->py<<endl;
}

bool Point::test_egelitep(Point &c)
{
    if ( (this->px)==(c.px) && (this->py)==(c.py) ) {

        return true;

    }


    else {

        return false;

    }

}
