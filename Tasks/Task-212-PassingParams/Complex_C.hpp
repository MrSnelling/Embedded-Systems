#ifndef __Complec_C__
#define __Complec_C__

typedef struct {
  double real;
  double imag;
} ComplexNumber_C;

extern ComplexNumber_C complexAdd(const ComplexNumber_C a, const ComplexNumber_C b);
extern void complexDisplay(const char *strName, const ComplexNumber_C u);
extern ComplexNumber_C complexConjugate(const ComplexNumber_C a);
extern ComplexNumber_C complexNegate(const ComplexNumber_C a);
extern ComplexNumber_C complexSubtract(const ComplexNumber_C a, const ComplexNumber_C b);
extern ComplexNumber_C complexMagnitude();
extern ComplexNumber_C complexMultiply();
extern ComplexNumber_C complexDivide();

#endif