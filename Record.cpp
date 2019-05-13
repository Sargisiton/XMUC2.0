#include<iostream>
#include<fstream>
#include<cstdlib>
#include"PCUI.h"
#include"Record.h"

using namespace std;
void Record::basic_get_data(){
    cout<<"Inter your Name:";(cin>>name).get();
    cout<<"Inter your Sex:";(cin>>sex).get();
    cout<<"Inter your identity:";(cin>>identity).get();
    cout<<"Inter your birthday:";(cin>>birthday).get();
    cout<<"Inter your address:";(cin>>address).get();
    cout<<"Inter your age:";(cin>>age).get();
}

void Student::get_data(){
    this->basic_get_data();
    cout<<"Inter your ID:";getline(cin,student_ID);
    cout<<"Inter your Dorm:";getline(cin,dorm);
    cout<<"Inter your major:";getline(cin,major);
    cout<<"Inter your grade:";(cin>>grade).get();
}
void Staff::sub_get_data(){
    cout<<"Inter your Job Number:";getline(cin,job_number);
    cout<<"Inter your Apartment:";getline(cin,apartment);
    cout<<"Inter your Work Time:";(cin>>work_time).get();
    cout<<"Inter your Salary:";(cin>>salary).get();
}
void Professor::get_data(){
    this->basic_get_data();
    this->sub_get_data();
    cout<<"Inter your Teach Major:";getline(cin,teach_major);
    cout<<"Inter your Science:";getline(cin,science);
    cout<<"Inter your Number of Student:";(cin>>num_of_student).get();
}
void Worker::get_data(){
    this->basic_get_data();
    this->sub_get_data();
    cout<<"Inter your Type of Work:";getline(cin,type_of_work);
}
void Record::basic_show_data(){
    cout<<"Name:"<<name<<endl;
    cout<<"Sex:"<<sex<<endl;
    cout<<"Identity:"<<identity<<endl;
    cout<<"Birthday:"<<birthday<<endl;
    cout<<"Address:"<<address<<endl;
    cout<<"Age:"<<age<<endl;
}
void Student::show_data(){
    this->basic_show_data();
    cout<<"ID:"<<student_ID<<endl;
    cout<<"Dorm:"<<dorm<<endl;
    cout<<"Major:"<<major<<endl;
    cout<<"Grade:"<<grade<<endl;
}
void Staff::sub_show_data(){
    cout<<"Job Number:"<<job_number<<endl;
    cout<<"Apartment:"<<apartment<<endl;
    cout<<"Work Time:"<<work_time<<endl;
    cout<<"Salary:"<<salary<<endl;
}
void Professor::show_data(){
    this->basic_show_data();
    this->sub_show_data();
    cout<<"Teach Major:"<<teach_major<<endl;
    cout<<"Science:"<<science<<endl;
    cout<<"Number of Student:"<<num_of_student<<endl;
}
void Worker::show_data(){
    this->basic_show_data();
    this->sub_show_data();
    cout<<"Type of Work:"<<type_of_work<<endl;
}

void Student::into_file(){
    ofstream stufile;
    stufile.open("Student.dat",ios::binary|ios::app);
    this->get_data();
    if(stufile.is_open()){
        cout<<"N"<<endl;
        stufile.write((char*)&this->name,sizeof(this->name));
        stufile.write((char*)&this->sex,sizeof(this->sex));
        stufile.write((char*)&this->identity,sizeof(this->identity));
        stufile.write((char*)&this->birthday,sizeof(this->birthday));
        stufile.write((char*)&this->address,sizeof(this->address));
        stufile.write((char*)&this->age,sizeof(this->age));
        stufile.write((char*)&this->student_ID,sizeof(this->student_ID));
        stufile.write((char*)&this->dorm,sizeof(this->dorm));
        stufile.write((char*)&this->major,sizeof(this->major));
        stufile.write((char*)&this->grade,sizeof(this->grade));
    }
    else{
        cout<<"it is error."<<endl;
    }
    stufile.close();
}
void Professor::into_file(){
    ofstream profile;
    profile.open("professor.dat",ios::binary|ios::app);
    this->get_data();
    if(profile.is_open()){
        cout<<"N"<<endl;
        profile.write((char*)&this->name,sizeof(this->name));
        profile.write((char*)&this->sex,sizeof(this->sex));
        profile.write((char*)&this->identity,sizeof(this->identity));
        profile.write((char*)&this->birthday,sizeof(this->birthday));
        profile.write((char*)&this->address,sizeof(this->address));
        profile.write((char*)&this->age,sizeof(this->age));
        profile.write((char*)&this->job_number,sizeof(this->job_number));
        profile.write((char*)&this->apartment,sizeof(this->apartment));
        profile.write((char*)&this->work_time,sizeof(this->work_time));
        profile.write((char*)&this->salary,sizeof(this->salary));
        profile.write((char*)&this->teach_major,sizeof(this->teach_major));
        profile.write((char*)&this->science,sizeof(this->science));
        profile.write((char*)&this->num_of_student,sizeof(this->num_of_student));
    }
    else{
        cout<<"it is error."<<endl;
    }
    profile.close();
}
void Worker::into_file(){

    ofstream worfile;
    worfile.open("worker.dat",ios::binary|ios::app);
    this->get_data();
    if(worfile.is_open()){
        cout<<"N"<<endl;
        worfile.write((char*)&this->name,sizeof(this->name));
        worfile.write((char*)&this->sex,sizeof(this->sex));
        worfile.write((char*)&this->identity,sizeof(this->identity));
        worfile.write((char*)&this->birthday,sizeof(this->birthday));
        worfile.write((char*)&this->address,sizeof(this->address));
        worfile.write((char*)&this->age,sizeof(this->age));
        worfile.write((char*)&this->job_number,sizeof(this->job_number));
        worfile.write((char*)&this->apartment,sizeof(this->apartment));
        worfile.write((char*)&this->work_time,sizeof(this->work_time));
        worfile.write((char*)&this->salary,sizeof(this->salary));
        worfile.write((char*)&this->type_of_work,sizeof(this->type_of_work));
    }
    else{
        cout<<"it is error."<<endl;
    }
    worfile.close();
}
void Student::dective(){
       switch(b){
                case 1:cout<<"EXECUTE Add."<<endl;
                        this->into_file();
                        this->EXECUTEPCUI();
                        this->dective();
                        break;//增節點
                case 2:cout<<"EXECUTE Show."<<endl;
                        AbilityUI the_next2;
                        the_next2.EXECUTEPCUI();
                        break;//尋訪輸出
                case 3:cout<<"EXECUTE Fix."<<endl;
                        AbilityUI the_next3;
                        the_next3.EXECUTEPCUI();
                        break;//修資料
                case 4:cout<<"EXECUTE Delete."<<endl;
                        AbilityUI the_next4;
                        the_next4.EXECUTEPCUI();
                        break;//刪節點
                case 5:cout<<"EXECUTE Find."<<endl;
                        AbilityUI the_next5;
                        the_next5.EXECUTEPCUI();
                       break;//找節點
                case 6:cout<<"Return menu1"<<endl;PersonalChoiceUI the_next;the_next.EXECUTEPCUI();
                       break;//回頁面一
            }
}
void Professor::dective(){
    switch(b){
                    case 1:cout<<"EXECUTE Add."<<endl;
                            this->into_file();
                            this->EXECUTEPCUI();
                            this->dective();
                            break;//增節點
                    case 2:cout<<"EXECUTE Show."<<endl;
                            AbilityUI the_next2;
                            the_next2.EXECUTEPCUI();
                            break;//尋訪輸出
                    case 3:cout<<"EXECUTE Fix."<<endl;
                            AbilityUI the_next3;
                            the_next3.EXECUTEPCUI();
                            break;//修資料
                    case 4:cout<<"EXECUTE Delete."<<endl;
                            AbilityUI the_next4;
                            the_next4.EXECUTEPCUI();
                            break;//刪節點
                    case 5:cout<<"EXECUTE Find."<<endl;
                            AbilityUI the_next5;
                            the_next5.EXECUTEPCUI();
                           break;//找節點
                    case 6:cout<<"Return menu1"<<endl;PersonalChoiceUI the_next;the_next.EXECUTEPCUI();
                           break;//回頁面一
                }

}
void Worker::dective(){
    switch(b){
                    case 1:cout<<"EXECUTE Add."<<endl;
                            this->into_file();
                            this->EXECUTEPCUI();
                            this->dective();
                            break;//增節點
                    case 2:cout<<"EXECUTE Show."<<endl;
                            AbilityUI the_next2;
                            the_next2.EXECUTEPCUI();
                            break;//尋訪輸出
                    case 3:cout<<"EXECUTE Fix."<<endl;
                            AbilityUI the_next3;
                            the_next3.EXECUTEPCUI();
                            break;//修資料
                    case 4:cout<<"EXECUTE Delete."<<endl;
                            AbilityUI the_next4;
                            the_next4.EXECUTEPCUI();
                            break;//刪節點
                    case 5:cout<<"EXECUTE Find."<<endl;
                            AbilityUI the_next5;
                            the_next5.EXECUTEPCUI();
                           break;//找節點
                    case 6:cout<<"Return menu1"<<endl;PersonalChoiceUI the_next;the_next.EXECUTEPCUI();
                           break;//回頁面一
                }


}

