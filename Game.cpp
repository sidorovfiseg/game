#include "Game.h"

#include "../Map/Map.h"
#include "../Player/Player.h"
#include "../Player/PlayerView.h"

Game::Game() {
	map_ = std::make_unique<Map>(10, 10);
	player_ = std::make_unique<Player>();
}

