#include "TestSuite.h"
void TestSuite::runTests(){
    int* exp;

    std::cout<<"\n\nStarting test suite... \n\n";
    std::cout<<"Test 1, Empty List:\n";
    std::cout<<"Expected Size = 0: ";
    if(testElement(0, myList->size())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected isEmpty = True: ";
    if(testElement(1, myList->isEmpty())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected order of elements: ";
    exp =new int [0]{};
    if(TestElementOrder(myList->toVector(),exp,0)){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    delete[] exp;


    std::cout<<"\nTest 2, Single element added front list\n";
    myList->addFront(1);
    std::cout<<"Expected size = 1: ";
    if(testElement(1, myList->size())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected isEmpty = False: ";
    if(testElement(0, myList->isEmpty())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected order of elements: ";
    exp =new int [1]{1};
    if(TestElementOrder(myList->toVector(),exp,1)){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    delete[] exp;
    std::cout<<"Search for valued: ";
    if(testElement(1, myList->search(1))){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}

    std::cout<<"\nTest2.1, Single element remove front\n";
    std::cout<<"Expected method sucess: ";
    if(testElement(1, myList->removeFront())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected size = 0: ";
    if(testElement(0, myList->size())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected isEmpty = True: ";
    if(testElement(1, myList->isEmpty())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected order of elements: ";
    exp =new int [0]{};
    if(TestElementOrder(myList->toVector(),exp,0)){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    delete[] exp;

    
    std::cout<<"\nTest2.2, Single element remove back\n";
    //reset myList;
    delete myList;
    myList =new LinkedListOfInts();
    myList->addFront(1);
    std::cout<<"Expected method sucess: ";
    if(testElement(1, myList->removeBack())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected size = 0: ";
    if(testElement(0, myList->size())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected isEmpty = True: ";
    if(testElement(1, myList->isEmpty())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected order of elements: ";
    exp = new int[0]{};
    if(TestElementOrder(myList->toVector(),exp,0)){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    delete[] exp;


    
    std::cout<<"\nTest 3, Multiple elements (4) added to front of list\n";
    //reset myList;
    delete myList;
    myList =new LinkedListOfInts();
    myList->addFront(0);
    myList->addFront(1);
    myList->addFront(2);
    myList->addFront(3);
    std::cout<<"Expected size = 4: ";
    if(testElement(4, myList->size())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected isEmpty = False: ";
    if(testElement(0, myList->isEmpty())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected order of elements: ";
    exp =new int [4]{3, 2, 1, 0};
    if(TestElementOrder(myList->toVector(),exp,1)){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    delete[] exp;
    std::cout<<"Search for all values: ";
    bool results = true;
    for(int i=0; i<4; i++){
        results && testElement(true, myList->search(i));
    }
    if(results){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}


    std::cout<<"\nTest 4, Single element added to back of list\n";
    //reset myList;
    delete myList;
    myList =new LinkedListOfInts();
    myList->addBack(1);
    std::cout<<"Expected size = 1: ";
    if(testElement(1, myList->size())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected isEmpty = False: ";
    if(testElement(0, myList->isEmpty())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected order of elements: ";
    exp =new int [1]{1};
    if(TestElementOrder(myList->toVector(),exp,1)){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    delete[] exp;
    std::cout<<"Search for valued: ";
    if(testElement(1, myList->search(1))){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}

    std::cout<<"\nTest4.1, Single element remove front\n";
    std::cout<<"Expected method sucess: ";
    if(testElement(1, myList->removeFront())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected size = 0: ";
    if(testElement(0, myList->size())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected isEmpty = True: ";
    if(testElement(1, myList->isEmpty())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected order of elements: ";
    exp =new int [0]{};
    if(TestElementOrder(myList->toVector(),exp,0)){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    delete[] exp;

    
    std::cout<<"\nTest4.2, Single element remove back\n";
    //reset myList;
    delete myList;
    myList =new LinkedListOfInts();
    myList->addBack(1);
    std::cout<<"Expected method sucess: ";
    if(testElement(1, myList->removeBack())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected size = 0: ";
    if(testElement(0, myList->size())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected isEmpty = True: ";
    if(testElement(1, myList->isEmpty())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected order of elements: ";
    exp = new int[0]{};
    if(TestElementOrder(myList->toVector(),exp,0)){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    delete[] exp;


    
    std::cout<<"\nTest 5, Multiple elements (4) added to back of list\n";
    //reset myList;
    delete myList;
    myList =new LinkedListOfInts();
    myList->addBack(0);
    myList->addBack(1);
    myList->addBack(2);
    myList->addBack(3);
    std::cout<<"Expected size = 4: ";
    if(testElement(4, myList->size())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected isEmpty = False: ";
    if(testElement(0, myList->isEmpty())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected order of elements: ";
    exp =new int [4]{0, 1, 2, 3};
    if(TestElementOrder(myList->toVector(),exp,1)){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    delete[] exp;
    std::cout<<"Search for all values: ";
    results = true;
    for(int i=0; i<4; i++){
        results && testElement(true, myList->search(i));
    }
    if(results){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}

    std::cout<<"\nTest 6, Multiple elements (4) added to both back and fron of list\n";
    //reset myList;
    delete myList;
    myList =new LinkedListOfInts();
    myList->addBack(1);
    myList->addFront(2);
    myList->addBack(0);
    myList->addFront(3);
    std::cout<<"Expected size = 4: ";
    if(testElement(4, myList->size())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected isEmpty = False: ";
    if(testElement(0, myList->isEmpty())){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    std::cout<<"Expected order of elements: ";
    exp =new int [4]{3, 2, 1, 0};
    if(TestElementOrder(myList->toVector(),exp,1)){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}
    delete[] exp;
    std::cout<<"Search for all values: ";
    results = true;
    for(int i=0; i<4; i++){
        results && testElement(true, myList->search(i));
    }
    if(results){std::cout<<"PASSED\n";}else{std::cout<<"FAILED\n";}

    


    
}
void TestSuite::printVector(){
    std::cout<<"Printing values...\n";
    std::vector<int> myVector = myList->toVector();
    for(unsigned i=0; i<myVector.size(); i++){
        std::cout<<myVector[i]<<"\n";
    }
    std::cout<<"Printed values\n";
}
void TestSuite::printStatus(){
    std::cout<<"Size of List: "<<myList->size()<<"\n";
    std::cout<<std::boolalpha<<"is List empty: "<<myList->isEmpty()<<"\n";
    printVector();
}
bool TestSuite::testElement(int expexted, int recived){
    if(expexted==recived){
        return true;
    }
    else{
        return false;
    }
}
bool TestSuite::TestElementOrder(std::vector<int> vec, int arr[],int size){
    if(size==0){
        return vec.empty();
    }
    for(int i = 0; i<size; i++){
        if(vec[i]!=arr[i]){
            return false;
        }
    }
    return true;
}