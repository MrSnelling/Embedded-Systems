#include "stdio.h"
#include "Complex_C.hpp"

ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C y = a;
    y.real += b.real;
    y.imag += b.imag;
    return y;
}

ComplexNumber_C complexConjugate(const ComplexNumber_C a)
{    
    ComplexNumber_C y = a;
    y.imag = y.imag * -1;
    return y;
}

ComplexNumber_C complexNegate(const ComplexNumber_C a)
{    
    ComplexNumber_C y = a;
    y.imag = y.imag * -1;
    y.real = y.real * -1;
    return y;
}

ComplexNumber_C complexSubtract(const ComplexNumber_C a, const ComplexNumber_C b) {
    ComplexNumber_C negateB = complexNegate(b);
    ComplexNumber_C y = complexAdd(a,negateB);
    return y;
}

void complexDisplay(const char *strName, const ComplexNumber_C u) {
    printf("%s = %f + j%f\n", strName, u.real, u.imag);
}