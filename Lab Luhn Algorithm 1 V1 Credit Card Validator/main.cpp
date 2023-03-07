/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on March 6, 2023
 * Purpose: Credit card example of the Luhn Algorithm
 */

//System Libraries
#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    int acNum[16];                  //Establishes an integer array of 17 digits
    int sum = 0;
    //Initialize variables
    for (int i = 0;i<16;i++){   //Fills 16 elements in array with random integers 0-9
        acNum[i]=rand()%10;
    }

    for(int i = 0;i<16;i++){
        if (i == 0){
            cout<<setw(32)<<"The original card number: ";
        }
        cout<<acNum[i]<<" ";
        if (i == 15){
            cout<<endl;
        }
    }
    for (int i = 0;i<15/2;i++){     //For loop to reverse the first 15 digits of array
        
        int temp = acNum[i];        //swapping with last
        acNum[i]=acNum[15-i-1];
        acNum[15-i-1]=temp;
    }
                                                                                                     
   for(int i = 0;i<16;i++){
       if (i == 0){
            cout<<setw(32)<<"The reversed card number: ";
        }
        cout<<acNum[i]<<" ";
        if (i == 15){
            cout<<endl;
        }
    }
    
    for (int i = 0;i<16;i+=2){     //Odd iterating array
         acNum[i]=acNum[i]*2;
        
       
    }
  
    for(int i = 0;i<16;i++){
        if (i == 0){
            cout<<setw(32)<<"The double the odd card number: ";
        }
        cout<<acNum[i]<<" ";
        if (i == 15){
            cout<<endl;
        }
    }
    
     for (int i = 0;i<16;i+=2){     //Odd iterating array
         if(acNum[i]>9){
             acNum[i]-= 9;
         }
         
       
    }
    
    
  
  
  
    for(int i = 0;i<16;i++){
        if (i == 0){
            cout<<setw(32)<<"Subtracting 9 if over 9: ";
        }
        cout<<acNum[i]<<" ";
        if (i == 15){
            cout<<endl;
            
        }
    }

    
    for(int i = 0;i<15;i++){
    
        sum += acNum[i];                                                                                           
    }
    
            cout<<"\tThe sum is "<<sum
            <<"\tThe last digit of the card should be "<<sum%10;
            
            string result = ((sum%10)== acNum[15])?"VALID CARD":"INVALID CARD!";
            cout<<"\n\n\n\t"<<result;
    return 0;
}

