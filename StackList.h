#ifndef STACKLIST_H
#define STACKLIST_H
#include "LinkList.h"

class StackList :public LinkList
{
public:
    StackList();
    void remove ();

    void insert (void *info, int num);

    void append (void * v);
    void *find (int){}
    void display ( );
private:
    int node_num;
};

#endif // STACKLIST_H
