#include <vector>
#include "ExpDriver.h"

int main() {
  ExpDriver driver = ExpDriver(5, std::vector<IFoodNumStrategy>());
  driver.run();
  return 0;
}