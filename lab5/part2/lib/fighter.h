#ifndef FIGHTER_H
#define FIGHTER_H

#include "player.h"

class Fighter : public Player {
public:
	Fighter(std::string);

	virtual void doAction(Player*);
};

#endif