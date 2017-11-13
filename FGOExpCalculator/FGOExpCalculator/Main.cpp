#include <vector>
#include "ExpDriver.h"
#include "ConstantFoodNum.h"

#define CONSTANT_STRATEGY_NUM 4
#define BOOST_AT_LEVELUP_STRATEGY_NUM 2

int main() {
  ConstantFoodNum strategies[CONSTANT_STRATEGY_NUM] = { ConstantFoodNum(1), ConstantFoodNum(2), ConstantFoodNum(5), ConstantFoodNum(10) };
  std::vector<IFoodNumStrategy*> strategiesVector;
  for (int i = 0; i < CONSTANT_STRATEGY_NUM; i++) {
    strategiesVector.push_back(strategies + i);
  }
  
  ExpDriver driver = ExpDriver(5, strategiesVector);
  driver.run();
  return 0;
}