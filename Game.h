#ifndef OOP_GAME_GAME_H_
#define OOP_GAME_GAME_H_

#include <memory>

class Map;
class Player;
class View;

class Game {
public:
	Game();

	void Run();

	void OnKey(char c);

private:
	std::shared_ptr<Map> map_;
	std::shared_ptr<View> map_view_;
	std::shared_ptr<Player> player_;
	std::shared_ptr<View> player_view_;

	bool finished_{false};
};

#endif // OOP_GAME_GAME_H_

