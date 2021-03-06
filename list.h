#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <string>
#include <windows.h>

#define First(L) ((L).First)
#define Last(L) ((L).Last)
#define Next(P) P->next
#define Info(P) P->info
#define Prev(P) P->prev

using namespace std;

struct infotype
{
    int ID;
    string name;
    string location;
};

typedef struct elemenList *address;
struct elemenList
{
    infotype info;
    address next,prev;
};

struct List
{
    address First,Last;
};

void createList(List &);

address alokasi(infotype );
void dealokasi(address &);

void insertFirst(List &, address );
void insertLast(List &, address );
void insertAfter(List &, address , address );

void deleteFirst(List &, address &);
void deleteLast(List &, address &);
void deleteAfter(List &, address &, address &);

void deletee(List &, address &);

address findElm(List, infotype );


#endif // LIST_H_INCLUDED
