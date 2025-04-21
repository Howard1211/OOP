# ifndef CYLINDER_CPP
# define CYLINDER_CPP
# include <cmath>
# include <iomanip>
# include "Cylinder.h"



double Cylinder :: SurfaceArea(){
    double pi1 = M_PI;
    double answer = 2*pi1*radius*height + 2*pi1*radius*radius;
    return answer;
}

double Cylinder :: Volume(){
    double pi1 = M_PI;
    double answer = pi1 * radius*radius*height;
    return answer;
}

double Cylinder :: Circumference(){
    double pi1 = M_PI;
    double answer = 2*pi1*radius;
    return answer;
}
 
istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: " << fixed << std::setprecision(3) << cldr.Circumference() << "\n";
    out << "SurfaceArea: " << fixed << std::setprecision(3) << cldr.SurfaceArea() << "\n";
    out << "Volume: " << fixed << std::setprecision(3) << cldr.Volume() << "\n";
    return out;
}
 
# endif
 