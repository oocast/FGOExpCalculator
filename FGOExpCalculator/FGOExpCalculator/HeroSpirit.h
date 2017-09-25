#pragma once
class HeroSpirit {
private:
  int level;
  int experience;
public:
  void addExp(int exp);
  int getFeedPrice(int numFood);
  void reset();
  int getLevel();
};