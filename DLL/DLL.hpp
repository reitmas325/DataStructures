/**
  * @file    DLL.hpp
  * @version 2.0
  * @date    17/07/2019
  * @author  Zamora Ramírez Oswaldo Rafael
  * @brief   API de una DLL de tipos dinamicos
*/

#ifndef DLL_DLL_HPP
#define DLL_DLL_HPP

#include "Node.hpp"

template <class Item>
class DLL{
private:
    Node<Item>* first;
    Node<Item>* last;
    Node<Item>* cursor;
    size_t len;

    Node<Item>* GetFirst(){ return first;}
    Node<Item>* GetLast(){ return last;}
    Node<Item>* GetCursor(){ return cursor;}
    size_t GetLen(){ return len;}

    void SetFirst(Node<Item>* _first){first = _first;}
    void SetLast(Node<Item>* _last){last = _last;}
    void SetCursor(Node<Item>* _cursor){cursor = _cursor;}
    void SetLen(size_t _len){ len = _len;}

    void lenUp(){++len;}
    void lenDown(){--len;}
public:
    DLL();

    virtual ~DLL();

    //Insert
    bool InsertFront(Item _data);
    bool InsertBack(Item _data);
    bool InsertAfter(Item _data);
    bool InsertBefore(Item _data);

    //Remove
    bool Remove(Item* _data_back);
    bool RemoveFront(Item* _data_back);
    bool RemoveBack(Item* _data_back);
    bool RemoveAfter(Item* _data_back);
    bool RemoveBefore(Item* _data_back);

    //Peek
    bool Peek(Item* _data_back);

    //Cursor
    void CursorFirst();
    void CursorLast();
    void CursorNext();
    void CursorPrev();

    //Empty
    bool IsEmpty(){return GetLen() == 0;}
    void MakeEmpty();

    //Len
    size_t Len(){ return GetLen();}

    //Search
    bool FindIf(Item _key, bool (*cmp)(Item,Item));
    bool Search(Item _key, bool (*cmp)(Item,Item));

    //Traverse
    void TraverseBool(bool (*func)(Item));
    void TraverseVoid(void (*func)(Item));
};

#endif //DLL_DLL_HPP
