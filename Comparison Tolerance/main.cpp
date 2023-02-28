/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Purpose: Compare 2 numbers and see if they are within a certain tolerance
 */

//System Libraries
#include <iostream> 
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    float tol,example,compare;
    //Initialize variables
    tol = 2e-1f;
    example = 25.0;
    compare = 25 + 1/8.0;
    //Map/Process the Inputs -> Outputs 
    bool same=abs(example-compare) < tol;
   
    //Display Inputs/Outputs
    if (same)cout<<example<<" = "<<compare<<endl;
    else cout<<example<<" != "<<compare<<endl;
    //Clean up memory and files
    //Exit the program
    return 0;
}

