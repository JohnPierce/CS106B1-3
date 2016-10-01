//
//  main.cpp
//  CS106B1-3
//  Problem Set 1 pdf problem number 3
//
//  Created by John Pierce on 9/22/16.
//  Copyright © 2016 JohnPierce. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>

using std::vector;



void CountLetters (std::string filename); // Declare the function CountLetters before it is defined


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    // Declare location of the string. *Note: At some point need to fix the file locations to be relative.
    std::string fileName = "/Users/johnp/Desktop/ListProject/CS106B-SessionHandout1/CS106B1-3/CountLetters.txt";
    
    
    //Call the CountLetters function
    CountLetters(fileName);
    
    return 0;
}


/* Function CountLetters
 * Usage: CountLetters("fileName");
 * ------------------------------------------------------------
 * This function takes as input a file name. The program processes that file to return how many times
 * each letter of the alphabet is used regardless of case in the form of:
 * a: <num>
 * b: <num>
 * .
 * .
 * Function CountLetters does not return any value.
 */


void CountLetters (std::string filename)
{
    // how do you remember to close a file that has been opened? Compiler didn't complain.
    std::ifstream countLetterFile(filename);  // open the file from the string path of the file
    
    
    std::string currentFileInputLine; // declare the string variable to capture each input line
    
    
    vector<int> letterCount; // declare the vector we will be holding the letter count in
    
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz"; // alphabet used as for the output function, corresponds to the implicit letter position of letterCount vector
    
    int i = 0;
    // std::string testString = "whoami";


    //initialize the vector for counting, all letters are positional; e.g. a=0 position, b=1 position... implicit not explicit.
    letterCount = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    /* Error in the vector size; therefore created simplified vector
     also remembered
    vector<int> test;
    
    test = {1, 2, 3};
     */
    
    
    //The following code reads in all the data

    while ( countLetterFile >> currentFileInputLine ) // While statement reads file line by line into a type string
    {
        for ( auto c : currentFileInputLine ) // the for ( auto c : <string> increments the string character by character, very cool.
        {
            /* used for debugging purposes
             std::cout << c << "\n";
             */
            
            // Decided to use the switch statement to increment the values
            switch (c) {
                case 'a':
                    letterCount[0] = letterCount[0] +1;
                    break;
                case 'A':
                    letterCount[0] = letterCount[0]+1;
                    break;
                case 'b':
                    letterCount[1] = letterCount[1] +1;
                    break;
                case 'B':
                    letterCount[1] = letterCount[1] +1;
                    break;
                case 'c':
                    letterCount[2] = letterCount[2] +1;
                    break;
                case 'C':
                    letterCount[2] = letterCount[2] +1;
                    break;
                case 'd':
                    letterCount[3] = letterCount[3] +1;
                    break;
                case 'D':
                    letterCount[3] = letterCount[3] +1;
                    break;
                case 'e':
                    letterCount[4] = letterCount[4] +1;
                    break;
                case 'E':
                    letterCount[4] = letterCount[4] +1;
                    break;
                case 'f':
                    letterCount[5] = letterCount[5] +1;
                    break;
                case 'F':
                    letterCount[5] = letterCount[5] +1;
                    break;
                case 'g':
                    letterCount[6] = letterCount[6]+1;
                    break;
                case 'G':
                    letterCount[6] = letterCount[6] +1;
                    break;
                case 'h':
                    letterCount[7] = letterCount[7] +1;
                    break;
                case 'H':
                    letterCount[8] = letterCount[8] +1;
                    break;
                case 'i':
                    letterCount[9] = letterCount[9] +1;
                    break;
                case 'I':
                    letterCount[9] = letterCount[9] +1;
                    break;
                case 'j':
                    letterCount[10] = letterCount[10] +1;
                    break;
                case 'J':
                    letterCount[10] = letterCount[10] +1;
                    break;
                case 'k':
                    letterCount[11] = letterCount[11] +1;
                    break;
                case 'K':
                    letterCount[11] = letterCount[11] +1;
                    break;
                case 'l':
                    letterCount[12] = letterCount[12] +1;
                    break;
                case 'L':
                    letterCount[12] = letterCount[12]+1;
                    break;
                case 'm':
                    letterCount[13] = letterCount[13] +1;
                    break;
                case 'M':
                    letterCount[13] = letterCount[13] +1;
                    break;
                case 'n':
                    letterCount[14] = letterCount[14] +1;
                    break;
                case 'N':
                    letterCount[14] = letterCount[14] +1;
                    break;
                case 'o':
                    letterCount[15] = letterCount[15] +1;
                    break;
                case 'O':
                    letterCount[15] = letterCount[15] +1;
                    break;
                case 'p':
                    letterCount[16] = letterCount[16] +1;
                    break;
                case 'P':
                    letterCount[16] = letterCount[16] +1;
                    break;
                case 'q':
                    letterCount[17] = letterCount[17] +1;
                    break;
                case 'Q':
                    letterCount[17] = letterCount[17] +1;
                    break;
                case 'r':
                    letterCount[18] = letterCount[18]+1;
                    break;
                case 'R':
                    letterCount[18] = letterCount[18] +1;
                    break;
                case 's':
                    letterCount[19] = letterCount[19] +1;
                    break;
                case 'S':
                    letterCount[19] = letterCount[19] +1;
                    break;
                case 't':
                    letterCount[20] = letterCount[20] +1;
                    break;
                case 'T':
                    letterCount[20] = letterCount[20] +1;
                    break;
                case 'u':
                    letterCount[21] = letterCount[21] +1;
                    break;
                case 'U':
                    letterCount[21] = letterCount[21] +1;
                    break;
                case 'v':
                    letterCount[22] = letterCount[22] +1;
                    break;
                case 'V':
                    letterCount[22] = letterCount[22] +1;
                    break;
                case 'w':
                    letterCount[23] = letterCount[23] +1;
                    break;
                case 'W':
                    letterCount[23] = letterCount[23] +1;
                    break;
                case 'x':
                    letterCount[24] = letterCount[24] +1;
                    break;
                case 'X':
                    letterCount[24] = letterCount[24] +1;
                    break;
                case 'y':
                    letterCount[25] = letterCount[25] +1;
                    break;
                case 'Y':
                    letterCount[25] = letterCount[25] +1;
                    break;
                case 'z':
                    letterCount[26] = letterCount[26] +1;
                    break;
                case 'Z':
                    letterCount[26] = letterCount[26] +1;
                    break;
                
            }
            /* Used for debugging purposes
            std::cout << letterCount.size() << "\n";
             */
        }
 
    }
    
    countLetterFile.close(); // close the file that was opened with ifstream
    
    // The following for loop increments through the letterCount vector values while incrementing i that has been initialized to zero to print out the array alphabet.
    for ( auto ii : letterCount ){
        std::cout << alphabet[i] << ": " << ii << "\n"; // output the letter and the number of times the letter is used in the file
        i = i +1; // increment i
        /* used for debugging purposes
        std::cout << i << "\n";
        i = i + 1;
        std::cout << ii << "\n";
         */
    }
    
    /* I used the following code to look at the auto increment functionality in a for loop
     * also printing out letterCount.size() for debugging purposes.
    i=0;
    for (auto c : testString){
        std::cout << c << i << "\n";
        i = i +1;
    }
    
    for (auto intFoo : test ){
        std::cout << intFoo << "\n";
    }
    
    std::cout << letterCount.size() << "\n";
     */
    
}