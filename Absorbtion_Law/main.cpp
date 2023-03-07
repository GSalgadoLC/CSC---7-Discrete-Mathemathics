/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on February 23, 2023
 * Purpose: Demonstrate functionality of NetBeans by creating a simple Hello World
 */

//System Libraries
#include <iostream> 
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

int main(int argc, char** argv) {
   
    bool a,b;
    cout<<"Absorption Law"<<endl;
    
    cout<<endl<<"\tA u (A n B) = A"<<endl;
    
    
    //First Row
    a = true;
    b = true;
    
    cout<<"\nA  B  A&&B  A||(A&&B) = A\n"<<endl;
    
    cout<<(a?'T':'F')<<"  "
        <<(b?'T':'F')<<"   "
        <<((a&&b)?'T':'F')<<"       "
        <<(a||(a&&b)?'T':'F')<<"   = "
        <<(a?'T':'F')<<endl;
    
    //First Row
    a = true;
    b = false;
    
    
    cout<<(a?'T':'F')<<"  "
        <<(b?'T':'F')<<"   "
        <<(a&&b?'T':'F')<<"       "
        <<(a||(a&&b)?'T':'F')<<"   = "
        <<(a?'T':'F')<<endl;
    
    //Third Row
    a = false;
    b = true;
    
    
    
    cout<<(a?'T':'F')<<"  "
        <<(b?'T':'F')<<"   "
        <<(a&&b?'T':'F')<<"       "
        <<(a||(a&&b)?'T':'F')<<"   = "
        <<(a?'T':'F')<<endl;
            
    //Fourth Row
    a = false;
    b = false;
    
    
    cout<<(a?'T':'F')<<"  "
        <<(b?'T':'F')<<"   "
        <<(a&&b?'T':'F')<<"       "
        <<(a||(a&&b)?'T':'F')<<"   = "
        <<(a?'T':'F')<<endl;
    
    
    
    
    return 0;
}

