#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <QString>
#include "linkedlist.h"
class Dictionary
{
private:
    LinkedList *array_list;

public:
    Dictionary();
    void read_file(QString );
};

#endif // DICTIONARY_H
