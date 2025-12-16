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
    cout << "  Please enter your selection (1-6): ";
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
    cout << "\n\n";
    cout << "  ============================================================================" << endl;
    cout << "                                                                              " << endl;
    cout << "                              T Y P E M A S T E R                             " << endl;
    cout << "                           ________________________                           " << endl;
    cout << "                                                                              " << endl;
    cout << "                      Professional Typing Assessment Tool                     " << endl;
    cout << "                                  v1.0.0                                      " << endl;
    cout << "                                                                              " << endl;
    cout << "  ============================================================================" << endl;
    cout << endl;
    cout << "  Welcome! This application will measure your typing speed and accuracy." << endl;
    cout << endl;
    cout << "  +---------------------------------------------------------------------------+" << endl;
    cout << "  |                                                                           |" << endl;
    cout << "  |   DIFFICULTY LEVELS:                                                      |" << endl;
    cout << "  |   ~~~~~~~~~~~~~~~~~~                                                      |" << endl;
    cout << "  |                                                                           |" << endl;
    cout << "  |      Option 1:  EASY                                                      |" << endl;
    cout << "  |                 Simple lowercase words and short sentences                |" << endl;
    cout << "  |                                                                           |" << endl;
    cout << "  |      Option 2:  MEDIUM                                                    |" << endl;
    cout << "  |                 Mixed case words with moderate complexity                 |" << endl;
    cout << "  |                                                                           |" << endl;
    cout << "  |      Option 3:  DIFFICULT                                                 |" << endl;
    cout << "  |                 Includes numbers, punctuation, and special chars          |" << endl;
    cout << "  |                                                                           |" << endl;
    cout << "  |      Option 4:  VETERAN                                                   |" << endl;
    cout << "  |                 Programming syntax, brackets, and complex patterns        |" << endl;
    cout << "  |                                                                           |" << endl;
    cout << "  +---------------------------------------------------------------------------+" << endl;
    cout << "  |      Option 5:  View Performance Records                                  |" << endl;
    cout << "  |      Option 6:  Exit Application                                          |" << endl;
    cout << "  +---------------------------------------------------------------------------+" << endl;
    cout << endl;
   
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