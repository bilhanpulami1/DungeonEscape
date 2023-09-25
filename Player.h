#pragma once
#include "Point.h"

class Player
{
	Point m_position;
	bool m_hasKey;

public:
	Player();
	~Player();

	int GetXPosition();
	int GetYPoisiton();

	void SetPosition(int x, int y);

	bool HasKey();
	void PickupKey();
	void UseKey();

	void Draw();
};

