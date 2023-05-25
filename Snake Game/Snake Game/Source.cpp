#include "Libraries.h"
#include "Functions.h"
#include "Data.h"

int main()
{
	// Create 
	Snake s;
	Logic l;

	// Set Defaults
	s.SetDefault(); 
	l.SetDefault();
	l.SetChars();

	// Gameplay
	/*while  (!l.isOver)
	{
		system("cls");
		Input(s, l);
		Draw(s, l);
		Sleep(4000);
	}*/
}

