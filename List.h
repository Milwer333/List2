#ifndef LIST_H
#define LIST_H

#include<iostream>
using namespace std;

class List
{
private:
    int size;
    double *arr,*temp_arr,value;

public:
    //Constructors
    List();
    List(int);
    List(int,double*);
    List(const List &c);
    ~List();

    //Size Operations
    int getSize()const
    {
        return size;
    }
    void setSize(int new_size)
    {
        size = new_size;
    }

    //Methods
    void addElement();
    void isEmpty();
    int getAccess();
    void Print();
    void insertElement(int);
    void deleteElement(int);

};
#endif // LIST_H
