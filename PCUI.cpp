#include<iostream>
#include<cstdlib>
#include<string>
#include<typeinfo>
#include"PCUI.h"
#include"AUI.h"
#include"Record.h"
#include<fstream>
using namespace std;
fstream Stu,Pro,Wor;
void star();

void PersonalChoiceUI::show(){
        cout<<"1.Student"<<endl;
        cout<<"2.Professor"<<endl;
        cout<<"3.Worker"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Please input(1-4):";
}

void PersonalChoiceUI::choice(){
    try{
        (cin>>a).get();cout<<endl;
        star();
        if(a>4||a<1){cout<<"it is wrong."<<endl;star();throw a;}
    }
    catch(int a){PersonalChoiceUI the_next;the_next.EXECUTEPCUI();}
}

Student B;
Professor C;
Worker D;
void PersonalChoiceUI::dective(){
        switch(a){
            case 1:cout<<"EXECUTE student ability."<<endl;
                   B.EXECUTEPCUI();
                   B.dective();
                   break;//創建各類別鏈表
            case 2:cout<<"EXECUTE professor ability."<<endl;
                   C.EXECUTEPCUI();
                   C.dective();
                   break;
            case 3:cout<<"EXECUTE worker ability."<<endl;
                   D.EXECUTEPCUI();
                   D.dective();
                   break;
            case 4:cout<<"Thank you to use this system."<<endl;system("pause");return ;
                    break;//結束執行
        }
}
void PersonalChoiceUI::EXECUTEPCUI(){
    PersonalChoiceUI::show();
    PersonalChoiceUI::choice();
    PersonalChoiceUI::dective();
}
