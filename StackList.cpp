#include "StackList.h"
#include "string.h"
#include <iostream>

StackList::StackList( )
{
    node_num = 0;
}
void StackList::remove ()
{
    if( 0 != head)
    {
        deleteNode(static_cast<char*> (head->get_info()));
    }
    else
    {
        std::cout << "\n ---------Linked list is empty, nothing to delete-------------";
    }
}

void StackList::insert (void *info, int num)
{
    node_num = num;
    Node* nd = new Node(info);
    LinkList::insertNode(nd);
}

void StackList::append (void * v)
{
    insert (v, node_num + 1);
}
