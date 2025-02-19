#include <iostream>
using namespace std;

int main() { 
// Declare the amount of customers
  int amountOfCustomersSurveyed = 16500;
  double percentOfEnergyDrinks = .15;
  double percentOfCitursDrinks= .58;

  int customersAmount = amountOfCustomersSurveyed * percentOfEnergyDrinks;
  int customersAmount2 = customersAmount * percentOfCitursDrinks;
  cout << "The approximate number of customers in the survery who purchased one of more energy drinks per week is " << customersAmount << "." << endl;
  
  cout << "The approxiate number of customers in the survey who perfer citurs flavored drinks is " << customersAmount2 << ". "  << endl;

  return 0;
   
}