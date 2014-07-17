#ifndef FDTD_OBJECT
#define FDTD_OBJECT

#include <string>
#include <complex>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <iostream>
#include <memory>

enum Shape {sphere,block,ellipse,cone,cylinder};
typedef std::complex<double> cplx;

// Needs modification for complex I think
class Obj
{
protected:
    std::vector<double> geoParam;
    std::vector<double> material;
    Shape part;
 
public:
    // Constructor
    Obj(Shape s, std::vector<double> mater, std::vector<double> geo);

    // Copy Constructor
    Obj(const Obj& o);
    // Access Functions
    Shape s() {return part;}
    std::vector<double> geo();

    // Dielectric Access function
    cplx dielectric(double freq);

};

#endif

