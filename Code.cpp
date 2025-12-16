#include <iostream>
#include <fstream>
#include<chrono>//for time management
using namespace std;
  

int main (){
    int choice;
    cout << "======================="<<endl;
    cout<< "TYPING SPEED CALCULATOR"<<endl;
    cout<<"======================="<<endl;
    cout<<"Welcome! You are at the right platform to test how fast you type\nPlease choose your difficulty level:"<<endl;
    cout<<"1- Easy (includes basic english words)\n2-Medium (includes tricky words with capitals)\n3-Difficult (includes numbers and punctutaion marks)\n4-Veteran (includes brackets and difficult combination of characters)\n5- See your record\n6-Exit"<<endl;
    cout << "Enter your choice: ";
    cin>>choice;
    while (choice<1||choice>4){
        cout<<"Invalid choice! Please enter a valid option: ";
        cin>> choice;
    }
    switch(choice){
        case 1:
            easytext();
            break;
        case 2:
            mediumtext();
            break;
        case 3:
            difficulttext();
            break;
        case 4;
            veterantext();
            break;
        case 5;
            showdata();
            break;
        case 6:
            //to exit
    }
}