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
	unique_ptr<class Character> character;
public:
	inline MoveCommand(class Character _char, int _x, int _y) {};
	void MoveTo(int _x, int _y);
	void Action(int _x, int _y);
	void Undo();
	MoveCommand();
	~MoveCommand();
};

