#include "Data.h"
#include "Libraries.h"

// Definition
void Draw(Snake s, Logic  l)
{
	int sY = l.sizeY;
	int sX = l.sizeX;
	char a = 0;

	for (int i = 0; i < sY; i++)
	{
		for (int j = 0; j < sX; j++)
		{

			a = ' ';

			// Top-Left Corner
			if (i == 0 && j == 0)
			{
				a = l.leftTopCorner;
			}
			else
				// Top-Right Corner
				if (i == 0 && j == (sX - 1))
				{
					a = l.rightTopCorner;
				}
				else
					if (i == (sY - 1) && j == 0)
					{
						a = l.leftBottomCorner;
					}
			// Bottom-Right Corner
			if (i == (sY - 1) && j == (sX - 1))
			{
				a = l.rightBottomCorner;
			}

			cout << a;
		}
		cout << endl;
	}
}

void Input(Snake s, Logic l)
{
	if (_kbhit())
	{
		switch (_getch())
		{
			// Movement
		case 'w':
			s.dir = 1;
			break;

		case 'a':
			s.dir = 2;
			break;

		case 's':
			s.dir = 3;
			break;

		case 'd':
			s.dir = 4;
			break;

			// UI
		case 'z':
			s.SetDefault();
			break;

		case 'x':
			l.isOver = true;
			break;
		}
	}
}