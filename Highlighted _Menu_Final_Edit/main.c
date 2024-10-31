#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

struct emp
{
    int id;
    char name[30];
    int age;
};

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
    char menu[5][30] = {"New", "Display All", "Display By ID", "Display By Name", "Exit"};

    // define dynamic array
    int max_no_of_employess;
    printf("Please, Enter your max number of employees = ");
    scanf("%d", &max_no_of_employess);
    struct emp *dynamic_array = (struct emp*)malloc(max_no_of_employess * sizeof(struct emp));

    // assign all the ids to -1
    int i;
    for(i=0;i<max_no_of_employess;i++)
    {
        dynamic_array[i].id = -1;
    }


    int index;


    // define variable that determine the selected item
    int selected_item = 0; // 0:new, 1:display, 2:exit
    int flage = 0; // to exit the program -> 0:still_running, 1:exit

    int counter;

    do
    {

        if(dynamic_array == NULL)
        {
            printf("\nThere is no available spaces in the heap\n");
            break;
        }

        system("cls");

        for(i=0;i<5;i++)
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
                            selected_item = 4;
                        }
                        break;

                    case 80: //Down Arrow
                        selected_item += 1;
                        if(selected_item > 4)
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
                        printf("\nEnter the index you want to add your data in = ");
                        scanf("%d", &index);

                        if((index>=0) && (index<max_no_of_employess))
                        {
                            // there is no data here --> add new employee
                            if(dynamic_array[index].id == -1)
                            {
                                printf("\nEnter your Id = ");
                                scanf("%d", &(dynamic_array[index].id));

                                printf("\nEnter your Name = ");
                                scanf("%s", dynamic_array[index].name);

                                printf("\nEnter your Age = ");
                                scanf("%d", &(dynamic_array[index].age));
                            }

                            // there is a data here -> get id -> same id [update] | not same [access denied]
                            else
                            {
                                int user_id;
                                printf("\nThere is data in this index, please enter your id = ");
                                scanf("%d", &user_id);

                                // the same id then user can update
                                if (user_id == dynamic_array[index].id)
                                {
                                    printf("\n---------------- Update your data -------------\n");
                                    dynamic_array[index].id == user_id;

                                    printf("\nEnter your Name = ");
                                    scanf("%s", dynamic_array[index].name);

                                    printf("\nEnter your Age = ");
                                    scanf("%d", &(dynamic_array[index].age));
                                }

                                // not the same id, so the user has no valid access
                                else
                                {
                                    printf("\nSorry, You can't add your data in this index, You can choose another available index\n");
                                }
                            }

                        }

                        else
                        {
                            printf("\nPlease, Enter index from 0 to %d", max_no_of_employess-1);
                        }

                        printf("\nPress Any Key To Go Back To The Main Menu <<< \n");
                        _getch();
                        break;

                    case 1: // Display all -> all the index has values
                        system("cls");


                        for(counter=0;counter<max_no_of_employess;counter++)
                        {
                            if(dynamic_array[counter].id != -1)
                            {
                                printf("\n---------------------------------------------------\n");
                                printf("\nEmployee ID = %d\n", dynamic_array[counter].id);
                                printf("\nEmployee Name = %s\n", dynamic_array[counter].name);
                                printf("\nEmployee Age = %d\n", dynamic_array[counter].age);
                                printf("\n---------------------------------------------------\n");
                            }

                        }

                        printf("\nPress Any Key To Go Back To The Main Menu <<< \n");
                        _getch();
                        break;

                    case 2: // display by id
                        system("cls");

                        int id;
                        printf("\nPlease, Enter ID = ");
                        scanf("%d", &id);

                        int id_exist = 0;
                        for(counter=0;counter<max_no_of_employess;counter++)
                        {
                            if(id == dynamic_array[counter].id)
                            {
                                id_exist = 1;
                                printf("\nMatching ID Found ....\n");
                                printf("\n---------------------------------------------------\n");
                                printf("\nEmployee ID = %d\n", dynamic_array[counter].id);
                                printf("\nEmployee Name = %s\n", dynamic_array[counter].name);
                                printf("\nEmployee Age = %d\n", dynamic_array[counter].age);
                                printf("\n---------------------------------------------------\n");
                                break;
                            }
                        }

                        if(id_exist == 0)
                        {
                            printf("\nThere is no matching id ....\n");
                        }



                        printf("\nPress Any Key To Go Back To The Main Menu <<< \n");
                        _getch();
                        break;


                    case 3: // display by name
                        system("cls");

                        char name[30];
                        printf("\nPlease, Enter Name = ");
                        scanf("%s", name);

                        int name_exist = 0;
                        for(counter=0;counter<max_no_of_employess;counter++)
                        {
                            if(strcmp(name, dynamic_array[counter].name) == 0)
                            {
                                name_exist = 1;
                                printf("\nMatching ID Found ....\n");
                                printf("\n---------------------------------------------------\n");
                                printf("\nEmployee ID = %d\n", dynamic_array[counter].id);
                                printf("\nEmployee Name = %s\n", dynamic_array[counter].name);
                                printf("\nEmployee Age = %d\n", dynamic_array[counter].age);
                                printf("\n---------------------------------------------------\n");
                                break;
                            }
                        }

                        if(name_exist == 0)
                        {
                            printf("\nThere is no matching name ....\n");
                        }



                        printf("\nPress Any Key To Go Back To The Main Menu <<< \n");
                        _getch();
                        break;



                    case 4:
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
