#pragma once

#include "Player.h"
#include "../src/json.hpp"
#include <string>

using namespace std;
using json = nlohmann::json;

class Game {
public:
    void updateGame(int penaltyPlayer, int timePlayer, int time);
    void to_json(json& j, const Game& g);
    void from_json(const json& j, Game& g);

private:
    int gameState_;
    int maxPenalty_;
    int penaltyCount_;
    int gameMode_;
    Player players_[8];
};