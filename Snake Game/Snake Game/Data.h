#pragma once
#include "Libraries.h"

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
        ifstream Visuals("Visuals.txt");

        if (!Visuals)
        {
            cout << "Failed to open the file." << endl;
            return;
        }

        string line;
        while (getline(Visuals, line))
        {
            // Find the colon position to split key and value
            size_t colonPos = line.find(':');
            if (colonPos != string::npos)
            {
                string key = line.substr(0, colonPos);
                string value = line.substr(colonPos + 1);

                // Remove trash from line value, keep only char and value
                value.erase(0, value.find_first_not_of(" \t"));
                value.erase(value.find_last_not_of(" \t") + 1);

                // Set the character based on the key
                if (key == "Background")
                {
                    background = value[0];
                }
                else if (key == "TopLeftCorner")
                {
                    leftTopCorner = value[0];
                }
                else if (key == "TopRightCorner")
                {
                    rightTopCorner = value[0];
                }
                else if (key == "BottomLeftCorner")
                {
                    leftBottomCorner = value[0];
                }
                else if (key == "BottomRightCorner")
                {
                    rightBottomCorner = value[0];
                }
            }
        }

        Visuals.close();
    }

	void SetDefault(int yT = 10, int xT = 10)
	{
		sizeY = yT;
		sizeX = xT;
	}
};