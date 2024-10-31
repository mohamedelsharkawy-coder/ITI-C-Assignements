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

    // Sub Menus
    char sub_menu_new[3][50] = {"1: New File", "2: New Folder", "3: New Project"};
    char sub_menu_display[3][50] = {"1: Display In Red", "2: Display In Blue", "3: Display In Green"};
    char sub_menu_exit[3][50] = {"1: Exit Without Save", "2: Exit With Save", "3: Exit Anyway"};


    // define variable that determine the selected item
    int selected_item = 0; // 0:new, 1:display, 2:exit
    int selected_sub_menu = -1; // which sub menu opened
    int selected_sub_menu_item = 0; // option 1, option 2, option 3
    int flage = 0; // to exit the program -> 0:still_running, 1:exit
    int i;
    do
    {
        system("cls");

        // print the main menu
        for(i=0;i<3;i++)
        {
            gotoxy(20,10+i);
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

        // print sub menus
        if(selected_sub_menu == 0) // new sub menu selected
        {
            for(i=0;i<3;i++)
            {
                gotoxy(40,10+i);
                if (i == selected_sub_menu_item)
                {
                    textattr(0x04);
                    _cprintf("%s", sub_menu_new[i]);
                    textattr(0x07);
                }

                else
                {
                    _cprintf("%s", sub_menu_new[i]);
                }
            }
        }

        else if(selected_sub_menu == 1) // display sub menu selected
        {
            for(i=0;i<3;i++)
            {
                gotoxy(40,10+i);
                if (i == selected_sub_menu_item)
                {
                    textattr(0x04);
                    _cprintf("%s", sub_menu_display[i]);
                    textattr(0x07);
                }

                else
                {
                    _cprintf("%s", sub_menu_display[i]);
                }
            }
        }

        else if(selected_sub_menu == 2) // exit sub menu selected
        {
            for(i=0;i<3;i++)
            {
                gotoxy(40,10+i);
                if (i == selected_sub_menu_item)
                {
                    textattr(0x04);
                    _cprintf("%s", sub_menu_exit[i]);
                    textattr(0x07);
                }

                else
                {
                    _cprintf("%s", sub_menu_exit[i]);
                }
            }
        }

        // print descriptive arrows
        if(selected_sub_menu == -1)
        {
            gotoxy(32, 11);
            textattr(0x01);
            _cprintf(">>");
            textattr(0x07);
        }

        else
        {
            gotoxy(32, 11);
            textattr(0x01);
            _cprintf("<<");
            textattr(0x07);
        }


        printf("\n");

        // check the pressed keys -> extended_keys [arrow up(72), arrow down(80), arrow right(77), arrow left(75)], normal_keys [escape, enter]
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
                        if(selected_sub_menu == -1) // no sub menu chosen
                        {
                            selected_item -= 1;
                            if(selected_item < 0)
                            {
                                selected_item = 2;
                            }
                        }

                        else // there is a sub menu
                        {
                            selected_sub_menu_item -= 1;
                            if(selected_sub_menu_item < 0)
                            {
                                selected_sub_menu_item = 2;
                            }
                        }

                        break;

                    case 80: //Down Arrow
                        if(selected_sub_menu == -1) // no sub menu chosen
                        {
                            selected_item += 1;
                            if(selected_item > 2)
                            {
                                selected_item = 0;
                            }
                        }

                        else // there is a sub menu
                        {
                            selected_sub_menu_item += 1;
                            if(selected_sub_menu_item > 2)
                            {
                                selected_sub_menu_item = 0;
                            }
                        }
                        break;

                    case 77: // Right Arrow
                        if(selected_item == 0)
                        {
                            selected_sub_menu = 0; // new sub menu
                        }

                        else if(selected_item == 1)
                        {
                            selected_sub_menu = 1; // display sub menu
                        }

                        else if(selected_item == 2)
                        {
                            selected_sub_menu = 2; // exit sub menu
                        }
                        break;

                    case 75: // Left Array
                        selected_sub_menu = -1;
                        break;
                }
                break;

            // normal keys
            case 27: // Escape
                printf("\n\nEscape Button Is Pressed, You Exit The Program\n");
                flage = 1; // to exit the program
                break;

            case 13: // Enter

                if(selected_item == 0)
                {
                    selected_sub_menu = 0;
                }

                else if(selected_item == 1)
                {
                    selected_sub_menu = 1;
                }

                else if(selected_item == 2)
                {
                    selected_sub_menu = 2;
                }
                break;

        }

    }while(flage==0);


    return 0;
}
