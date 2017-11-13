#pragma once
#include <vector>
#include "HeroSpirit.h"
#include "ExpTask.h"

class IFoodNumStrategy;

class ExpDriver {
private:
  HeroSpirit target;
  const int numTaskTrials;
  ExpTask task;
  const std::vector<IFoodNumStrategy*> &strategies;
public:
  ExpDriver(int numTaskTrials, std::vector<IFoodNumStrategy*> &strategies);
  void reset();
  void run();
};