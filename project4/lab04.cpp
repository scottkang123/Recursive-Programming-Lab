// File name: lab04.cpp
// Author: Scott Kang
// VUnetid: kangk
// Email: kyung.ho.kang@vanderbilt.edu
// Class: CS2201
// Assignment Number: #4
// Honor statement: I have not given or received unauthorized aid on this assignment
// Description: The file contains code for functions that all use recursive method to complete the task.
// Last Changed: 10/15/2019
// Recursive programming lab


#include "lab04.h"
#include <string>
#include <iostream>


// NOTE: the functions in this file are not listed in any particular order.
// In particular, they are not listed easiest to hardest. You are not
// required to implement them in the order given, so jump around and do
// the easy ones, or the ones that make sense to you, first.

// NOTE: your implementation of these functions must be recursive.
// NO LOOPS ARE ALLOWED, except where permitted in the header comments.
// Please read the project spec for other restrictions.


//Task: compute the sum of an array of integers
//Pre: anArray is an array of 'size' integers, size is nonnegative
//Post: the sum of anArray[0]...anArray[size-1] is returned
// Additional requirement: This function must be done by dividing the array
//   in half and performing recursive calls on each half (as opposed to just
//   shrinking the size by one each time). Hint: use pointer arithmetic

int sumArray(int anArray[], size_t size) {

    if (size == 0) {
        return 0;
    } else if (size == 1) {
        return anArray[0];
    } else {
        size_t mid = size / 2;
        int add1 = sumArray(anArray, mid);
        int add2 = sumArray(anArray + mid, size - mid);
        return add1 + add2;
    }

}

//Task: determine if target is in the set
//Pre: set is an array of 'size' integers, size is nonnegative
//Post: true is returned if target is in the set, else false;
//  the set is unchanged

bool member(int target, const int set[], size_t size) {

    if (size == 0) {
        return false;
    } else {
        if (target == set[0]) {
            return true;
        } else {
            return member(target, set + 1, size - 1);
        }
    }
}


//Task: determine if a string is a palindrome
//Pre: str is a string object
//Post: returns true if str is a palindrome, otherwise returns false
//      The test is case insensitive [look up toupper() and
//      tolower()]. You do not need to worry about
//      trimming blanks from the ends of the string.
//Note: the empty string is a palindrome
bool isPalindrome(const std::string &str) {

    if (str.length() == 0) {
        return true;
    } else {
        size_t last = str.length() - 1;
        if (str[0] == str[last]) {
            return isPalindrome(str.substr(1, last - 1));
        } else {
            return false;
        }
    }

}

//Task: compute the sum of the first n harmonic terms
//Pre: n is a positive integer
//Post: the sum of the first n harmonic terms is returned.
// The harmonic series is 1 + (1/2) + (1/3) + (1/4) + ...
double harmonicSum(size_t n) {

    if (n == 0) {
        return 0;
    } else {
        return (1 / (double) n) + harmonicSum(n - 1);
    }
}

// Task: Given a string, compute recursively a new string where all the adjacent
//   chars are now separated by a "*".
// Pre: str is a string (may be empty).
// Post: a correctly starred string is returned.
// Examples:
//   addStar("hello") --> "h*e*l*l*o"
//   addStar("abc") --> "a*b*c"
//   addStar("ab") --> "a*b"

std::string addStar(const std::string &str) {

    if(str.length() == 0){
        return "";
    }
    if (str.length() == 1) {
        return str.substr(0);
    } else {
        return str.substr(0, 1) + "*" + addStar(str.substr(1));
    }

}

//Task: replace all occurrences of 'target' in the array 'numbers'
//      with 'replacement'
//Pre: 'numbers' is an array of 'size' integers, size is nonnegative
//Post: all occurrences of 'target' in 'numbers' have been replaced
//      with 'replacement'; the number of replacements performed is
//      returned to the caller.

size_t replace(int target, int replacement, int numbers[], size_t size) {

    if (size == 0) {
        return 0;
    } else {
        if (numbers[0] == target) {
            numbers[0] = replacement;
            return 1 + replace(target, replacement, numbers + 1, size - 1);
        } else {
            return replace(target, replacement, numbers + 1, size - 1);
        }
    }

}


// Task: compute the Greatest Common Divisor (GCD) of two nonnegative
//       integers using Euclid's formula:
//
// Euclid's method for computing the greatest common divisor (GCD) of two
// nonnegative integers a and b is as follows. Divide a and b to obtain the
// integer quotient q and remainder r, so that a = bq+r (if b = 0,
// then GCD(a, b) = a). Then GCD(a, b) = GCD(b, r). Replace a with b and
// b with r and repeat the procedure. Because the remainders are decreasing,
// eventually a remainder of 0 will result. The last nonzero remainder is
// the greatest common divisor of a and b.
//
// Pre: the parameters x & y are nonnegative
// Post: the GCD of x & y is returned


size_t gcd(size_t x, size_t y) {

    if (y == 0) {
        return x;
    } else {
        int r = x % y;
        return gcd(y, r);
    }

}

// Task: produce a string of num "Hello World"'s, where all the "Hello"'s precede
//   all the "World"'s. For example:
//   When num is 1, return "Hello World"
//   When num is 3, return "Hello Hello Hello World World World"
//   Note: there is only a single space between any two words, and there is
//   no space at the beginning or end of the string
// Pre: num is a nonnegative integer
// Post: the desired string is returned

std::string helloWorldRepeat(size_t num) {

    if (num == 1) {
        return "Hello World";
    } else {
        return "Hello " + helloWorldRepeat(num - 1) + " World";
    }

}


// Task: produce the binary representation of a decimal number
//   A decimal number is converted to binary by repeated
//   division by 2. For each division, keep track of the quotient
//   and remainder. The remainder becomes the low-order bit (rightmost
//   bit) of the binary representation. The higher-order bits are
//   determined by repeating the processes with the quotient.
//   The process stops when num is either zero or one.
// Pre: num is a nonnegative integer
// Post: the binary representation of num is produced and returned
//   as a string.

std::string convert2Binary(size_t num) {
    if (num == 0) {
        return "";
    } else {
        if (num % 2 == 0) {
            return convert2Binary(num / 2) + "0";
        } else {
            return convert2Binary(num / 2) + "1";
        }
    }
}

// Task: Print a pseudo hourglass pattern on the screen
// Pre: num is a positive integer
// Post: the desired pattern is displayed on cout
// You may use iteration anytime to print a single line of *'s, but
// must use recursion to complete the pattern.
// Example: a call to printPattern(4) should produce the
// pattern below (excluding the beginning and ending comment):
// Each & every line you print should end with a newline character.

void printPattern(size_t num) {
    if (num == 1) {
        std:: cout << "*" << std::endl;
    } else {
        for (size_t i = 0; i < num; i++) {
            std::cout << "*";
        }
        std::cout << std::endl;
        printPattern(num - 1);
        for (size_t i = 0; i < num; i++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

// Task: Return a string of num characters that are made up of balanced curly
//   braces or square brackets with either "*" or "++" in the center.
// Pre: num is a positive integer
// Post: the desired pattern is returned as a string
// Note: no iteration is allowed on this function
// Examples: num     string returned
//           1       "*"
//           2       "++"
//           3       "[*]"
//           4       "{++}"
//           5       "[[*]]"
//           6       "{{++}}"
//           7       "[[[*]]]"

std::string pattern2(size_t num) {

    if (num == 1) {
        return "*";
    } else if (num == 2) {
        return "++";
    } else {
        if (num % 2 == 0) {
            return "{" + pattern2(num - 2) + "}";

        } else {
            return "[" + pattern2(num - 2) + "]";
        }
    }
}

// Task: reverse the contents of a[first]...a[last]
// Pre: 'a' is an array of at least 'last'+1 integers, first&last are nonnegative
// Post: the elements a[first]...a[last]have been reversed.

void reverseArray(int a[], size_t first, size_t last) {

    if (first > last) {
        return;
    } else {
        int temp = a[first];
        a[first] = a[last];
        a[last] = temp;
        reverseArray(a, first + 1, last - 1);
    }

}

// Task: initialize all elements of the array between indices lb and ub to the
//   given value, including the elements at lb & ub
// Note: lb = lower bound, ub = upper bound
// Pre: lb and ub are valid indices into the array a [the actual size of the
//   array is unknown]
// Post: the array elements in the segment a[lb..ub] have been set to value
// Additional requirement: This function must be done by dividing the array
//   segment in half and performing recursive calls on each half (as opposed
//   to just shrinking the array bound by one each time)

void arrayInitialize(int a[], int value, size_t lb, size_t ub) {

    if (lb > ub) {
        return;
    } else {
        int mid = (lb + ub) / 2;
        a[mid] = value;
        arrayInitialize(a, value, lb, mid - 1);
        arrayInitialize(a, value, mid + 1, ub);
    }

}


// Task: Compute the Binomial Coefficient using Pascal's Triangle.
// The Binomial Coefficient B(n, r) is the coefficient of the term x^r in the
// binormial expansion of (1 + x)^n.
// For example, B(4, 2) = 6 because (1+x)^4 = 1 + 4x + 6x^2 + 4x^3 + x^4.
// The Binomial Coefficient can be computed using the Pascal Triangle formula:
//	B(n, r) = 1                          if r = 0 or r = n
//	B(n, r) = B(n-1, r-1) + B(n-1, r)    otherwise
// Pre: r & n are non-negative, and r<=n
// Post: the correct coefficient is returned

size_t binomialCoeff(size_t n, size_t r) {

    if (r == 0 || r == n) {
        return 1;
    } else {
        return binomialCoeff(n - 1, r - 1) + binomialCoeff(n - 1, r);
    }

}

// Task: Given a non-negative int n, compute recursively (no loops) the count
//   of the occurrences of 2 as a digit, except that a 2 with another 2
//   immediately to its left counts double, so 2212 yields 4, and 222212
//   yields 8. Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6),
//   while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
// Pre: n is non-negative
// Post: count of the occurrences of 2 is returned (with doubling as appropriate)
// Examples:
//   count2(2) --> 1
//   count2(212) --> 2
//   count2(2212) --> 4
//   count2(222212) --> 8

size_t count2(size_t n) {

    if (n == 0) {
        return 0;
    } else {
        if (n % 10 == 2) {
            if (n % 100 == 22) {
                return count2(n / 10) + 2;
            } else {
                return count2(n / 10) + 1;
            }
        } else {
            return count2(n / 10);
        }
    }
}

// Task: determine if each number in the array (except for the first element)
//       is the square of the number before it
// Pre:  anArray is an array of 'size' integers, size is nonnegative
// Post: true is returned if each number (except for the first element) is
//       the square of the number before it, returns false otherwise. Also
//       returns false if there are less than two elements in the array


bool relatedSquares(int anArray[], size_t size) {

    // first base case returns false if the size is less than 2
    // second base case is when the size is 2

    if(size < 2){
        return false;
    }else if(size == 2){
        if(anArray[1] == anArray[0] * anArray[0]){
            return true;
        }else{
            return false;
        }
    }else{
        if(anArray[size - 1] == anArray[size-2] * anArray[size-2]){
            return relatedSquares(anArray, size - 1);
        }else{
            return false;
        }
    }
}

// Task: Given a string and a non-empty substring sub, compute recursively
//   the number of times that sub appears in the string, without the sub
//   strings overlapping.
// Pre: sub is a non-empty string
// Post: the count of non-overlapping occurrences of sub in str is returned
// Examples:
//   countSubs("catcowcat", "cat") --> 2
//   countSubs("catcowcat", "cow") --> 1
//   countSubs("catcowcat", "dog") --> 0


size_t countSubs(const std::string &str, const std::string &sub) {

    if (str.length() == 0) {
        return 0;
    } else {
        if (str.substr(0, sub.length()) == sub) {
            return 1 + countSubs(str.substr(sub.length()), sub);
        } else {
            return countSubs(str.substr(1), sub);
        }
    }

}


// Task: Given a string, compute recursively a new string where all the
//   lowercase 'x' chars have been moved to the end of the string.
// Pre: str is a string (possibly empty)
// Post: return a new string where all lowercase 'x' chars have been
//   moved to the end
// Examples:
//   moveXs("xxre") --> "rexx"
//   moveXs("xxhixx") --> "hixxxx"
//   moveXs("xhixhix") --> "hihixxx"

std::string moveXs(const std::string &str) {

    if (str.length() == 0) {
        return "";
    } else {
        if (str.substr(0, 1) == "x") {
            return moveXs(str.substr(1)) + "x";
        } else {
            return str.substr(0, 1) + moveXs(str.substr(1));
        }
    }

}

// Newtons method for approximating square roots.
// The next iteration is the average of the previous iteration and the
// ratio of the number in question to the previous iteration.
// In other words:
//     x_i = ( x_(i-1) + number/x_(i-1) ) / 2
// if i is 0 the approximation is simply half the number.
// Pre: number & interations are non-negative integers
// Post: return an approximation of sqrt(number)
// Note: number & iterations are integers, but the return value is double

double newton(size_t number, size_t iterations) {

    if (iterations == 0) {
        return number / 2.0;
    } else {
        return (newton(number, iterations - 1) + number / (newton(number, iterations - 1))) / 2;
    }

}

// Task: There exists a staircase with N steps, and you can climb up either 1 or 2 steps
//   at a time. Given N, return the number of unique ways you can climb the staircase.
//   The order of the steps matters.
// Pre: n>0
// Post: The number of ways to climb the staircase is returned
// Example: If N is 4, then there are 5 unique ways:
//      1, 1, 1, 1
//      2, 1, 1
//      1, 2, 1
//      1, 1, 2
//      2, 2

size_t uniqueSteps(size_t n) {

    if (n <= 1) {
        return 1;
    } else {
        return uniqueSteps(n - 1) + uniqueSteps(n - 2);
    }

}




// This was an interview problem that was asked by Amazon.
//
// Given a string, determine whether any permutation of it is a palindrome.
// For example, "carrace" should return true, since it can be rearranged to form racecar,
// which is a palindrome. But "daily" should return false, since there's no rearrangement
// that can form a palindrome.
//
// You may write a single loop that examines each character of the string once, but the overall
// solution must be recursive.
// This function should not call the isPalindrome() function of this assignment.


bool palindrome_able(std::string str) {

    if (str.length() <= 1) {
        return true;
    } else {
        char target = str[0];
        bool match = false;
        size_t index = 1;
        while (str[index] != target && index < str.length()) {     // find the index of the matching letter
            index++;
        }
        if (index != str.length()) {                              // if index < str.length(), then found the match
            match = true;
        }
        if (match) {
            std::string newstr = "";
            if (index == str.length() - 1) {                       // if index is the last letter
                newstr = str.substr(1, str.length() - 2);

            } else {
                newstr = str.substr(1, index - 1) + str.substr((index + 1)); // if index is in the middle
            }
            return palindrome_able(newstr);
        } else if (str.length() % 2 == 0 && !match) {        //if the number of letters is even and there is no match
            return false;
        }else{
            return palindrome_able(str.substr(1));     // there can be one non-matching letter
        }
    }
}


// Task: Count the number of nodes with a nonzero value in a linked list
// Pre: tmpPtr points to the first node of the list, or it is nullptr if
//  the list is empty
// Post: the number of nodes with a nonzero value in the linked list is
//  returned, and the linked list is unchanged.
size_t numOfTerms(NodePtr tmpPtr) {

    NodePtr cur = tmpPtr;
    if (cur == nullptr) {
        return 0;
    } else {
        if (cur->value != 0) {
            return 1 + numOfTerms(cur->next);
        } else {
            return numOfTerms(cur->next);
        }
    }

}

// Task: Remove leading zeroes from a BigNum represented by a linked list.
// Pre: tmpPtr points to the first node of a list, or is nullptr if the
//  list is empty
// Post: all nodes at the end of the list which have a zero have been removed
// Note 1: as discussed in lecture, a BigNum stores the digits of the number
//         in reverse order, with the ones digit at the front of the list.
//         We are deleteing leading zeroes, which would appear at the end
//         of the list if they exist
// Note 2: The parameter tmpPtr is passed by reference, so any changes to it
//         will affect the pointer in the caller


void normalizeBigNum(NodePtr &tmpPtr) {

    // move the tmpPtr to the last nodePtr

    if(tmpPtr == nullptr){
        return;
    }else{
        normalizeBigNum(tmpPtr -> next);
    }

    // if the last value is 0 then delete it
    // however non leading zero will not be deleted because the next point is not a nullptr

    if(tmpPtr -> value == 0 && tmpPtr -> next == nullptr){
        delete tmpPtr;
        tmpPtr = nullptr;
    }

}


// Task: Create a string of the contents of the linked list in forward order and then
//   echo the same values in reverse order. Each value is followed by a space in the string.
// Pre: tmpPtr points to the first node of the list, or it is nullptr if
//  the list is empty
// Post: the values of all nodes in the linked list are in the string in forward
//  order, and then the same values are printed in reverse order, with each value
//  followed by a single blank, and the linked list is unchanged.
// Ex: if the list contains tmpPtr->1->2->3, we will return "1 2 3 3 2 1 "

std::string echo2(NodePtr tmpPtr) {

    NodePtr cur = tmpPtr;
    std::string answer = "";
    if (cur == nullptr) {
        return "";
    } else {
        return std::to_string(cur->value) + " " + echo2(cur->next) + std::to_string(cur->value) + " ";
    }

}



