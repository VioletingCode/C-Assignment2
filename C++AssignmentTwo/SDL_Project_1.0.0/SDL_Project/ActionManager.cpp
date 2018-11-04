#include "ActionManager.h"

//Needs an input event as a parameter
void ActionManager::HandleInput(SDL_Event _event) {
	if (_event.key.keysym == ) {};
	if (/*Some Input*/) {};
	if (/*Some Input*/) {};
	if (/*Some Input == Undo Button*/) {
		if (Undoer->hasActions)
			Undoer->UndoCommand();
	}
}

ActionManager::ActionManager() {

}


ActionManager::~ActionManager() {
}
