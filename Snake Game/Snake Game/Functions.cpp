#include "Data.h"
#include "Libraries.h"

// Definition
void Draw(Snake s, Logic l) {
    int sY = l.sizeY;
    int sX = l.sizeX;
    char a = 0;

    for (int i = 0; i < sY; i++) {
        for (int j = 0; j < sX; j++) {

            if (i == s.y && j == s.x) {
                a = s.head;
                cout << a;
                continue;
            }

            a = l.background;

            // Horizontal lines
            if ((i == 0 && j != 0 && j != (sY - 1)) || ((i == (sY - 1)) && (j != 0) && (j != (sX - 1)))) {
                a = l.horizontalBorder;
                cout << a;
                continue;
            }

            // Vertical Lines
            if ((j == 0 && i != 0 && i != (sX - 1)) || ((j == (sX - 1)) && (i != 0) && (i != (sY - 1)))) {
                a = l.verticalBorder;
                cout << a;
                continue;
            }

            // Top-Left Corner
            if (i == 0 && j == 0) {
                a = l.leftTopCorner;
                cout << a;
                continue;
            }

            // Top-Right Corner
            if (i == 0 && j == (sX - 1)) {
                a = l.rightTopCorner;
                cout << a;
                continue;
            }

            if (i == (sY - 1) && j == 0) {
                a = l.leftBottomCorner;
                cout << a;
                continue;
            }

            // Bottom-Right Corner
            if (i == (sY - 1) && j == (sX - 1)) {
                a = l.rightBottomCorner;
                cout << a;
                continue;
            }

            cout << a;
        }
        cout << endl;
    }
}

void Input(Snake s, Logic l) {
    if (_kbhit()) {
        switch (_getch()) {
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