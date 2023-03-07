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
void fillarray(int []); //Fills array with 16 elements automatic
void printOriginal(int []); //Prints original array
void reversePrint(int []);
void operateArray(int []);//Operates. Multiply by 2 on odds and subtracts 9 if over 9
void sumResult(int []); //Sums first 15 elements,displays valid on invalid result
void manualFill(int []); //Ask user to fill in an array

int main(int argc, char** argv) {
   
    srand(static_cast<unsigned int>(time(0)));
   
    int acNum[16];                  //Establishes an integer array of 16 digits
    int manNum[16];

    cout<<"Auto Mode: This is a automated card creator w/ random numbers\n"<<endl;
    
    fillarray(acNum);
    printOriginal(acNum);
    reversePrint(acNum);
    operateArray(acNum);
    sumResult(acNum);
    
 
    cout<<"\n\nManual Mode: Enter 16 digits to verify card (Number then hit enter x16):\n";
    
    cout<<"This is an Example of a valid card from freeformatter.com"<<endl;
    cout<<"\t 4556\t7375\t8689\t9855"<<endl;
    manualFill(manNum);
    printOriginal(manNum);
    reversePrint(manNum);
    operateArray(manNum);
    sumResult(manNum);
    
  
    
    return 0;
}




void fillarray(int acNum[]){

    for (int i = 0;i<16;i++){   //Fills 16 elements in array with random integers 0-9
            acNum[i]=rand()%10;
    }

}
void manualFill(int manNum[]){
    int i = 0;
    while(i<16){
        cin>>manNum[i];
        i++;
    }
}




void printOriginal(int acNum[]){

    for(int i = 0;i<16;i++){
            if (i == 0){
                cout<<setw(32)<<"The original card number: ";
            }
            cout<<acNum[i]<<" ";
            if (i == 15){
                cout<<endl;
            }
        }
}

void reversePrint(int acNum[]){
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
     
}

void operateArray(int acNum[]){
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
     for (int i = 0;i<16;i+=2){     //Subtract 9
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
}


void sumResult(int acNum[]){
    int sum = 0;
    for(int i = 0;i<16;i++){
    
        sum += acNum[i];                                                                                           
    }
    sum-=acNum[15];
    
            cout<<"\n\tThe sum is "<<sum
            <<"\tThe last digit of the card should be "<<sum%10;
            
            string result = ((sum%10)== acNum[15])?"VALID CARD":"INVALID CARD!";
            cout<<"\n\n\n\t"<<result;
    
}