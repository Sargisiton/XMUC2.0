#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<string>
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
    stufile.open("student.txt",ios::app);
    this->get_data();
    if(stufile.is_open()){
        stufile<<this->name;stufile<<endl;
        stufile<<this->sex;stufile<<endl;
        stufile<<this->identity;stufile<<endl;
        stufile<<this->birthday;stufile<<endl;
        stufile<<this->address;stufile<<endl;
        stufile<<this->age;stufile<<endl;
        stufile<<this->student_ID;stufile<<endl;
        stufile<<this->dorm;stufile<<endl;
        stufile<<this->major;stufile<<endl;
        stufile<<this->grade;stufile<<endl;
        stufile.close();
        star();
    }
    else{
        cout<<"it is error."<<endl;
    }

}
void Professor::into_file(){
    ofstream profile;
    profile.open("professor.txt",ios::app);
    this->get_data();
    if(profile.is_open()){
        profile<<this->name;profile<<endl;
        profile<<this->sex;profile<<endl;
        profile<<this->identity;profile<<endl;
        profile<<this->birthday;profile<<endl;
        profile<<this->address;profile<<endl;
        profile<<this->age;profile<<endl;
        profile<<this->job_number;profile<<endl;
        profile<<this->apartment;profile<<endl;
        profile<<this->work_time;profile<<endl;
        profile<<this->salary;profile<<endl;
        profile<<this->teach_major;profile<<endl;
        profile<<this->science;profile<<endl;
        profile<<this->num_of_student;profile<<endl;
        profile.close();
        star();
    }
    else{
        cout<<"it is error."<<endl;
    }

}
void Worker::into_file(){

    ofstream worfile;
    worfile.open("worker.txt",ios::app);
    this->get_data();
    if(worfile.is_open()){
        worfile<<this->name;worfile<<endl;
        worfile<<this->sex;worfile<<endl;
        worfile<<this->identity;worfile<<endl;
        worfile<<this->birthday;worfile<<endl;
        worfile<<this->address;worfile<<endl;
        worfile<<this->age;worfile<<endl;
        worfile<<this->job_number;worfile<<endl;
        worfile<<this->apartment;worfile<<endl;
        worfile<<this->work_time;worfile<<endl;
        worfile<<this->salary;worfile<<endl;
        worfile<<this->type_of_work;worfile<<endl;
        star();
        worfile.close();
    }
    else{
        cout<<"it is error."<<endl;
    }

}
void Student::out_file(){
    ifstream stufile;
    stufile.open("student.txt",ios::in);
    if(stufile.is_open()){
            while(!stufile.eof()){
                stufile>>this->name;
                stufile>>this->sex;
                stufile>>this->identity;
                stufile>>this->birthday;
                stufile>>this->address;
                stufile>>this->age;
                stufile>>this->student_ID;
                stufile>>this->dorm;
                stufile>>this->major;
                stufile>>this->grade;
                if(!stufile.eof()){this->show_data();}
                else{break;}
                star();
            }
            stufile.close();
    }
    else{cout<<"It is error."<<endl;}
}
void Professor::out_file(){
    ifstream profile;
    profile.open("professor.txt",ios::in);
    if(profile.is_open()){
            while(!profile.eof()){
                profile>>this->name;
                profile>>this->sex;
                profile>>this->identity;
                profile>>this->birthday;
                profile>>this->address;
                profile>>this->age;
                profile>>this->job_number;
                profile>>this->apartment;
                profile>>this->work_time;
                profile>>this->salary;
                profile>>this->teach_major;
                profile>>this->science;
                profile>>this->num_of_student;
                if(!profile.eof()){this->show_data();}
                else{break;}
                star();
            }
            profile.close();
    }
    else{cout<<"It is error."<<endl;}
}
void Worker::out_file(){
    ifstream worfile;
    worfile.open("worker.txt",ios::in);
    if(worfile.is_open()){
            while(!worfile.eof()){
                worfile>>this->name;
                worfile>>this->sex;
                worfile>>this->identity;
                worfile>>this->birthday;
                worfile>>this->address;
                worfile>>this->age;
                worfile>>this->job_number;
                worfile>>this->apartment;
                worfile>>this->work_time;
                worfile>>this->salary;
                worfile>>this->type_of_work;
                if(!worfile.eof()){this->show_data();}
                else{break;}
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
    ffile.open("student.txt",ios::in);
    int index=0;
    do{         ffile>>this->name;
                ffile>>this->sex;
                ffile>>this->identity;
                ffile>>this->birthday;
                ffile>>this->address;
                ffile>>this->age;
                ffile>>this->student_ID;
                ffile>>this->dorm;
                ffile>>this->major;
                ffile>>this->grade;
        if(stu_ID==this->identity)
        {if(!ffile.eof())
        {show_data();}
        else{break;}
        star();}
        else{index++;}
    }while(!ffile.eof());
}
void Professor::find_inf(){
    string pro_ID;
    cout<<"Please into pro_ID:";cin>>pro_ID;
    star();
    fstream ffile;
    ffile.open("professor.txt",ios::in);
    int index=0;
    do{         ffile>>this->name;
                ffile>>this->sex;
                ffile>>this->identity;
                ffile>>this->birthday;
                ffile>>this->address;
                ffile>>this->age;
                ffile>>this->job_number;
                ffile>>this->apartment;
                ffile>>this->work_time;
                ffile>>this->salary;
                ffile>>this->teach_major;
                ffile>>this->science;
                ffile>>this->num_of_student;
        if(pro_ID==this->identity)
        {if(!ffile.eof()){show_data();}
        else{break;}
        star();}
        else{index++;}
    }while(!ffile.eof());


}
void Worker::find_inf(){
    string wor_ID;
    cout<<"Please into wor_ID:";cin>>wor_ID;
    star();
    fstream ffile;
    ffile.open("worker.txt",ios::in);
    int index=0;
    do{          ffile>>this->name;
               ffile>>this->sex;
                ffile>>this->identity;
                ffile>>this->birthday;
                ffile>>this->address;
                ffile>>this->age;
                ffile>>this->job_number;
                ffile>>this->apartment;
                ffile>>this->work_time;
                ffile>>this->salary;
                ffile>>this->type_of_work;
        if(wor_ID==this->identity)
        {if(!ffile.eof()){show_data();}
        else{break;}
        star();}
    }while(!ffile.eof());
}
void Student::fix_inf(){
    vector<Student> students;
    fstream stufile;
    stufile.open("student.txt",ios::in);
    if(stufile.is_open()){
            while(!stufile.eof()){
                Student C;
                stufile>>this->name;
                stufile>>this->sex;
                stufile>>this->identity;
                stufile>>this->birthday;
                stufile>>this->address;
                stufile>>this->age;
                stufile>>this->student_ID;
                stufile>>this->dorm;
                stufile>>this->major;
                stufile>>this->grade;
                if(!stufile.eof()){
                    C.name=this->name;
                    C.sex=this->sex;
                    C.identity=this->identity;
                    C.birthday=this->birthday;
                    C.address=this->address;
                    C.age=this->age;
                    C.student_ID=this->student_ID;
                    C.dorm=this->dorm;
                    C.major=this->major;
                    C.grade=this->grade;
                    }
                else{break;}
                students.push_back(C);
                star();
            }
            stufile.close();
            star();
    }
    else{cout<<"It is error."<<endl;}
    stufile.open("student.txt",ios::out);
    stufile.close();
    string stu_ID;
    cout<<"Please input your id which you want to fix:";cin>>stu_ID;
    cout<<"Input what you want to fix->"<<endl;
    Student Fix;
    Fix.get_data();

    for(vector<Student>::iterator s1=students.begin();s1!=students.end();s1++){
        Student C;
        C=*s1;
		stufile.open("student.txt",ios::app);
        if(stufile.is_open())
		{
            if(C.identity==stu_ID)
			{
                C.name=Fix.name;
                C.sex=Fix.sex;
                C.identity=Fix.identity;
                C.birthday=Fix.birthday;
                C.address=Fix.address;
                C.age=Fix.age;
                C.student_ID=Fix.student_ID;
                C.dorm=Fix.dorm;
                C.major=Fix.major;
                C.grade=Fix.grade;
            }
                stufile<<C.name;stufile<<endl;
                stufile<<C.sex;stufile<<endl;
                stufile<<C.identity;stufile<<endl;
                stufile<<C.birthday;stufile<<endl;
                stufile<<C.address;stufile<<endl;
                stufile<<C.age;stufile<<endl;
                stufile<<C.student_ID;stufile<<endl;
                stufile<<C.dorm;stufile<<endl;
                stufile<<C.major;stufile<<endl;
                stufile<<C.grade;stufile<<endl;
                star();
		}
		else
		{
                cout<<"it is error."<<endl;
        }
        stufile.close();
    }
}
void Professor::fix_inf(){
    vector<Professor> professors;
    fstream profile;
    profile.open("professer.txt",ios::in);
    if(profile.is_open()){
            while(!profile.eof()){
                Professor C;
                profile>>this->name;
                profile>>this->sex;
                profile>>this->identity;
                profile>>this->birthday;
                profile>>this->address;
                profile>>this->age;
                profile>>this->job_number;
                profile>>this->apartment;
                profile>>this->work_time;
                profile>>this->salary;
                profile>>this->teach_major;
                profile>>this->science;
                profile>>this->num_of_student;
                if(!profile.eof()){
                    C.name=this->name;
                    C.sex=this->sex;
                    C.identity=this->identity;
                    C.birthday=this->birthday;
                    C.address=this->address;
                    C.age=this->age;
                    C.job_number=this->job_number;
                    C.apartment=this->apartment;
                    C.work_time=this->work_time;
                    C.salary=this->salary;
                    C.teach_major=this->teach_major;
                    C.science=this->science;
                    C.num_of_student=this->num_of_student;
                    }
                else{break;}
                professors.push_back(C);
                star();
            }
            profile.close();
            star();
    }
    else{cout<<"It is error."<<endl;}
    profile.open("professor.txt",ios::out);
    profile.close();
    string pro_ID;
    cout<<"Please input your id which you want to fix:";cin>>pro_ID;
    cout<<"Input what you want to fix->"<<endl;
    Professor Fix;
    Fix.get_data();

    for(vector<Professor>::iterator s1=professors.begin();s1!=professors.end();s1++){
        Professor C;
        C=*s1;
		profile.open("professor.txt",ios::app);
        if(profile.is_open())
		{
            if(C.identity==pro_ID)
			{
                C.name=Fix.name;
                C.sex=Fix.sex;
                C.identity=Fix.identity;
                C.birthday=Fix.birthday;
                C.address=Fix.address;
                C.age=Fix.age;
                C.job_number=Fix.job_number;
                C.apartment=Fix.apartment;
                C.work_time=Fix.work_time;
                C.salary=Fix.salary;
                C.teach_major=Fix.teach_major;
                C.science=Fix.science;
                C.num_of_student=Fix.num_of_student;
            }
                profile<<C.name;profile<<endl;
                profile<<C.sex;profile<<endl;
                profile<<C.identity;profile<<endl;
                profile<<C.birthday;profile<<endl;
                profile<<C.address;profile<<endl;
                profile<<C.age;profile<<endl;
                profile<<C.job_number;profile<<endl;
                profile<<C.apartment;profile<<endl;
                profile<<C.work_time;profile<<endl;
                profile<<C.salary;profile<<endl;
                profile<<C.teach_major;profile<<endl;
                profile<<C.science;profile<<endl;
                profile<<C.num_of_student;profile<<endl;
                star();
		}
		else
		{
                cout<<"it is error."<<endl;
        }
        profile.close();
    }
}
void Worker::fix_inf(){
    vector<Worker> workers;
    fstream worfile;
    worfile.open("worker.txt",ios::in);
    if(worfile.is_open()){
            while(!worfile.eof()){
                Worker C;
                worfile>>this->name;
                worfile>>this->sex;
                worfile>>this->identity;
                worfile>>this->birthday;
                worfile>>this->address;
                worfile>>this->age;
                worfile>>this->job_number;
                worfile>>this->apartment;
                worfile>>this->work_time;
                worfile>>this->salary;
                worfile>>this->type_of_work;
                if(!worfile.eof()){
                    C.name=this->name;
                    C.sex=this->sex;
                    C.identity=this->identity;
                    C.birthday=this->birthday;
                    C.address=this->address;
                    C.age=this->age;
                    C.job_number=this->job_number;
                    C.apartment=this->apartment;
                    C.work_time=this->work_time;
                    C.salary=this->salary;
                    C.type_of_work=this->type_of_work;
                    }
                else{break;}
                workers.push_back(C);
                star();
            }
            worfile.close();
            star();
    }
    else{cout<<"It is error."<<endl;}
    worfile.open("worker.txt",ios::out);
    worfile.close();
    string wor_ID;
    cout<<"Please input your id which you want to fix:";cin>>wor_ID;
    cout<<"Input what you want to fix->"<<endl;
    Worker Fix;
    Fix.get_data();

    for(vector<Worker>::iterator s1=workers.begin();s1!=workers.end();s1++){
        Worker C;
        C=*s1;
		worfile.open("worker.txt",ios::app);
        if(worfile.is_open())
		{
            if(C.identity==wor_ID)
			{
                C.name=Fix.name;
                C.sex=Fix.sex;
                C.identity=Fix.identity;
                C.birthday=Fix.birthday;
                C.address=Fix.address;
                C.age=Fix.age;
                C.job_number=Fix.job_number;
                C.apartment=Fix.apartment;
                C.work_time=Fix.work_time;
                C.salary=Fix.salary;
                C.type_of_work=Fix.type_of_work;
            }
                worfile<<C.name;worfile<<endl;
                worfile<<C.sex;worfile<<endl;
                worfile<<C.identity;worfile<<endl;
                worfile<<C.birthday;worfile<<endl;
                worfile<<C.address;worfile<<endl;
                worfile<<C.age;worfile<<endl;
                worfile<<C.job_number;worfile<<endl;
                worfile<<C.apartment;worfile<<endl;
                worfile<<C.work_time;worfile<<endl;
                worfile<<C.salary;worfile<<endl;
                worfile<<C.type_of_work;
                star();
		}
		else
		{
                cout<<"it is error."<<endl;
        }
        worfile.close();
    }
}
void Student::delete_one(){
    vector<Student> students;
    fstream stufile;
    stufile.open("student.txt",ios::in);
    if(stufile.is_open()){
            while(!stufile.eof()){
                Student C;
                stufile>>this->name;
                stufile>>this->sex;
                stufile>>this->identity;
                stufile>>this->birthday;
                stufile>>this->address;
                stufile>>this->age;
                stufile>>this->student_ID;
                stufile>>this->dorm;
                stufile>>this->major;
                stufile>>this->grade;
                if(!stufile.eof()){
                    C.name=this->name;
                    C.sex=this->sex;
                    C.identity=this->identity;
                    C.birthday=this->birthday;
                    C.address=this->address;
                    C.age=this->age;
                    C.student_ID=this->student_ID;
                    C.dorm=this->dorm;
                    C.major=this->major;
                    C.grade=this->grade;
                    }
                else{break;}
                students.push_back(C);
            }
            stufile.close();
    }
    else{cout<<"It is error."<<endl;}
    stufile.open("student.txt",ios::out);
    stufile.close();
    string stu_ID;
    star();cout<<"Please input your id which you want to clean:";cin>>stu_ID;star();
    for(vector<Student>::iterator s1=students.begin();s1!=students.end();s1++){
        Student C;
        C=*s1;
		stufile.open("student.txt",ios::app);
        if(stufile.is_open())
		{
            if(C.identity!=stu_ID)
			{
                stufile<<this->name;stufile<<endl;
                stufile<<this->sex;stufile<<endl;
                stufile<<this->identity;stufile<<endl;
                stufile<<this->birthday;stufile<<endl;
                stufile<<this->address;stufile<<endl;
                stufile<<this->age;stufile<<endl;
                stufile<<this->student_ID;stufile<<endl;
                stufile<<this->dorm;stufile<<endl;
                stufile<<this->major;stufile<<endl;
                stufile<<this->grade;stufile<<endl;
            }
            else{cout<<"Delete."<<endl;star();}
		}
		else
		{
                cout<<"it is error."<<endl;
        }
        stufile.close();
    }
}
void Professor::delete_one(){
    vector<Professor> professors;
    fstream profile;
    profile.open("professer.txt",ios::in);
    if(profile.is_open()){
            while(!profile.eof()){
                Professor C;
                profile>>this->name;
                profile>>this->sex;
                profile>>this->identity;
                profile>>this->birthday;
                profile>>this->address;
                profile>>this->age;
                profile>>this->job_number;
                profile>>this->apartment;
                profile>>this->work_time;
                profile>>this->salary;
                profile>>this->teach_major;
                profile>>this->science;
                profile>>this->num_of_student;
                if(!profile.eof()){
                    C.name=this->name;
                    C.sex=this->sex;
                    C.identity=this->identity;
                    C.birthday=this->birthday;
                    C.address=this->address;
                    C.age=this->age;
                    C.job_number=this->job_number;
                    C.apartment=this->apartment;
                    C.work_time=this->work_time;
                    C.salary=this->salary;
                    C.teach_major=this->teach_major;
                    C.science=this->science;
                    C.num_of_student=this->num_of_student;
                    }
                else{break;}
                professors.push_back(C);
            }
            profile.close();
            star();
    }
    else{cout<<"It is error."<<endl;}
    profile.open("professor.txt",ios::out);
    profile.close();
    string pro_ID;
    star();cout<<"Please input your id which you want to fix:";cin>>pro_ID;star();
    for(vector<Professor>::iterator s1=professors.begin();s1!=professors.end();s1++){
        Professor C;
        C=*s1;
		profile.open("professor.txt",ios::app);
        if(profile.is_open())
		{
            if(C.identity!=pro_ID)
			{
                profile<<this->name;profile<<endl;
                profile<<this->sex;profile<<endl;
                profile<<this->identity;profile<<endl;
                profile<<this->birthday;profile<<endl;
                profile<<this->address;profile<<endl;
                profile<<this->age;profile<<endl;
                profile<<this->job_number;profile<<endl;
                profile<<this->apartment;profile<<endl;
                profile<<this->work_time;profile<<endl;
                profile<<this->salary;profile<<endl;
                profile<<this->teach_major;profile<<endl;
                profile<<this->science;profile<<endl;
                profile<<this->num_of_student;profile<<endl;
            }
            else{cout<<"Delete."<<endl;star();}
		}
		else
		{
                cout<<"it is error."<<endl;
        }
        profile.close();
    }
}
void Worker::delete_one(){
    vector<Worker> workers;
    fstream worfile;
    worfile.open("worker.txt",ios::in);
    if(worfile.is_open()){
            while(!worfile.eof()){
                Worker C;
                worfile>>this->name;
                worfile>>this->sex;
                worfile>>this->identity;
                worfile>>this->birthday;
                worfile>>this->address;
                worfile>>this->age;
                worfile>>this->job_number;
                worfile>>this->apartment;
                worfile>>this->work_time;
                worfile>>this->salary;
                worfile>>this->type_of_work;
                if(!worfile.eof()){
                    C.name=this->name;
                    C.sex=this->sex;
                    C.identity=this->identity;
                    C.birthday=this->birthday;
                    C.address=this->address;
                    C.age=this->age;
                    C.job_number=this->job_number;
                    C.apartment=this->apartment;
                    C.work_time=this->work_time;
                    C.salary=this->salary;
                    C.type_of_work=this->type_of_work;
                    }
                else{break;}
                workers.push_back(C);
            }
            worfile.close();
            star();
    }
    else{cout<<"It is error."<<endl;}
    worfile.open("worker.txt",ios::out);
    worfile.close();
    string wor_ID;
    star();cout<<"Please input your id which you want to fix:";cin>>wor_ID;star();

    for(vector<Worker>::iterator s1=workers.begin();s1!=workers.end();s1++){
        Worker C;
        C=*s1;
		worfile.open("worker.txt",ios::app);
        if(worfile.is_open())
		{
            if(C.identity==wor_ID)
			{
                worfile<<this->name;worfile<<endl;
                worfile<<this->sex;worfile<<endl;
                worfile<<this->identity;worfile<<endl;
                worfile<<this->birthday;worfile<<endl;
                worfile<<this->address;worfile<<endl;
                worfile<<this->age;worfile<<endl;
                worfile<<this->job_number;worfile<<endl;
                worfile<<this->apartment;worfile<<endl;
                worfile<<this->work_time;worfile<<endl;
                worfile<<this->salary;worfile<<endl;
                worfile<<this->type_of_work;worfile<<endl;
            }
            else{cout<<"Delete."<<endl;star();}
		}
		else
		{
                cout<<"it is error."<<endl;
        }
        worfile.close();
    }
}
void Student::dective(){
       switch(b){
                case 1:cout<<"EXECUTE Add."<<endl;
                        star();
                        this->into_file();
                        this->EXECUTEPCUI();
                        this->dective();
                        break;//增節點
                case 2:cout<<"EXECUTE Show."<<endl;
                        star();
                       this->out_file();
                       this->EXECUTEPCUI();
                       this->dective();
                        break;//尋訪輸出
                case 3:cout<<"EXECUTE Fix."<<endl;
                        star();
                        this->fix_inf();
                        this->EXECUTEPCUI();
                        this->dective();
                        break;//修資料
                case 4:cout<<"EXECUTE Delete."<<endl;
                        this->delete_one();
                        this->EXECUTEPCUI();
                        this->dective();
                        break;//刪節點
                case 5:cout<<"EXECUTE Find."<<endl;
                        star();
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
                            star();
                            this->into_file();
                            this->EXECUTEPCUI();
                            this->dective();
                            break;//增節點
                    case 2:cout<<"EXECUTE Show."<<endl;
                            star();
                            this->out_file();
                            this->EXECUTEPCUI();
                            this->dective();
                            break;//尋訪輸出
                    case 3:cout<<"EXECUTE Fix."<<endl;
                            star();
                            this->fix_inf();
                            this->EXECUTEPCUI();
                            this->dective();
                            break;//修資料
                    case 4:cout<<"EXECUTE Delete."<<endl;
                        this->delete_one();
                        this->EXECUTEPCUI();
                        this->dective();
                            break;//刪節點
                    case 5:cout<<"EXECUTE Find."<<endl;
                            star();
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
                            star();
                            this->into_file();
                            this->EXECUTEPCUI();
                            this->dective();
                            break;//增節點
                    case 2:cout<<"EXECUTE Show."<<endl;
                            star();
                            this->out_file();
                            this->EXECUTEPCUI();
                            this->dective();
                            break;//尋訪輸出
                    case 3:cout<<"EXECUTE Fix."<<endl;
                            star();
                            this->fix_inf();
                            this->EXECUTEPCUI();
                            this->dective();
                        break;//修資料
                    case 4:cout<<"EXECUTE Delete."<<endl;
                        this->delete_one();
                        this->EXECUTEPCUI();
                        this->dective();
                            break;//刪節點
                    case 5:cout<<"EXECUTE Find."<<endl;
                            star();
                            this->find_inf();
                            this->EXECUTEPCUI();
                            this->dective();
                           break;//找節點
                    case 6:cout<<"Return menu1"<<endl;PersonalChoiceUI the_next;the_next.EXECUTEPCUI();
                           break;//回頁面一
                }


}

