#include "ConstantFoodNum.h"

ConstantFoodNum::ConstantFoodNum(int foodNum) :
  foodNum(foodNum) {

}

int ConstantFoodNum::getFoodNum() {
  return this->foodNum;
}

std::string ConstantFoodNum::toString() {
  return "strategy: Constant food number: " + std::to_string(foodNum);
}