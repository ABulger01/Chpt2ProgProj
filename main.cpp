#include <iostream>
using namespace std;

int main() { 
// Declare the gallons per tank and the miles per gallon
  const double  gallonsPerTank= 20.0;

  // Declare the miles per tank
 const double miles1 = 23.5; 
  const double miles2 = 28.9;

  // Calculate distances for each fuel efficiency
  double distanceOfTravel1 = gallonsPerTank * miles1;
  double distanceOfTravel2 = gallonsPerTank * miles2;

  //Display the distances
  cout << "The distance of travel for 1 gas tank in town is " << distanceOfTravel1 << " miles." << endl;
  cout << "The distance of travel for 1 gas tank on the highway is " << distanceOfTravel2 << " miles." << endl;

  return 0;
   
}