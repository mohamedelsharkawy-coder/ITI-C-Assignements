#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }

void textattr(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

int main()
{   // Define Menu
    char menu[3][10] = {"New", "Display", "Exit"};

    // define variable that determine the selected item
    int selected_item = 0; // 0:new, 1:display, 2:exit
    int flage = 0; // to exit the program -> 0:still_running, 1:exit
    int i;
    do
    {
        system("cls");


        // draw lines
        int lines;
        for(lines=0; lines<3; lines++)
        {
            // left lines
            gotoxy(8,2+lines);
            printf("|\n");

            // right lines
            gotoxy(19,2+lines);
            printf("|\n");
        }

        // up lines
        gotoxy(9,1);
        printf("----------");

        // down lines
        gotoxy(9,5);
        printf("----------");


        for(i=0;i<3;i++)
        {
            gotoxy(10,2+i);
            if (i == selected_item)
            {
                textattr(0x04);
                _cprintf("%s", menu[i]);
                textattr(0x07);
            }

            else
            {
                _cprintf("%s", menu[i]);
            }

        }
        printf("\n");

        // check the pressed keys -> extended_keys [arrow up(72), arrow down(80)], normal_keys [escape, enter]
        char pressed_key;
        pressed_key = _getch();
        char extended_key;
        char normal_key;

        switch(pressed_key)
        {
            // here the pressed key is an extended keys
            case -32:
                extended_key = _getch();
                switch(extended_key)
                {
                    case 72: // Up Arrow
                        selected_item -= 1;
                        if(selected_item < 0)
                        {
                            selected_item = 2;
                        }
                        break;

                    case 80: //Down Arrow
                        selected_item += 1;
                        if(selected_item > 2)
                        {
                            selected_item = 0;
                        }
                        break;
                }
                break;

            // normal keys
            case 27: // Escape
                flage = 1; // to exit the program
                break;

            case 13:
                switch(selected_item)
                {
                    case 0: // New
                        system("cls");
                        printf("New Item Is Selected\n");
                        printf("\nPress Any Key To Go Back To The Menu <<< \n");
                        _getch();
                        break;

                    case 1: // Display
                        system("cls");
                        printf("Display Item Is Selected\n");
                        printf("\nPress Any Key To Go Back To The Menu <<< \n");
                        _getch();
                        break;

                    case 2:
                        system("cls");
                        printf("Exit Item Is Selected\n");
                        printf("\nPress Any Key To Go Exit Program XXX \n");
                        _getch();
                        flage=1;
                        break;
                }
                break;

        }

    }while(flage==0);


    return 0;
}
