#ifndef LINKEDLIST_H
#define LINKEDLIST_H


class LinkedList
{
private:
    Word *head;
    Word *tail;
    int size;
public:
    LinkedList();


    void addToList(Word *data);
    void printList();

   // void insertAtBeginning(T data);
    //void insertAtEnd(T data);
    //void insertAtPosition(T data, int position);
   // void deleteAtBeginning();
   // void deleteAtEnd();
   // void deleteAtPosition(int position);
    bool search(T data);
};

#endif // LINKEDLIST_H
