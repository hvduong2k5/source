#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "linkedlist.h"

class Dictionary
{
private:
    LinkedList *array_list;

public:
    Dictionary();
    void read_file(const QString );
};

#endif // DICTIONARY_H
