#include "LaborkaConfig.h"

#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#else
	#include "cmath"
#endif

int main(){

#ifdef USE_TRIGONOMETRY_DEGREE
 	double result = cos_degree(45.0);
#else
	double pi = 3.14159265358979323846;
	double result = cos(pi/4.0);
#endif
return 0;
}
