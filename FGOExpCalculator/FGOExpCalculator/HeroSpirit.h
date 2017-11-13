#pragma once
class HeroSpirit {
private:
  // TODO: currently hardcode to 5 star, enable other star level in future
  int level;
  int experience;
public:
  HeroSpirit();
  void addExp(int exp);
  int getFeedPrice(int numFood) const;
  int getLevelUpExp() const;
  int getLevelUpExpDiff() const;
  bool levelUpToCap() const;
  void reset();
  int getLevel() const;
  bool levelIsFull() const;
};