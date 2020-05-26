#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    //CONSTRUCTORS//

    ///////////////////////
    //Default constructor//
    ///////////////////////

    //-------------------//

//    List L;

    //-------------------//

    //////////////////////////////////////////////////////////////
    //Parameterized constructor, all elements initialized to 1.0//
    //////////////////////////////////////////////////////////////

    //-------------------//

//    int arr_size;
//    cout
//        <<"Enter size of the array: ";
//    cin
//        >>arr_size;
//    List L(arr_size);

    //-------------------//


    /////////////////////////////
    //User-specific constructor//
    /////////////////////////////


    //-------------------//

    int arr_size;
    cout
        <<"Enter size of the array: ";
    cin
        >>arr_size;

    double *new_arr = new (nothrow) double [arr_size];
    List L(arr_size,new_arr); //- user-specific initialization
    delete[] new_arr;

    //-------------------//


    ////////////////////
    //Copy constructor//
    ////////////////////


    //-------------------//

//    int arr_size;
//    cout
//        <<"Enter size of the array: ";
//    cin
//        >>arr_size;
//    double *new_arr = new (nothrow) double [arr_size];
//    List Example(arr_size,new_arr);
//    List L(Example); //- user-specific initialization
//    delete[] new_arr;

    //-------------------//


    //Adds an element to the end of the array, then prints the array
    L.addElement();
    //Checks whether the array is empty
    L.isEmpty();
    //Accesses the array, returns the value of the accessed element
    //Returns the size of the array
    cout
        <<"Size of the array: "
        <<L.getSize()
        <<cout;
    //Prints the array
    L.Print();
    //Deletes the element at the entered position - move everything after it
    cout
        <<"Deleting one element"
        <<endl;
    L.deleteElement(L.getAccess());
    //Inserts new element at the entered position - move everything after it
//    cout
//        <<"Inserting one element"
//        <<endl;
//    L.insertElement(L.getAccess());

    cout
        <<"Size of the array: "
        <<L.getSize()
        <<cout;

    return 0;
}
