#pragma once
#include "HFiles.h"
class Command {
public:
	//The thing the command does
	virtual Command * Action() = 0;
	//Undoes that thing
	virtual void Undo() = 0;
};
