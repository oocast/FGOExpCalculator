#pragma once
#include <vector>
#include "HeroSpirit.h"

class IFoodNumStrategy;
class ExpTask;

class ExpDriver {
private:
  HeroSpirit target;
  const int numTaskTrials;
  std::vector<ExpTask> tasks;
public:
  ExpDriver(int numTaskTrials, std::vector<IFoodNumStrategy> &strategies);
  void reset();
  void run();
};