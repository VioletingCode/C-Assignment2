#include "MoveCommand.h"

void MoveCommand::Action(int _x, int _y) {
	previousX = currentX;
	previousY = currentY;
	MoveTo(_x, _y);
}

void MoveCommand::MoveTo(int _x, int _y) {
	currentX = _x;
	currentY = _y;
}

MoveCommand::MoveCommand()
{
}


MoveCommand::~MoveCommand()
{
}
