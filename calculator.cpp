#include<iostream>
using namespace std;

int main()
{
    bool exit=false;
    int choice;
    while(!exit)
    {
        cout<<"*************Menu************\n";
        cout<<"1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\n";
        cout<<"Enter your Choice:";
        cin>>choice;
        switch(choice){
            case 1:
            {
                int a,b;
                cout<<"enter two numbers: ";
                cin>>a>>b;
                cout<<"Addition of "<<a<<" and "<<b<<" is --> "<<a+b<<endl;
                break;
            }
            case 2:
            {
                int a,b;
                cout<<"enter two numbers: ";
                cin>>a>>b;
                cout<<"Subtraction of "<<a<<" and "<<b<<" is --> "<<a-b<<endl;
                break;
            }
            case 3:
            {
                int a,b;
                cout<<"enter two numbers: ";
                cin>>a>>b;
                cout<<"Multiplication of "<<a<<" and "<<b<<" is --> "<<a*b<<endl;
                break;
            }
            case 4:
            {
                int a,b;
                cout<<"enter two numbers: ";
                cin>>a>>b;
                cout<<"Division of "<<a<<" and "<<b<<" is --> "<<a/b<<endl;
                break;
            }
            case 5:
            {
                exit=true;
                cout<<"Thanks for using application...";
                break;
            }
            default:
                cout<<"Invalid Choice...Please retry..";
                break;
        }
    }
    return 0;
}