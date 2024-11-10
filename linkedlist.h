#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include"word.h"
class Dictionary;
class LinkedList
{
private:
    Word *head;
    Word *tail;
    Word *body;//Word chinh giua
    int size;
public:
    LinkedList();
    ~LinkedList();
    friend class Dictionary;
    void addToList(Word *data);
    void printList();

   // void insertAtBeginning(T data);
    //void insertAtEnd(T data);
    //void insertAtPosition(T data, int position);
   // void deleteAtBeginning();
   // void deleteAtEnd();
   // void deleteAtPosition(int position);
   // bool search(QString );
};

#endif // LINKEDLIST_H
