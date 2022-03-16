#include "trygonometria.h"
#include <cmath>

double degreemath::sin(double degree) {
         double pi = 3.14159265358979323846;
         double radian = pi*degree/180; //zamiana stopni na radiany                                
         return std::sin(radian);   //funkcja biblioteczna z piku <cmath>
}
double degreemath::cos(double degree) {
         double pi = 3.14159265358979323846;
         double radian = pi*degree/180; //zamiana stopni na radiany 
         return std::cos(radian);   //funkcja biblioteczna z piku <cmath>
}
double degreemath::tg(double degree) {
         double pi = 3.14159265358979323846;
	 double radian = pi*degree/180; //zamiana stopni na radiany 
         return std::tan(radian);   //funkcja biblioteczna z piku <cmath>
}
double degreemath::ctg(double degree) {
	 double pi = 3.14159265358979323846;
         double radian = pi*degree/180; //zamiana stopni na radiany
         return 1/( std::tan(radian));   //funkcja biblioteczna z piku <cmath>
}
//i tak dalej
