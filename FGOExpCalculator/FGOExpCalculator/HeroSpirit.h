#pragma once
class HeroSpirit {
private:
  // TODO: currently hardcode to 5 star, enable other star level in future
  int level;
  int experience;
public:
  void addExp(int exp);
  int getFeedPrice(int numFood);
  void reset();
  int getLevel();
};