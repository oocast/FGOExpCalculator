#pragma once
class HeroSpirit;
class IFoodNumStrategy;

class ExpTask {
private:
  HeroSpirit &target;
  IFoodNumStrategy *foodNumStrategy;
  int totalPrice;
  int totalFood;
  int totalGreatSuc;
  int totalSuperSuc;
  void log();
  void feed();
public:
  ExpTask(HeroSpirit &target);
  void reset();
  void changeStrategy(IFoodNumStrategy *newStrategy);
  void run();
};