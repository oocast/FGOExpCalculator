#pragma once
class HeroSpirit;
class IFoodNumStrategy;

class ExpTask {
private:
  HeroSpirit &target;

  void log();
  void feed();
public:
  void reset();
  void run();
};