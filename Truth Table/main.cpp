/* 
 * File:   main.cpp
 * Author:
 * Created on:
 * Purpose:  To tell the Truth
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool x,y;
    int numA,numB;
    //Display the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !(X&&Y) !X||!Y "<<
          " !(X||Y) !X&&!Y"<<endl;
          
          
    while(cin>>numA>>numB){

        
        if ((numA == 1 )&&(numB == 1)){        //First Row
            x=true;
            y=true;
            cout<<(x?'T':'F')<<" "
                <<(y?'T':'F')<<"  "
                <<(!x?'T':'F')<<"  "
                <<(!y?'T':'F')<<"   "
                <<(x&&y?'T':'F')<<"    "
                <<(x||y?'T':'F')<<"   "
                <<(x^y?'T':'F')<<"    "
                <<(x^y^x?'T':'F')<<"     "
                <<(x^y^y?'T':'F')<<"       "
                <<(!(x&&y)?'T':'F')<<"      "
                <<(!x||!y?'T':'F')<<"        "
                <<(!(x||y)?'T':'F')<<"      "
                <<(!x&&!y?'T':'F')
                <<endl;
               
        }
        else if ((numA == 1 )&&(numB == 0)){    //Second Row
            x=true;
            y=false;
            
            cout<<(x?'T':'F')<<" "
                <<(y?'T':'F')<<"  "
                <<(!x?'T':'F')<<"  "
                <<(!y?'T':'F')<<"   "
                <<(x&&y?'T':'F')<<"    "
                <<(x||y?'T':'F')<<"   "
                <<(x^y?'T':'F')<<"    "
                <<(x^y^x?'T':'F')<<"     "
                <<(x^y^y?'T':'F')<<"       "
                <<(!(x&&y)?'T':'F')<<"      "
                <<(!x||!y?'T':'F')<<"        "
                <<(!(x||y)?'T':'F')<<"      "
                <<(!x&&!y?'T':'F')
                
                <<endl;
               
        }
        else if ((numA == 0 )&&(numB == 1)){    //Third Row
        x=false;
        y=true;
        cout<<(x?'T':'F')<<" "
            <<(y?'T':'F')<<"  "
            <<(!x?'T':'F')<<"  "
            <<(!y?'T':'F')<<"   "
            <<(x&&y?'T':'F')<<"    "
            <<(x||y?'T':'F')<<"   "
            <<(x^y?'T':'F')<<"    "
            <<(x^y^x?'T':'F')<<"     "
            <<(x^y^y?'T':'F')<<"       "
            <<(!(x&&y)?'T':'F')<<"      "
            <<(!x||!y?'T':'F')<<"        "
            <<(!(x||y)?'T':'F')<<"      "
            <<(!x&&!y?'T':'F')
            
            <<endl;
        }
        else if ((numA == 0 )&&(numB == 0)){    //Fourth Row
        x=false;
        y=false;
        cout<<(x?'T':'F')<<" "
            <<(y?'T':'F')<<"  "
            <<(!x?'T':'F')<<"  "
            <<(!y?'T':'F')<<"   "
            <<(x&&y?'T':'F')<<"    "
            <<(x||y?'T':'F')<<"   "
            <<(x^y?'T':'F')<<"    "
            <<(x^y^x?'T':'F')<<"     "
            <<(x^y^y?'T':'F')<<"       "
            <<(!(x&&y)?'T':'F')<<"      "
            <<(!x||!y?'T':'F')<<"        "
            <<(!(x||y)?'T':'F')<<"      "
            <<(!x&&!y?'T':'F')
            
            <<endl;
           
        }
    }
    cout<<endl;

    //Exit
    return 0;
}