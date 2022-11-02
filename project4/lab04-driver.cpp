// File name: lab04-driver.cpp
// Author: Scott Kang
// VUnetid: kangk
// Email: kyung.ho.kang@vanderbilt.edu
// Class: CS2201
// Assignment Number: #4
// Honor statement: I have not given or received unauthorized aid on this assignment
// Description: The file contains test cases for the each method written in lab04.cpp in order to check
// that the methods are working correctly.
// Last Changed: 2019 10/15

// Recursive programming lab

#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>
#include <cmath>
#include "lab04.h"


void printList(NodePtr head);


int main ()
{

    std::cout << "\nStarting tests...\n" << std::endl;


    // INSTRUCTIONS:
    // Uncomment segments of test code below as you implement the corresponding functions.
    // To uncomment a segment of code, highlight it with your mouse and hit Ctrl-/.
    // You should add tests of your own to fully test the functions.

//    //************************************************************************
    std::cout << "Testing sumArray: ";
    int test[5] = {1, 2, 3, 4, 5};
    if (sumArray(test,5) == 15)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing sumArray: ";

    std::cout << "Testing sumArray: ";
    int test1[1];
    if (sumArray(test1,0) == 0)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing sumArray: ";



//    //************************************************************************
    std::cout << "Testing member: ";
    int tmp[10] = {12, 13, 21, 30, 2, 55, 1000, 5, 201, 789};
    if (member(55, tmp, 10))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing member: ";
    int tmp1[1];
    if (!member(55, tmp1, 1))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing member: ";
    int temp2[1] = {55};
    if (member(55, temp2, 1))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

//
//    //************************************************************************
    std::cout << "Testing isPalindrome: ";
    std::string my_str("abcdeedcba");
    if (isPalindrome(my_str))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing isPalindrome: ";
    std::string my_str1("abcdedcba");
    if (isPalindrome(my_str1))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing isPalindrome: ";
    std::string my_str2("book");
    if (!isPalindrome(my_str2))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;


//    //************************************************************************
    std::cout << "Testing harmonicSum: ";
    double epsilon = 0.000000001;
    if (std::abs(harmonicSum(20) - double(55835135)/double(15519504)) < epsilon)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing harmonicSum: ";
    std::cout << "the first 4 Harmonic sums are:" << std::endl;
    for (size_t i=1; i<5; i++) {
        std::cout << harmonicSum(i) << std::endl;
    }

//
//    //************************************************************************
    std::cout << "Testing addStar: ";
    if (addStar("abc")=="a*b*c")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing addStar: ";
    if (addStar("") == "")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing addStar: ";
    if (addStar("a") == "a")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

//
//    //************************************************************************
    std::cout << "Testing replace: ";
    size_t k3 = replace(2, 3, tmp, 10);
    if (k3 == 1 && tmp[4] == 3)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

//    //************************************************************************
    std::cout << "Testing gcd: ";
    if (gcd(24,30) == 6)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing gcd: ";
    if (gcd(2,2) == 2)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing gcd: ";
    if (gcd(30,24) == 6)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

//
//    //************************************************************************
    std::cout << "Testing helloWorldRepeat: ";
    if (helloWorldRepeat(3) == "Hello Hello Hello World World World")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail " + helloWorldRepeat(3) << std::endl;
//
//
//    //************************************************************************
    std::cout << "Testing convert2Binary: ";
    if (convert2Binary(25) == "11001")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing convert2Binary: ";
    std::cout << "The first ten binary numbers are: " << std::endl;
    for (size_t j=0; j<10; j++)
    {
        std::cout << j << " = " << convert2Binary(j) << std::endl;
    }
    std::cout << std::endl;
//
//    //************************************************************************
    std::cout << "Testing printPattern: ";
    std::cout << "A size 4 pattern: " << std::endl;
    printPattern(4);
    std::cout << std::endl;

    std::cout << "Testing printPattern: ";
    std::cout << "A size 1 pattern: " << std::endl;
    printPattern(1);
    std::cout << std::endl;

    std::cout << "Testing printPattern: ";
    std::cout << "A size 2 pattern: " << std::endl;
    printPattern(2);
    std::cout << std::endl;


//
//
//    //************************************************************************
    std::cout << "Testing pattern2: ";
    if (pattern2(4) == "{++}")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail " << std::endl;

    std::cout << "Testing pattern2: ";
    if (pattern2(3) == "[*]")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail " << std::endl;

    std::cout << "Testing pattern2: ";
    if (pattern2(2) == "++")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail " << std::endl;

    std::cout << "Testing pattern2: ";
    if (pattern2(1) == "*")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail " << std::endl;

    std::cout << "Testing pattern2: ";
    if (pattern2(7) == "[[[*]]]")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail " << std::endl;
//
//
//    //************************************************************************
    std::cout << "Testing reverseArray: ";
    int tmp2[10] = {789, 201, 5, 1000, 55, 2, 30, 21, 13, 12};
    int tmp3[10] = {12, 13, 21, 30, 2, 55, 1000, 5, 201, 789};
    reverseArray(tmp2, 0, 9);
    bool okay = true;
    for (int k=0; k<10; k++)
    {
        if (tmp2[k] != tmp3[k])
            okay = false;
    }
    if (okay)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

//
    //************************************************************************
    std::cout << "Testing arrayInitialize: ";
    int testI[100];
    for (int k=0; k<100; k++)
        testI[k] = 0;
    arrayInitialize(testI, 5, 20, 80);
    bool OK = true;
    for (int k=0; k<20; k++)
        if (testI[k]!=0)
            OK = false;
    for (int k=20; k<=80; k++)
        if (testI[k]!=5)
            OK = false;
    for (int k=81; k<100; k++)
        if (testI[k]!=0)
            OK = false;
    if (OK)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;


//
    //************************************************************************
    std::cout << "Testing binomialCoeff: ";
    if (binomialCoeff(4,2)==6)
        std::cout << "Pass " << std::endl;
    else
        std::cout << "Fail" << std::endl;
//
//
//    //************************************************************************
    std::cout << "Testing count2: ";
    if (count2(212)==2)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing count2: ";
    if (count2(11)==0)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing count2: ";
    if (count2(222212)==8)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

//
//    //************************************************************************
    std::cout << "Testing relatedSquares: ";
    int arr1[4] = {3, 9, 81, 6561};
    if (relatedSquares(arr1, 4)) {
        std::cout << "Pass" << std::endl;
    } else {
        std::cout << "Fail" << std::endl;
    }

    std::cout << "Testing relatedSquares: ";
    int lol1[1] = {3};
    if (!relatedSquares(lol1, 1)) {
        std::cout << "Pass" << std::endl;
    } else {
        std::cout << "Fail" << std::endl;
    }


//
//
//    //************************************************************************
    std::cout << "Testing countSubs: ";
    if (countSubs("catcowcat","cat")==2)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing countSubs: ";
    if (countSubs("bobobob","bob")==2)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;


    //************************************************************************
    std::cout << "Testing moveXs: ";
    if (moveXs("xxre")=="rexx")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing moveXs: ";
    if (moveXs("")=="")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing moveXs: ";
    if (moveXs("xx")=="xx")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

//
//    //************************************************************************
    std::cout << "Testing newton: ";
    if (std::abs(newton(33333, 10) - std::sqrt(33333)) < 0.00001)   // test that Newton's approximate is within 0.00001 of actual
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;


//    //************************************************************************
    std::cout << "Testing uniqueSteps: ";
    if (uniqueSteps(4) == 5)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail " << uniqueSteps(4)  << std::endl;

//    //************************************************************************
    std::cout << "Testing palindrome_able: ";
    if (palindrome_able("carrace"))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing palindrome_able: ";
    if (palindrome_able("stetes"))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;
    std::cout << "Testing palindrome_able: ";

    if (!palindrome_able("lmao"))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing palindrome_able: ";
    if (palindrome_able("ecarrac"))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::cout << "Testing palindrome_able: ";
    if (!palindrome_able("ecarriac"))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    //************************************************************************
    // create a linked list
    NodePtr head = nullptr;
    NodePtr tmpPtr;
    size_t cnt = 0;
    for (int k=0; k<20; k++)
    {
        tmpPtr = new Node;
        assert(tmpPtr);
        tmpPtr->value = ((k%3)==0) ? 0 : k%10;
        if (tmpPtr->value != 0) cnt++;
        tmpPtr->next = head;
        head = tmpPtr;
    }


//    //************************************************************************
    std::cout << "Testing numOfTerms: ";
    if (numOfTerms(head) == cnt)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;



    //************************************************************************
    // add some zeros at the end
    for (tmpPtr = head; tmpPtr->next!=nullptr; tmpPtr=tmpPtr->next)
    {} // nothing to do
    for (size_t i=0; i<6; i++) {
        NodePtr newPtr = new Node;
        newPtr->value = 0;
        newPtr->next = tmpPtr->next;
        tmpPtr->next = newPtr;
    }

  //************************************************************************
    std::cout << "Testing normalizeBigNum: ";
    std::cout << "These two lists should be identical except for zeros at the end" << std::endl;
    printList(head);
    normalizeBigNum(head);
    printList(head);


    // free the linked list
    while (head != nullptr)
    {
        NodePtr tmp7 = head;
        head = head->next;
        delete tmp7;
    }


    //************************************************************************
    // create a new linked list
    NodePtr head2 = nullptr;
    NodePtr tmpPtr2;
    for (int k=3; k>0; k--)
    {
        tmpPtr2 = new Node;
        assert(tmpPtr2);
        tmpPtr2->value = k;
        tmpPtr2->next = head2;
        head2 = tmpPtr2;
    }

//    //************************************************************************
    std::cout << "Testing echo2: ";
    if (echo2(head2) == "1 2 3 3 2 1 ")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail " << echo2(head2) << std::endl;


    // free the linked list
    while (head2 != nullptr) {
        NodePtr tmp7 = head;
        head2 = head2->next;
        delete tmp7;
    }




#if CHALLENGE==1

//    std::cout << "Challenge Test: These two lists should be the reverse of each other:" << std::endl;
//    // free the linked list
//    while (head != nullptr)
//    {
//        NodePtr tmp = head;
//        head = head->next;
//        delete tmp;
//    }
//    // give the list new data
//    for (int k = 0; k<20; k++)
//    {
//        tmpPtr = new Node;
//        tmpPtr->value = ((k % 2) == 0) ? -k : k;
//        if (tmpPtr->value != 0) cnt++;
//        tmpPtr->next = head;
//        head = tmpPtr;
//    }
//
//    printList(head);
//    head=reverseList(head);
//    printList(head);
//    std::cout << std::endl;
//
//    // free the linked list
//    while (head != nullptr)
//    {
//        NodePtr tmp = head;
//        head = head->next;
//        delete tmp;
//    }

#endif



  std::cout << "\n\nDone testing" << std::endl;
  std::cout << "press enter to exit";
  std::cin.get();



    return 0;
}


// print a space-separated list of numbers from a linked-list
void printList(NodePtr head)
{

    std::cout << "contents of list: ";
    for (NodePtr cur = head; cur != nullptr; cur = cur->next) {
        std::cout << cur->value << " ";
    }
    std::cout << " Done" << std::endl;

}