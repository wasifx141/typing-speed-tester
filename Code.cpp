#include <iostream>
#include <fstream>
#include<chrono>//for time management
using namespace std;

void easyText();
void mediumText();
void difficultText();
void veteranText();
void showData();
void displayMenu();

int main (){
    int choice;
    bool exitprogram = false;
    while(!exitprogram){
    displayMenu();
    cout << "Enter your choice: ";
    cin>>choice;
    while (choice<1||choice>6){
        cout<<"Invalid choice! Please enter a valid option(1-6): ";
        cin>> choice;
    }
    switch(choice){
        case 1:
            easyText();
            break;
        case 2:
            mediumText();
            break;
        case 3:
            difficultText();
            break;
        case 4:
            veteranText();
            break;
        case 5:
            showData();
            break;
        case 6:
            exitprogram = true;
            cout<<"Thank you for using Typemaster! Make sure to come back again\nKEEP PRACTICING!"<<endl;
    }
}
}
void displayMenu(){
    cout << "=========="<<endl;
    cout<< "TYPEMASTER"<<endl;
    cout<<"============"<<endl;
    cout<<"Welcome! You are at the right platform to test how fast you type\nPlease choose your difficulty level:"<<endl;
    cout<<"1- Easy (includes basic english words)\n2-Medium (includes tricky words with capitals)\n3-Difficult (includes numbers and punctutaion marks)\n4-Veteran (includes brackets and difficult combination of characters)\n5- See your record\n6-Exit"<<endl;
}
void easyText(){
    cout << "[EASY MODE SELECTED]"<<endl;
}

void mediumText(){
    cout << "[MEDIUM MODE SELECTED]"<<endl;

}
void difficultText(){
    cout << "[DIFFICULT MODE SELECTED]"<<endl;
}
void veteranText(){
    cout << "[VETERAN MODE SELECTED]"<<endl;
}
void showData(){
    cout << "\n[VIEWING RECORDS]"<<endl;

}