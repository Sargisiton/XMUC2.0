#include<iostream>
#include<fstream>
#include<cstdlib>
#include"PCUI.h"
#include"Record.h"
void star();
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
        stufile.close();
        star();
    }
    else{
        cout<<"it is error."<<endl;
    }

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
        profile.close();
        star();
    }
    else{
        cout<<"it is error."<<endl;
    }

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
        star();
        worfile.close();
    }
    else{
        cout<<"it is error."<<endl;
    }

}
void Student::out_file(){
    ifstream stufile;
    stufile.open("student.dat",ios::binary|ios::in|ios::app);
    if(stufile.is_open()){
            while(!stufile.eof()){
                stufile.read((char*)&this->name,sizeof(this->name));
                stufile.read((char*)&this->sex,sizeof(this->sex));
                stufile.read((char*)&this->identity,sizeof(this->identity));
                stufile.read((char*)&this->birthday,sizeof(this->birthday));
                stufile.read((char*)&this->address,sizeof(this->address));
                stufile.read((char*)&this->age,sizeof(this->age));
                stufile.read((char*)&this->student_ID,sizeof(this->student_ID));
                stufile.read((char*)&this->dorm,sizeof(this->dorm));
                stufile.read((char*)&this->major,sizeof(this->major));
                stufile.read((char*)&this->grade,sizeof(this->grade));
                this->show_data();
                star();
            }
            stufile.close();
    }
    else{cout<<"It is error."<<endl;}
}
void Professor::out_file(){
    ifstream profile;
    profile.open("professor.dat",ios::binary|ios::in|ios::app);
    if(profile.is_open()){
            while(!profile.eof()){
                profile.read((char*)&this->name,sizeof(this->name));
                profile.read((char*)&this->sex,sizeof(this->sex));
                profile.read((char*)&this->identity,sizeof(this->identity));
                profile.read((char*)&this->birthday,sizeof(this->birthday));
                profile.read((char*)&this->address,sizeof(this->address));
                profile.read((char*)&this->age,sizeof(this->age));
                profile.read((char*)&this->job_number,sizeof(this->job_number));
                profile.read((char*)&this->apartment,sizeof(this->apartment));
                profile.read((char*)&this->work_time,sizeof(this->work_time));
                profile.read((char*)&this->salary,sizeof(this->salary));
                profile.read((char*)&this->teach_major,sizeof(this->teach_major));
                profile.read((char*)&this->science,sizeof(this->science));
                profile.read((char*)&this->num_of_student,sizeof(this->num_of_student));
                this->show_data();
                star();
            }
            profile.close();
    }
    else{cout<<"It is error."<<endl;}
}
void Worker::out_file(){
    ifstream worfile;
    worfile.open("worker.dat",ios::binary|ios::in|ios::app);
    if(worfile.is_open()){
            while(!worfile.eof()){
                worfile.read((char*)&this->name,sizeof(this->name));
                worfile.read((char*)&this->sex,sizeof(this->sex));
                worfile.read((char*)&this->identity,sizeof(this->identity));
                worfile.read((char*)&this->birthday,sizeof(this->birthday));
                worfile.read((char*)&this->address,sizeof(this->address));
                worfile.read((char*)&this->age,sizeof(this->age));
                worfile.read((char*)&this->job_number,sizeof(this->job_number));
                worfile.read((char*)&this->apartment,sizeof(this->apartment));
                worfile.read((char*)&this->work_time,sizeof(this->work_time));
                worfile.read((char*)&this->salary,sizeof(this->salary));
                worfile.read((char*)&this->type_of_work,sizeof(this->type_of_work));
                this->show_data();
                star();
            }
            worfile.close();
    }
    else{cout<<"It is error."<<endl;}
}
void Student::find_inf(){
    string stu_ID;
    cout<<"Please into Stu_ID:";cin>>stu_ID;
    star();
    fstream ffile;
    ffile.open("Student.dat",ios::in|ios::out|ios::binary|ios::app);
    int index=0;
    do{ ffile.read((char*)&this->name,sizeof(this->name));
        ffile.read((char*)&this->sex,sizeof(this->sex));
        ffile.read((char*)&this->identity,sizeof(this->identity));
        ffile.read((char*)&this->birthday,sizeof(this->birthday));
        ffile.read((char*)&this->address,sizeof(this->address));
        ffile.read((char*)&this->age,sizeof(this->age));
        ffile.read((char*)&this->student_ID,sizeof(this->student_ID));
        ffile.read((char*)&this->dorm,sizeof(this->dorm));
        ffile.read((char*)&this->major,sizeof(this->major));
        ffile.read((char*)&this->grade,sizeof(this->grade));
        if(stu_ID==this->identity)
        {show_data();star();}
        else{index++;}
    }while(!ffile.eof());
}
void Professor::find_inf(){
    string pro_ID;
    cout<<"Please into pro_ID:";cin>>pro_ID;
    star();
    fstream ffile;
    ffile.open("professor.dat",ios::in|ios::out|ios::binary|ios::app);
    int index=0;
    do{ ffile.read((char*)&this->name,sizeof(this->name));
        ffile.read((char*)&this->sex,sizeof(this->sex));
        ffile.read((char*)&this->identity,sizeof(this->identity));
        ffile.read((char*)&this->birthday,sizeof(this->birthday));
        ffile.read((char*)&this->address,sizeof(this->address));
        ffile.read((char*)&this->age,sizeof(this->age));
        ffile.read((char*)&this->job_number,sizeof(this->job_number));
        ffile.read((char*)&this->apartment,sizeof(this->apartment));
        ffile.read((char*)&this->work_time,sizeof(this->work_time));
        ffile.read((char*)&this->salary,sizeof(this->salary));
        ffile.read((char*)&this->teach_major,sizeof(this->teach_major));
        ffile.read((char*)&this->science,sizeof(this->science));
        ffile.read((char*)&this->num_of_student,sizeof(this->num_of_student));
        if(pro_ID==this->identity)
        {show_data();star();}
        else{index++;}
    }while(!ffile.eof());


}
void Worker::find_inf(){
    string wor_ID;
    cout<<"Please into wor_ID:";cin>>wor_ID;
    star();
    fstream ffile;
    ffile.open("worker.dat",ios::in|ios::out|ios::binary|ios::app);
    int index=0;
    do{ ffile.read((char*)&this->name,sizeof(this->name));
        ffile.read((char*)&this->sex,sizeof(this->sex));
        ffile.read((char*)&this->identity,sizeof(this->identity));
        ffile.read((char*)&this->birthday,sizeof(this->birthday));
        ffile.read((char*)&this->address,sizeof(this->address));
        ffile.read((char*)&this->age,sizeof(this->age));
        ffile.read((char*)&this->job_number,sizeof(this->job_number));
        ffile.read((char*)&this->apartment,sizeof(this->apartment));
        ffile.read((char*)&this->work_time,sizeof(this->work_time));
        ffile.read((char*)&this->salary,sizeof(this->salary));
        ffile.read((char*)&this->type_of_work,sizeof(this->type_of_work));
        if(wor_ID==this->identity)
        {show_data();star();}
        else{index++;}
    }while(!ffile.eof());
}
void Student::dective(){
       switch(b){
                case 1:cout<<"EXECUTE Add."<<endl;
                        this->into_file();
                        this->EXECUTEPCUI();
                        this->dective();
                        break;//增節點
                case 2:cout<<"EXECUTE Show."<<endl;
                       this->out_file();
                       this->EXECUTEPCUI();
                       this->dective();
                        break;//尋訪輸出
                case 3:cout<<"EXECUTE Fix."<<endl;
                        this->EXECUTEPCUI();
                        this->dective();
                        break;//修資料
                case 4:cout<<"EXECUTE Delete."<<endl;
                        AbilityUI the_next4;
                        the_next4.EXECUTEPCUI();
                        break;//刪節點
                case 5:cout<<"EXECUTE Find."<<endl;
                        this->find_inf();
                        this->EXECUTEPCUI();
                        this->dective();
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
                            this->out_file();
                            this->EXECUTEPCUI();
                            this->dective();
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
                            this->find_inf();
                            this->EXECUTEPCUI();
                            this->dective();
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
                            this->out_file();
                            this->EXECUTEPCUI();
                            this->dective();
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
                            this->find_inf();
                            this->EXECUTEPCUI();
                            this->dective();
                           break;//找節點
                    case 6:cout<<"Return menu1"<<endl;PersonalChoiceUI the_next;the_next.EXECUTEPCUI();
                           break;//回頁面一
                }


}

