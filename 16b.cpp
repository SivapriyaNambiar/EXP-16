// NAME - SIVAPRIYA NAMBIAR 
//PRN - 23070123125
// EXPERIMENT - 16(B) 

// EXCEPTION HANDLING 

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter age: ";
    cin>>age;
    try{
        if(age<18) {
            throw age;
        }
        else {
            cout<<"Age: "<<age<<"\n APPROVED"<<endl;
        }
    }
    catch(int a) {
        cout<<"\n ERROR: Underage! ("<<age<<")"<<endl;
    }
}