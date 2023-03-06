/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Summing, Finding the Max and Min of an integer array
 * Note:  Look at the output for the format for print
 */

//System Libraries Here
#include <iostream>//cin,cout
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void read(int [],int);
int  stat(const int [],int,int &,int &);
void print(const int [],int,int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;
    int array[SIZE];
    int sizeIn,sum,min,max;
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of integers find sum/min/max"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of integers
    cout<<"Now read the Array"<<endl;
    read(array,sizeIn);//Read in the array of integers
    
    //Find the sum, max, and min
    sum=stat(array,sizeIn,max,min);//Output the sum, max and min
    
    //Print the results
    print(array,sizeIn,sum,max,min);//print the array, sum, max and min

    //Exit
    return 0;
}
void read(int array[],int sizeIn){            //Reads in user input and places into array
    for ( int i = 0; i < sizeIn; i++){        //Loops to predetermined size asked by user
            cin>>array[i];
        
    }
    
}
int  stat(const int array[], int sizeIn,int &max,int &min){
    int sum = 0;                                //Sets decalres and sets sum count to zero
    min = max = array[0];                       //Sets min and max to zero
    
     for ( int i = 0; i < sizeIn; i++){      //for loop to iterate through array
            if (array[i]<min){              //Determines if current array value is less than min
                min = array[i];             //if so min value becomes array value
            }
            if (array[i] > max){          //Same as above but for max
                max = array[i];
            }
            
            
            sum = sum +array[i];           //Adds each array value to sum per iteration of lop
    }

    
    return sum;
}




void print(const int array[],int sizeIn, int sum, int max, int min){
    
    for ( int i = 0; i < sizeIn; i++){             //Prints array
        cout<<"a["<<i<<"] = "<<array[i]<<endl;
    }

    cout<<"Min  = "<<min<<endl;               //Prints variables min, max and sum
    cout<<"Max  = "<<max<<endl;
    cout<<"Sum  = "<<sum<<endl;
}

