#include<iostream>
#include<cstdlib>
#include"PCUI.h"
#include"AUI.h"
#include"Record.h"
#include<vector>
using namespace std;
vector<StudentNode>B;
vector<Professor>C;
vector<Worker>D;
extern void star(){
    cout<<"************************"<<endl;
}
void PersonalChoiceUI::show(){
        cout<<"1.Student"<<endl;
        cout<<"2.Professor"<<endl;
        cout<<"3.Worker"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Please input(1-4):";
}
void PersonalChoiceUI::choice(){
        (cin>>a).get();cout<<endl;
        star();
}
void PersonalChoiceUI::dective(){
        switch(a){
            case 1:cout<<"EXECUTE student ability."<<endl;AbilityUI E;E.EXECUTEPCUI();
                    break;//創建各類別鏈表
            case 2:cout<<"EXECUTE professor ability."<<endl;AbilityUI F;F.EXECUTEPCUI();
                    break;
            case 3:cout<<"EXECUTE worker ability."<<endl;AbilityUI G;G.EXECUTEPCUI();
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
