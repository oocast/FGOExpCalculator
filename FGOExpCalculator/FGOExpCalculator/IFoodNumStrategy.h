#pragma once
#include <string>
class IFoodNumStrategy
{
public:
  virtual int getFoodNum() = 0;
  virtual std::string toString() = 0;
};