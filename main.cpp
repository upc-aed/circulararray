#include <iostream>
#include "circulararray.h"
#include "tester.h"

using namespace std;

int main() {
    CircularArray<int>* array = new CircularArray<int>(7);
    ASSERT(array->is_empty() == true, "The function is_empty is not working");
    ASSERT(array->size() == 0, "The function size is not working");
    array->push_back(6);
    array->push_back(3);
    array->push_back(7);
    array->push_back(8);
    array->push_back(1);
    ASSERT(array->is_empty() == false, "The function is_empty is not working");
    ASSERT(array->is_full() == false, "The function is_full is not working");
    ASSERT(array->size() == 5, "The function size is not working");
    array->pop_front();
    array->pop_back();
    array->push_front(10);
    array->push_front(2);    
    array->insert(4, 0);
    array->insert(15, 2);
    ASSERT(array->to_string() == "4 2 15 10 3 7 8 ", "The function push_front is not working");
    ASSERT(array->is_full() == true, "The function is_full is not working");
    array->push_back(20); 
    ASSERT(array->is_full() == false, "The function resize is not working");

    CircularArray<int>* array2 = array->reverse();
    ASSERT(array2->to_string() == "15 10 8 7 4 3 2 ", "The function reverse is not working"); 
    array2->clear();  
    ASSERT(array2->size() == 0, "The function clear is not working"); 

    delete array;    

    return 0;
}