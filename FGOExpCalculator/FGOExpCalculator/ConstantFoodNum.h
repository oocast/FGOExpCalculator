#pragma once
#include "IFoodNumStrategy.h"
class ConstantFoodNum : IFoodNumStrategy {
private:
  int foodNum;
public:
  ConstantFoodNum(int foodNum);
};