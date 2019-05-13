#include<iostream>
#include<cstdlib>
#include<vector>
#include"PCUI.h"
#include"Record.h"

using namespace std;
void star();
void AbilityUI::show(){
    cout<<"1.Write into Records"<<endl;
    cout<<"2.Show out Records"<<endl;
    cout<<"3.Fix Records"<<endl;
    cout<<"4.Delete Records"<<endl;
    cout<<"5.Find Records"<<endl;
    cout<<"6.Quit"<<endl;
    cout<<"Please input(1-6):";
}
void AbilityUI::choice(){
    (cin>>b).get();
    cout<<endl;
    star();
}

void AbilityUI::EXECUTEPCUI(){
    AbilityUI::show();
    AbilityUI::choice();
}
