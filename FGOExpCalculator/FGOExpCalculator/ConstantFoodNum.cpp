#include "ConstantFoodNum.h"
#include "HeroSpirit.h"

ConstantFoodNum::ConstantFoodNum(int foodNum) :
  foodNum(foodNum) {

}

int ConstantFoodNum::getFoodNum(const HeroSpirit * target)
{
  if (target->levelUpToCap()) {
    int expDiff = target->getLevelUpExpDiff();
    int num = expDiff / foodExp + 1;
    if (num < foodNum) {
      return num;
    }
  }
  return foodNum;
}

std::string ConstantFoodNum::toString() {
  return "strategy: Constant food number: " + std::to_string(foodNum);
}