#pragma once

#include "Component.h"
#include "Texture.h"
#include "Transform.h"

class FighterViewer : public Component
{
public:
	FighterViewer();
	virtual ~FighterViewer();
	void init();
	void draw();

private:
	Texture* texture_;
	SDL_Rect* rect_;
	Transform* transform_;
};

