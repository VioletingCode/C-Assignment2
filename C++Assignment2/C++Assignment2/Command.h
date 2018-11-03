#pragma once
#include "HFiles.h"
class Command {
public:
	//The thing the command does
	virtual unique_ptr<Command> Action() {};
	//Undoes that thing
	virtual void Undo() = 0;
	virtual ~Command() {};
};
