#include <iostream>
#include "ExpTask.h"
#include "IFoodNumStrategy.h"

ExpTask::ExpTask(IFoodNumStrategy *foodNumStrategy, const HeroSpirit &target) :
  foodNumStrategy(foodNumStrategy),
  target(target)
{
}

void ExpTask::reset() {

}

void ExpTask::run() {
  std::cout << "Task running: " << foodNumStrategy->toString() << std::endl;
}