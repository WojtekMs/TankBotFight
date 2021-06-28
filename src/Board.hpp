#pragma once

#include <SFML/Graphics.hpp>

#include "Tank.hpp"
#include "background/Background.hpp"

class Board {
 public:
  Board();

  void register_tank();

  void run();

 private:
  TextureStore mStore;
  sf::RenderWindow mWindow;
  Background mBackground;
  std::vector<Tank> mTanks;
};
