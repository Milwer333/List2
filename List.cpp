#include "List.h"

//Default constructor, that creates an empty List
List::List()
{
    arr = new (nothrow) double [size];

    arr[0] = 0.0;

    size = 1;
    Print();

}
//Parameterized constructor, that creates a List of given length, with all elements initialized to 1.0
List::List(int arr_size)
{
    size = arr_size;

    arr = new (nothrow) double [size];

    for(int i=0; i<arr_size; i++)
    {
        arr[i] = (1.0);
    }
    Print();
}
//Parameterized constructor, that creates a List of given length, with each element initialized with the value of users choosing
List::List(int arr_size, double *new_arr)
{
    size = arr_size;

    arr = new (nothrow) double [size];

    for(int i=0; i<size; i++)
    {
        cout
            <<"Arr#"
            <<i
            <<": ";
        cin
            >>arr[i];
    }
    cout
        <<endl;
}
//Copy constructor
List::List(const List& prev)
{
    size = prev.size;

    for(int i=0; i<size; i++)
    {
        this->arr[i] = prev.arr[i];
    }

}
//Destructor, that releases the memory used for dynamic array allocation
List::~List()
{
    delete[] arr;
}
void List::addElement()
{
    double new_element;
    cout
        <<"Enter a new element: ";
    cin
        >>new_element;

    double *temp_arr = new (nothrow) double [size+1];

    for(int i=0; i<size; i++)
    {
        temp_arr[i] = arr[i];
    }

    size++;

    delete[]arr;
    arr = temp_arr;

    arr[size-1] = new_element;

    Print();
    cout
        <<endl;
}
void List::isEmpty()
{
    if(size == 0)
    {
        cout
            <<"The list is empty."
            <<endl;
    }
    else
    {
        cout
            <<"The list is NOT empty."
            <<endl;
    }
}
int List::getAccess()
{
    int position;
    cout
        <<"Which element do you want to access? ";
    cin
        >>position;

    while(cin.fail() || position < 0 || position >= size)
    {
        cin.clear();
        cin.ignore();
        cout
            <<"Wrong input, try again."
            <<endl;
        cin
            >>position;
    }

    cout
        <<"Arr#"
        <<position
        <<": "
        <<arr[position]
        <<"\n\n";

    return position;

}
void List::Print()
{
    for(int i=0;i<size;i++)
    {
        cout
            <<"Arr#"
            <<i
            <<": "
            <<arr[i]
            <<endl;
    }
}
void List::insertElement(int position)
{
    double new_input;
    temp_arr = new (nothrow) double [size+1];

    for(int i=0; i<position; i++)
    {
        temp_arr[i]=arr[i];
    }
    cout
        <<"Enter new value: ";
    cin
        >>new_input;
    temp_arr[position]=new_input;
    for(int i=position; i<size ;i++)
    {
        temp_arr[i+1]=arr[i];
    }

    size++;

    delete[]arr;
    arr = temp_arr;

    Print();
}
void List::deleteElement(int position)
{
    temp_arr = new (nothrow) double [size-1];

    for(int i=0; i<position; i++)
    {
        temp_arr[i]=arr[i];
    }
    for(int i=position; i<size ;i++)
    {
        temp_arr[i]=arr[i+1];
    }

    size--;

    delete[]arr;
    arr = temp_arr;

    Print();
}
