#ifndef LINKLIST_H
#define LINKLIST_H

class Node
{
public:
    explicit Node (void *v)
    {
        info = v;
        next = 0;
    }
    void *get_info ( ) {return info;}

    void put_next (Node *n) {next = n;}
    Node *get_next ( ) {return next;}

private:
    void *info;
    Node *next;
};

class LinkList
{
public:
    LinkList();
    void appendNode(Node* nd);
    void insertNode(Node* nd);
    void displayListData();
    void deleteNode(char* info);
protected:
    Node* head;
};


#endif // LINKLIST_H
