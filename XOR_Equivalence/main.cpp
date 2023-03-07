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
   
    bool p,q;
   
    cout<<"Proving (p&&q)  ||  ~(p||q)  =  !(p^q)\n"<<endl;
    
    //First Row 
    p = true;
    q = true;
    cout<<"P\tQ\tP&&Q\t~(P||Q)\t\t(P&&Q)||~(P||Q)\t=   !(P^Q)\n"<<endl;
    cout<<(p?'T':'F')<<"\t";
    cout<<(q?'T':'F')<<"\t ";
    cout<<(p&&q?'T':'F')<<"\t   ";
    cout<<(!(p||q)?'T':'F')<<"\t\t        ";
    cout<<((p&&q)||(!(p||q))?'T':'F')<<"\t=     ";
    cout<<(!(p^q)?'T':'F')<<endl<<endl;
    //Second ROW
    p = true;
    q = false;
  
    cout<<(p?'T':'F')<<"\t";
    cout<<(q?'T':'F')<<"\t ";
    cout<<(p&&q?'T':'F')<<"\t   ";
    cout<<(!(p||q)?'T':'F')<<"\t\t        ";
    cout<<((p&&q)||(!(p||q))?'T':'F')<<"\t=     ";
    cout<<(!(p^q)?'T':'F')<<endl<<endl;
    //Third Row
    p = false;
    q = true;
 
    cout<<(p?'T':'F')<<"\t";
    cout<<(q?'T':'F')<<"\t ";
    cout<<(p&&q?'T':'F')<<"\t   ";
    cout<<(!(p||q)?'T':'F')<<"\t\t        ";
    cout<<((p&&q)||(!(p||q))?'T':'F')<<"\t=     ";
    cout<<(!(p^q)?'T':'F')<<endl<<endl;
    //Fourth Row
    p = false;
    q = false;
   
    cout<<(p?'T':'F')<<"\t";
    cout<<(q?'T':'F')<<"\t ";
    cout<<(p&&q?'T':'F')<<"\t   ";
    cout<<(!(p||q)?'T':'F')<<"\t\t        ";
    cout<<((p&&q)||(!(p||q))?'T':'F')<<"\t=     ";
    cout<<(!(p^q)?'T':'F')<<endl<<endl<<endl<<endl;
    
    
    
    cout<<"Proving (p||q)  &&  ~(p&&q)  =  p^q\n"<<endl;
     //First Row 
    p = true;
    q = true;
    cout<<"P\tQ\t(P||Q)\t~(P&&Q)\t\t(P||Q)&&~(P&&Q)\t=   (P^Q)\n"<<endl;
    cout<<(p?'T':'F')<<"\t";
    cout<<(q?'T':'F')<<"\t ";
    cout<<(p||q?'T':'F')<<"\t   ";
    cout<<(!(p&&q)?'T':'F')<<"\t\t        ";
    cout<<((p||q)&&(!(p&&q))?'T':'F')<<"\t=     ";
    cout<<(p^q?'T':'F')<<endl<<endl;
    
    //Second Row 
    p = true;
    q = false;
    cout<<(p?'T':'F')<<"\t";
    cout<<(q?'T':'F')<<"\t ";
    cout<<(p||q?'T':'F')<<"\t   ";
    cout<<(!(p&&q)?'T':'F')<<"\t\t        ";
    cout<<((p||q)&&(!(p&&q))?'T':'F')<<"\t=     ";
    cout<<(p^q?'T':'F')<<endl<<endl;
    //Third Row 
    p = false;
    q = true;
    cout<<(p?'T':'F')<<"\t";
    cout<<(q?'T':'F')<<"\t ";
    cout<<(p||q?'T':'F')<<"\t   ";
    cout<<(!(p&&q)?'T':'F')<<"\t\t        ";
    cout<<((p||q)&&(!(p&&q))?'T':'F')<<"\t=     ";
    cout<<(p^q?'T':'F')<<endl<<endl;
    //Fourth Row 
    p = false;
    q = false;
    cout<<(p?'T':'F')<<"\t";
    cout<<(q?'T':'F')<<"\t ";
    cout<<(p||q?'T':'F')<<"\t   ";
    cout<<(!(p&&q)?'T':'F')<<"\t\t        ";
    cout<<((p||q)&&(!(p&&q))?'T':'F')<<"\t=     ";
    cout<<(p^q?'T':'F')<<endl<<endl;
    return 0;
}

