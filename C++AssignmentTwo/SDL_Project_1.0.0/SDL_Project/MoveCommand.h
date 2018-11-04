#pragma once
#include "Command.h"
class MoveCommand :
	public Command
{
private:
	int currentX;
	int currentY;
	int previousX;
	int previousY;
	class Character unit;
public:
	inline MoveCommand(class Character _unit, int _x, int _y) {
		unit = _unit; previousX = 0; previousY = 0; currentX = _x; currentY = _y;
	};
	void Action();
	void Undo();
	MoveCommand();
	~MoveCommand();
};

