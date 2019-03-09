#include "calculator.h"
#include <math.h>

int Calculator::add(int a, int b){
	return a + b;
}

double Calculator::sine(int degrees){
	double radians = M_PI * degrees / 180;

	return sin(radians);
}

double Calculator::cosine(int degrees){
	double radians = M_PI * degrees /180;

	return cos(radians);
}
