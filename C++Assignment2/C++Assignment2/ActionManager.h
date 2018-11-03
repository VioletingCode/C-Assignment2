#pragma once
#include "HFiles.h"
#include "UndoManager.h"
class ActionManager
{
protected:
	unique_ptr<UndoManager> Undoer;
	//Whatever buttons we want to map
	unique_ptr<Command> button;
public:
	//Takes in button inputs and tells them to do their action then passes the action to the UndoManager
	void HandleInput(/*Some Input*/);
	ActionManager();
	~ActionManager();
};

