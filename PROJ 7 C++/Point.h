#pragma once


class Point
{


private:

	double px;
	double py;

public:

	Point();
	Point(double x, double y);
	void translation(double xd, double yd);
	double distance(Point &x);
	void afficherp();
	bool test_egelitep(Point& c);
};