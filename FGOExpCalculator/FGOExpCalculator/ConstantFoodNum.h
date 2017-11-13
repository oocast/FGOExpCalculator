#pragma once
#include "IFoodNumStrategy.h"

class HeroSpirit;

class ConstantFoodNum : public IFoodNumStrategy {
private:
  const int foodNum;
public:
  ConstantFoodNum(int foodNum);
  int getFoodNum(const HeroSpirit *target);
  std::string toString();
};