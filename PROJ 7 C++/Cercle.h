#pragma once
#include "Point.h"


class Cercle
{



private:
	
	Point p;
	double r;
	double const pi = 3.14;
   

public:
	Cercle();
	Cercle(Point p ,double ra );
	void afficher();
	void changement(double ra);
	double surface()const;
	double perimetre()const;
	bool test_egelite(double& r, Point p) ;
	bool appartenence(Point &p);


};