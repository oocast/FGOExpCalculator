#pragma once
class HeroSpirit;
class IFoodNumStrategy;

class ExpTask {
private:
  const HeroSpirit &target;
  IFoodNumStrategy *foodNumStrategy;
  void log();
  void feed();
public:
  ExpTask(IFoodNumStrategy *foodNumStrategy, const HeroSpirit &target);
  void reset();
  void run();
};