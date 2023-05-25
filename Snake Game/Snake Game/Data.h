#pragma once

struct Snake
{
	int dir = 1;
	int size = 0;
	int x = 5,
		y = 5;

	void SetDefault(int dirT = 1, int xT = 5, int yT = 5)
	{
		dir = dirT;
		x = xT;
		y = yT;
	}

};

struct Logic
{
	bool isOver = 0;

	// Field size
	int sizeY = 10,
		sizeX = 10;

	// Field chars
	char background = '#',
		 leftTopCorner = 201,
		 leftBottomCorner = 200,
		 rightTopCorner = 187,
		 rightBottomCorner = 188;
			
	void SetChars()
	{
	
	}

	void SetDefault(int yT = 10, int xT = 10)
	{
		sizeY = yT;
		sizeX = xT;
	}
};