#include "HeroSpirit.h"

// Hard coded to 5 star
#define STAR_LEVEL 5
static const int maxLevels[5] = { 60, 65, 70, 80, 90 };
static const int priceBases[5] = { 100, 150, 200, 400, 600 };
static const int priceSlopes[5] = { 30, 45, 60, 120, 180 };

static bool isCapLevel(int level) {
  return level >= 50 && level % 10 == 0;
}

HeroSpirit::HeroSpirit() :
  level(0),
  experience(0)
{}

void HeroSpirit::addExp(int expAdded)
{
  while (expAdded > 0) {
    int expDiff = getLevelUpExpDiff();
    if (expAdded >= expDiff) {
      level++;
      experience = 0;
      expAdded = isCapLevel(level) ? 0 : expAdded - expDiff;
    }
    else {
      experience += expAdded;
      expAdded = 0;
    }
  }
}

int HeroSpirit::getFeedPrice(int numFood) const
{
  return numFood * (priceBases[STAR_LEVEL - 1] + (level - 1) * priceSlopes[STAR_LEVEL - 1]);
}

int HeroSpirit::getLevelUpExp() const
{
  return 50 * level * (level + 1);
}

int HeroSpirit::getLevelUpExpDiff() const
{
  return getLevelUpExp() - experience;
}

bool HeroSpirit::levelUpToCap() const
{
  return isCapLevel(level + 1);
}

void HeroSpirit::reset()
{
  level = 0;
  experience = 0;
}

int HeroSpirit::getLevel() const
{
  return level;
}

bool HeroSpirit::levelIsFull() const
{
  return level == maxLevels[STAR_LEVEL];
}
