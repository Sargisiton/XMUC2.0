#include<iostream>
#include<cstdlib>
#include"PCUI.h"
#include"AUI.h"
#include<vector>
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
void AbilityUI::dective(){
       switch(b){
                case 1:cout<<"EXECUTE Add."<<endl;AbilityUI the_next1;the_next1.EXECUTEPCUI();
                       break;//增節點
                case 2:cout<<"EXECUTE Show."<<endl;AbilityUI the_next2;the_next2.EXECUTEPCUI();
                       break;//尋訪輸出
                case 3:cout<<"EXECUTE Fix."<<endl;AbilityUI the_next3;the_next3.EXECUTEPCUI();
                       break;//修資料
                case 4:cout<<"EXECUTE Delete."<<endl;AbilityUI the_next4;the_next4.EXECUTEPCUI();
                       break;//刪節點
                case 5:cout<<"EXECUTE Find."<<endl;AbilityUI the_next5;the_next5.EXECUTEPCUI();
                       break;//找節點
                case 6:cout<<"Return menu1"<<endl;PersonalChoiceUI the_next;the_next.EXECUTEPCUI();
                       break;//回頁面一
            }
}
void AbilityUI::EXECUTEPCUI(){
    AbilityUI::show();
    AbilityUI::choice();
    AbilityUI::dective();
}
