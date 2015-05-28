#include <iostream>
#include <string.h>
#include "StackList.h"
using namespace std;

int main(int argc, char *argv[])
{
    int choice(0);
    Node* nd(0);
    StackList list;

    do
    {
        cout << "\n \n \n Enter your choice \n 1. Push node \n 2. Pop node \n 3. Display data \n 4. Exit \n choice : " ;
        cin>> choice;

        switch(choice)
        {
            case 1:
            {
                char name[256];
                cout << "\n Enter Information to insert: ";
                cin >> name;
                char* info = new char[256];
                strcpy(info, name);
                list.append(info);
            }
            break;
            case 2:
            {
                char name[256];
                list.remove();
            }
            break;
            case 3:
            {
                list.displayListData();
            }
            break;
            case 4:
            default:
            break;
        }
    }while (choice <4 && choice >0);
    return 0;
}
