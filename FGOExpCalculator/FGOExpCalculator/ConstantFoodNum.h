#pragma once
#include "IFoodNumStrategy.h"
class ConstantFoodNum : public IFoodNumStrategy {
private:
  const int foodNum;
public:
  ConstantFoodNum(int foodNum);
  int getFoodNum();
  std::string toString();
};