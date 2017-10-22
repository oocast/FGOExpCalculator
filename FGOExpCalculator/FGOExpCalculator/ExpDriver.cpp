#include <iostream>
#include "ExpDriver.h"
#include "IFoodNumStrategy.h"
#include "ExpTask.h"

ExpDriver::ExpDriver(int numTaskTrials, std::vector<IFoodNumStrategy*> &strategies) :
  numTaskTrials(numTaskTrials),
  tasks(std::vector<ExpTask>()),
  target(HeroSpirit()){
  for (int i = 0; i < strategies.size(); i++) {
    tasks.push_back(ExpTask(strategies[i], target));
  }
}

void ExpDriver::run() {
  std::cout << "Running the drive" << std::endl;
  for each (auto task in tasks)
  {
    for (int i = 0; i < numTaskTrials; i++) {
      task.run();
      task.reset();
    }
  }
}