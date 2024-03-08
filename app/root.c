
#include "root.h"
#include <stdlib.h>
#include <math.h>

void root(double* roots,double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (a == 0){
        roots[0] = 5051;
        roots[1] = 5051;
        return;
    }

    if (discriminant >= 0) {
        roots[0] = (-b + sqrt(discriminant)) / (2 * a);
        roots[1] = (-b - sqrt(discriminant)) / (2 * a);
    }
    else {
        roots[0] = 5051;
        roots[1] = 5051;
    }


}
