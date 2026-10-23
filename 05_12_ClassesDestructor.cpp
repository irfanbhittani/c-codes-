#include<iostream>
using namespace std;

class Class
{
    public:
        int value;
        // Default constructor is called when create array of objects 
        // If default constructor is removed, then value will be initialized as garbage.
        Class(){ 
            this->value = 0;
            cout<<"\nConstructor Called.";
        }

        Class(int value){ 
            this->value = value;
            cout<<"\nOne Constructor Called.";
        }

        ~Class(){
            cout<<"\nGood Bye "<<value;
        }
};

int main()
{
    Class a[10];
    
    cout<<"\nRecords Before: \n";
    for(int i=0; i<10; i++)
    {
        cout<<a[i].value<<", ";
    }
    
    for(int i=0; i<10; i++)
    {
        a[i].value = i+1;
        cout<<endl<<"Value at index "<<i<<" = ";
        cout<<a[i].value;
    }
    return 0;
} 