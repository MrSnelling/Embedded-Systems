#include "mbed.h"
#include "Complex_C.hpp"


// TASK - write and test complexConjugate, complexNegate, complexSubtract, complexMagnitude, complexMultiply and complexDivide

int main() {
    printf("\n\nTASK312\n");

    //Create instance of a complex number
    ComplexNumber_C p = {2.0, 3.0};
    ComplexNumber_C q = {1.0, 1.0};
    complexDisplay("p", p);
    complexDisplay("q", q);
 
    ComplexNumber_C sum = complexAdd(p, q);
    complexDisplay("p+q", sum);

    ComplexNumber_C conj;
    conj = complexConjugate(p);
    complexDisplay("Conjugate p ", conj);
    conj = complexConjugate(q);
    complexDisplay("Conjugate q", conj);

    ComplexNumber_C negate;
    negate = complexNegate(p);
    complexDisplay("negate p ", negate);
    negate = complexNegate(q);
    complexDisplay("negate q ", negate);
    
    ComplexNumber_C sub = complexSubtract(p,q);
    complexDisplay("p-q", sub);
    while (true) {
    }
}
