#include <iostream>
#include "ExpDriver.h"
#include "IFoodNumStrategy.h"
#include "ExpTask.h"

ExpDriver::ExpDriver(int numTaskTrials, std::vector<IFoodNumStrategy*> &strategies) :
  numTaskTrials(numTaskTrials),
  target(HeroSpirit()),
  strategies(strategies),
  task(target){
}

void ExpDriver::run() {
  std::cout << "Running the drive" << std::endl;
  for each (auto strategy in strategies)
  {
    task.changeStrategy(strategy);
    for (int i = 0; i < numTaskTrials; i++) {
      task.run();
      task.reset();
    }
  }
}