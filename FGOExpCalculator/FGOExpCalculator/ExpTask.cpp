#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ExpTask.h"
#include "IFoodNumStrategy.h"
#include "HeroSpirit.h"
#include "Constants.h"

#define GREAT_SUCCESS_THRESH 10
#define SUPER_SUCCESS_THRESH 1

void ExpTask::log()
{
  std::cout << "Price: " << totalPrice << std::endl;
  std::cout << "Food: " << totalFood << std::endl;
  std::cout << "GreatSuccess: " << totalGreatSuc << std::endl;
  std::cout << "SuperSuccess: " << totalSuperSuc << std::endl;
  std::cout << "--------------------------------" << std::endl;
}

void ExpTask::feed()
{
  int foodNum = foodNumStrategy->getFoodNum(&target);
  int price = target.getFeedPrice(foodNum);

  totalFood += foodNum;
  totalPrice += price;

  int randNum = rand() % 100;
  int gain = 1;
  if (randNum < SUPER_SUCCESS_THRESH) {
    gain = 3;
    totalSuperSuc++;
  }
  else if (randNum < GREAT_SUCCESS_THRESH) {
    gain = 2;
    totalGreatSuc++;
  }

  int exp = foodNum * FOOD_EXP * gain;
  target.addExp(exp);
}

ExpTask::ExpTask(HeroSpirit &target) :
  foodNumStrategy(nullptr),
  target(target),
  totalPrice(0),
  totalFood(0),
  totalGreatSuc(0),
  totalSuperSuc(0)
{
  srand(time(nullptr));
}

void ExpTask::reset() {
  totalFood = 0;
  totalPrice = 0;
  totalGreatSuc = 0;
  totalSuperSuc = 0;
  target.reset();
}

void ExpTask::changeStrategy(IFoodNumStrategy * newStrategy)
{
  foodNumStrategy = newStrategy;
}

void ExpTask::run() {
  std::cout << "Task running: " << foodNumStrategy->toString() << std::endl;
  while (!target.levelIsFull()) {
    feed();
  }
  log();
}