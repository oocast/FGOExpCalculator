#include <iostream>
#include "ExpDriver.h"
#include "IFoodNumStrategy.h"

ExpDriver::ExpDriver(int numTaskTrials, std::vector<IFoodNumStrategy> &strategies) :
  numTaskTrials(numTaskTrials) {
  
}

void ExpDriver::run() {
  std::cout << "Running the drive" << std::endl;
}