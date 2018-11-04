#pragma once
#include "HFiles.h"
#include "UndoManager.h"
class ActionManager
{
protected:
	unique_ptr<UndoManager> Undoer;
	//Whatever buttons we want to map
	unique_ptr<Command> UpButton;
	unique_ptr<Command> DownButton;
	unique_ptr<Command> LeftButton;
	unique_ptr<Command> RightButton;
	unique_ptr<Command> HealButton;
	unique_ptr<Command> BuyButton;
public:
	//Takes in button inputs and tells them to do their action then passes the action to the UndoManager
	void HandleInput(SDL_Event _event);
	ActionManager();
	~ActionManager();
};

