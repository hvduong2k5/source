#ifndef WORD_H
#define WORD_H
#include<QString>
//#include "linkedlist.h"
using namespace std;
class LinkdedList;
class Word
{
private:
    Word *left,*right;
    QString word;
    QString part_of_speech;
    QString *example_sentence;
    QString *meaning;
    QString ipa;
public:
    friend class LinkedList;
    Word(const QString = "");
    ~Word();
};

#endif // WORD_H
