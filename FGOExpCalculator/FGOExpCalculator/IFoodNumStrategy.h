#pragma once
#include <string>

class HeroSpirit;

class IFoodNumStrategy
{
protected:
  const int foodExp = 32400;
public:
  virtual int getFoodNum(const HeroSpirit *target) = 0;
  virtual std::string toString() = 0;
};