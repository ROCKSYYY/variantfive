/***********************
* Автор: Долинин Н.К.  *
* Название: Вариант 5  *
***********************/ 


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
  double a = 3.52;
  double h = 1.27;
  double d = 0.036;
  double delta = 0.150;
  double h0 = 0.635;
  double mu = 0.82;
  double g = 9.81;

  double f = 3.14159 * d * d / 4;
  double F0 = a * a;
  double F = (a - 2 * delta) * (a - 2 * delta);

  double K = sqrt(h0 - delta) - sqrt(h - delta - (h - h0) * (F0 / F));

  double t = (2 * K) / (mu * f * sqrt(2 * g)) * (F0 * F) / (F0 - F);

  cout << "t = " << t << endl;

return 0;
}
