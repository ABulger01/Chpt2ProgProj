#include <iostream>
using namespace std;

int main() { 
// Declare oceans level rise per year in mm
  const double OceanRisePerYear = 1.5; 
 int  years1 = 5;
  int years2 =7;
  int years3 = 10;
  double oceanRise5 = OceanRisePerYear * years1;
 double oceanRise7 = OceanRisePerYear * years2;
  double oceanRise10 = OceanRisePerYear * years3;
  cout << "In 5 years the ocean will rise " << oceanRise5 <<  "mm" << endl;
  cout << "In 7 years the ocean will rise " << oceanRise7 <<  "mm" << endl;
  cout << "In 10 years the ocean will rise " << oceanRise10 <<  "mm" << endl;
  return 0;
  
}