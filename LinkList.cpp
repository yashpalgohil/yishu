#include <iostream>
#include <string.h>
#include "LinkList.h"

using namespace std;

LinkList::LinkList()
    : head(0)
{

}
void LinkList::appendNode(Node *nd)
{
    if( 0 == head )
    {
        head = nd;
    }
    else
    {
        Node* append_info = head;
        while( append_info->get_next()!= 0 )
        {
            append_info = append_info->get_next();
        }

        append_info->put_next(nd);
    }
}

void LinkList::insertNode(Node *nd)
{
    if( 0 == head )
    {
        head = nd;
    }
    else
    {
        nd->put_next(head);
        head = nd;
    }
}

void LinkList::deleteNode(char *info)
{
    if( 0 != head)
    {
        if( !strcmp(static_cast<char*>(head->get_info()) , info))
        {
            Node* temp = head;
            char* info = static_cast<char*> (head->get_info());
            cout << "\n Item deleted:---- " << info << " --------------: successfull \n ";
            head = head->get_next();
            delete[] info;
            delete temp;
        }
        else
        {
            Node* delete_node = head->get_next();
            Node* previous_node = head;
            while( delete_node != 0)
            {
                if( !strcmp(static_cast<char*>(delete_node->get_info()) , info))
                {
                    previous_node->put_next(delete_node->get_next());
                    char* info = static_cast<char*> (delete_node->get_info());
                    cout << "\n Item deleted:---- " << info << " --------------: successfull \n ";
                    delete[] info;
                    delete delete_node;
                    break;
                }
                previous_node = delete_node;
                delete_node = delete_node->get_next();
            }
            cout << "\n ---------Item doesn't exist in the list-------------";
        }
    }
    else
    {
        cout << "\n ---------Linked list is empty, nothing to delete-------------";
    }
}

void LinkList::displayListData()
{
    Node* display_node = head;
    if( 0 != head )
    {
        cout << "\n -------------List contains below informaton-----------------------\n \n";
        while( display_node != 0)
        {
            cout << "\n" << static_cast<char*> (display_node->get_info()) ;
            display_node = display_node->get_next();
        }
    }
    else
    {
        cout << "\n ---------Linked list is empty-------------";
    }
}
