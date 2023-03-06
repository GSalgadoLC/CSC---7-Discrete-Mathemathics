/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 * Created on DATE AND TIME HERE
 * Purpose:  Sum Rows, Sum Columns, Grand Sum of an integer array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <iomanip> //setw(10)
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;  //Max Columns much larger than needed.

//Function Prototypes Here
void read(int [][COLMAX],int &,int &);//Prompt for size then table
void sum(const int [][COLMAX],int,int,int[][COLMAX]);//Sum rows,col,grand total
void print(const int [][COLMAX],int,int,int);//Either table can be printed

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //Max Rows much larger than needed
    int array[ROW][COLMAX]={};  //Declare original array
    int augAry[ROW][COLMAX]={}; //Actual augmented table row+1, col+1
    int row,col;                
    
    //Input the original table
    read(array,row,col);
    
    //Augment the original table by the sums
    sum(array,row,col,augAry);
    
    //Output the original array
    cout<<endl<<"The Original Array"<<endl;
    print(array,row,col,10);//setw(10)
    
    //Output the augmented array
    cout<<endl<<"The Augmented Array"<<endl;
    print(augAry,row+1,col+1,10);//setw(10)
    
    //Exit
    return 0;
}
void read(int array[][COLMAX],int &row,int &col){
    

    cout<<"Input a table and output the Augment row,col and total sums.\n"; //Display prompts
    cout<<"First input the number of rows and cols. <20 for each\n";
    cout<<"Now input the table.\n";

    
    cin>>row>>col;                              //User input into variables row and col
    for (int i = 0; i < row; i++){
        for ( int j = 0; j < col; j ++){        //Loops to fill in 2d array matrix
            cin>>array[i][j];
        }
    }
    
}




void sum(const int array[][COLMAX],int row,int col,int augAry[][COLMAX]){
    

    
    int rowSum,  colSum, total;
    total = 0;

        for (int i = 0; i < col; i++){
            colSum = 0; 
            for (int j = 0; j < row; j++){          //An extra column is added when calling function +1
                 colSum = colSum + array[j][i];     //in the added column from the  non augmented inputs from the cols are added
            }                                       //and displayed into the last column per row
            augAry[row][i] = colSum;
            total = total + colSum;                 //This sums up the last column of the new column
        }
    
    
    for (int i = 0; i < row; i++){
        
        rowSum  = 0;
       
        for (int j = 0; j < col; j++){
            rowSum = rowSum + array[i][j];          //an extra row is added when calling function +1;
            augAry[i][j] = array[i][j];             //in the added row from the non augmented inputs from the rows are added 
        }                                           //and displayed into the last row per column 

        augAry[i][col] = rowSum;
  
    }
    augAry[row][col] = total;
}

void print(const int array[][COLMAX],int row,int col,int widthNum){
    for ( int i = 0; i < row; i++){
        for ( int j = 0; j < col; j++){
            cout<<setw(widthNum)<<array[i][j];      //print out with variable to input formatting
        }
        cout<<"\n";
    }
}