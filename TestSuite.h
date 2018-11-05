#ifndef TEST_SUIT_H
#define  TEST_SUIT_H
#include <iostream>
#include "LinkedListOfInts.h"
class TestSuite{
    public:
        void runTests();
        void printVector();
        void printStatus();
        bool testElement(int expected, int recived);
        bool TestElementOrder(std::vector<int> vec, int arr[],int size);
    private:
        LinkedListOfInts* myList = new LinkedListOfInts;
};
#endif