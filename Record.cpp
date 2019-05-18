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
    stufile.open("student.dat",ios::binary|ios::app);
    this->get_data();
    if(stufile.is_open()){
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
    ffile.open("student.dat",ios::in|ios::out|ios::binary|ios::app);
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
        {if(!ffile.eof()){show_data();}
        else{break;}
        star();}
    }while(!ffile.eof());
}
void Student::fix_inf(){
    vector<Student> students;
    fstream stufile;
    stufile.open("student.dat",ios::binary|ios::in|ios::app);
    if(stufile.is_open()){
            while(!stufile.eof()){
                Student C;
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
    stufile.open("student.dat",ios::binary|ios::out);
    stufile.close();
    string stu_ID;
    cout<<"Please input your id which you want to fix:";cin>>stu_ID;
    cout<<"Input what you want to fix->"<<endl;
    Student Fix;
    Fix.get_data();

    for(vector<Student>::iterator s1=students.begin();s1!=students.end();s1++){
        Student C;
        C=*s1;
		stufile.open("student.dat",ios::binary|ios::app);
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
                stufile.write((char*)&C.name,sizeof(C.name));
                stufile.write((char*)&C.sex,sizeof(C.sex));
                stufile.write((char*)&C.identity,sizeof(C.identity));
                stufile.write((char*)&C.birthday,sizeof(C.birthday));
                stufile.write((char*)&C.address,sizeof(C.address));
                stufile.write((char*)&C.age,sizeof(C.age));
                stufile.write((char*)&C.student_ID,sizeof(C.student_ID));
                stufile.write((char*)&C.dorm,sizeof(C.dorm));
                stufile.write((char*)&C.major,sizeof(C.major));
                stufile.write((char*)&C.grade,sizeof(C.grade));
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
    profile.open("professer.dat",ios::binary|ios::in|ios::app);
    if(profile.is_open()){
            while(!profile.eof()){
                Professor C;
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
    profile.open("professor.dat",ios::binary|ios::out);
    profile.close();
    string pro_ID;
    cout<<"Please input your id which you want to fix:";cin>>pro_ID;
    cout<<"Input what you want to fix->"<<endl;
    Professor Fix;
    Fix.get_data();

    for(vector<Professor>::iterator s1=professors.begin();s1!=professors.end();s1++){
        Professor C;
        C=*s1;
		profile.open("professor.dat",ios::binary|ios::app);
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
                profile.write((char*)&C.name,sizeof(C.name));
                profile.write((char*)&C.sex,sizeof(C.sex));
                profile.write((char*)&C.identity,sizeof(C.identity));
                profile.write((char*)&C.birthday,sizeof(C.birthday));
                profile.write((char*)&C.address,sizeof(C.address));
                profile.write((char*)&C.age,sizeof(C.age));
                profile.write((char*)&C.job_number,sizeof(C.job_number));
                profile.write((char*)&C.apartment,sizeof(C.apartment));
                profile.write((char*)&C.work_time,sizeof(C.work_time));
                profile.write((char*)&C.salary,sizeof(C.salary));
                profile.write((char*)&C.teach_major,sizeof(C.teach_major));
                profile.write((char*)&C.science,sizeof(C.science));
                profile.write((char*)&C.num_of_student,sizeof(C.num_of_student));
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
    worfile.open("worker.dat",ios::binary|ios::in|ios::app);
    if(worfile.is_open()){
            while(!worfile.eof()){
                Worker C;
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
    worfile.open("worker.dat",ios::binary|ios::out);
    worfile.close();
    string wor_ID;
    cout<<"Please input your id which you want to fix:";cin>>wor_ID;
    cout<<"Input what you want to fix->"<<endl;
    Worker Fix;
    Fix.get_data();

    for(vector<Worker>::iterator s1=workers.begin();s1!=workers.end();s1++){
        Worker C;
        C=*s1;
		worfile.open("worker.dat",ios::binary|ios::app);
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
                worfile.write((char*)&C.name,sizeof(C.name));
                worfile.write((char*)&C.sex,sizeof(C.sex));
                worfile.write((char*)&C.identity,sizeof(C.identity));
                worfile.write((char*)&C.birthday,sizeof(C.birthday));
                worfile.write((char*)&C.address,sizeof(C.address));
                worfile.write((char*)&C.age,sizeof(C.age));
                worfile.write((char*)&C.job_number,sizeof(C.job_number));
                worfile.write((char*)&C.apartment,sizeof(C.apartment));
                worfile.write((char*)&C.work_time,sizeof(C.work_time));
                worfile.write((char*)&C.salary,sizeof(C.salary));
                worfile.write((char*)&C.type_of_work,sizeof(C.type_of_work));
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
    stufile.open("student.dat",ios::binary|ios::in|ios::app);
    if(stufile.is_open()){
            while(!stufile.eof()){
                Student C;
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
    stufile.open("student.dat",ios::binary|ios::out);
    stufile.close();
    string stu_ID;
    cout<<"Please input your id which you want to clean:";cin>>stu_ID;
    for(vector<Student>::iterator s1=students.begin();s1!=students.end();s1++){
        Student C;
        C=*s1;
		stufile.open("student.dat",ios::binary|ios::app);
        if(stufile.is_open())
		{
            if(C.identity!=stu_ID)
			{
                stufile.write((char*)&C.name,sizeof(C.name));
                stufile.write((char*)&C.sex,sizeof(C.sex));
                stufile.write((char*)&C.identity,sizeof(C.identity));
                stufile.write((char*)&C.birthday,sizeof(C.birthday));
                stufile.write((char*)&C.address,sizeof(C.address));
                stufile.write((char*)&C.age,sizeof(C.age));
                stufile.write((char*)&C.student_ID,sizeof(C.student_ID));
                stufile.write((char*)&C.dorm,sizeof(C.dorm));
                stufile.write((char*)&C.major,sizeof(C.major));
                stufile.write((char*)&C.grade,sizeof(C.grade));
                star();
            }
            else{cout<<"Delete."<<endl;}
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
    profile.open("professer.dat",ios::binary|ios::in|ios::app);
    if(profile.is_open()){
            while(!profile.eof()){
                Professor C;
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
    profile.open("professor.dat",ios::binary|ios::out);
    profile.close();
    string pro_ID;
    cout<<"Please input your id which you want to fix:";cin>>pro_ID;
    cout<<"Input what you want to fix->"<<endl;
    Professor Fix;
    Fix.get_data();

    for(vector<Professor>::iterator s1=professors.begin();s1!=professors.end();s1++){
        Professor C;
        C=*s1;
		profile.open("professor.dat",ios::binary|ios::app);
        if(profile.is_open())
		{
            if(C.identity!=pro_ID)
			{
                profile.write((char*)&C.name,sizeof(C.name));
                profile.write((char*)&C.sex,sizeof(C.sex));
                profile.write((char*)&C.identity,sizeof(C.identity));
                profile.write((char*)&C.birthday,sizeof(C.birthday));
                profile.write((char*)&C.address,sizeof(C.address));
                profile.write((char*)&C.age,sizeof(C.age));
                profile.write((char*)&C.job_number,sizeof(C.job_number));
                profile.write((char*)&C.apartment,sizeof(C.apartment));
                profile.write((char*)&C.work_time,sizeof(C.work_time));
                profile.write((char*)&C.salary,sizeof(C.salary));
                profile.write((char*)&C.teach_major,sizeof(C.teach_major));
                profile.write((char*)&C.science,sizeof(C.science));
                profile.write((char*)&C.num_of_student,sizeof(C.num_of_student));
                star();
            }
            else{cout<<"Delete."<<endl;}
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
    worfile.open("worker.dat",ios::binary|ios::in|ios::app);
    if(worfile.is_open()){
            while(!worfile.eof()){
                Worker C;
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
    worfile.open("worker.dat",ios::binary|ios::out);
    worfile.close();
    string wor_ID;
    cout<<"Please input your id which you want to fix:";cin>>wor_ID;
    cout<<"Input what you want to fix->"<<endl;
    Worker Fix;
    Fix.get_data();

    for(vector<Worker>::iterator s1=workers.begin();s1!=workers.end();s1++){
        Worker C;
        C=*s1;
		worfile.open("worker.dat",ios::binary|ios::app);
        if(worfile.is_open())
		{
            if(C.identity==wor_ID)
			{
                worfile.write((char*)&C.name,sizeof(C.name));
                worfile.write((char*)&C.sex,sizeof(C.sex));
                worfile.write((char*)&C.identity,sizeof(C.identity));
                worfile.write((char*)&C.birthday,sizeof(C.birthday));
                worfile.write((char*)&C.address,sizeof(C.address));
                worfile.write((char*)&C.age,sizeof(C.age));
                worfile.write((char*)&C.job_number,sizeof(C.job_number));
                worfile.write((char*)&C.apartment,sizeof(C.apartment));
                worfile.write((char*)&C.work_time,sizeof(C.work_time));
                worfile.write((char*)&C.salary,sizeof(C.salary));
                worfile.write((char*)&C.type_of_work,sizeof(C.type_of_work));
                star();
            }
            else{cout<<"Delete."<<endl;}
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
                        star();
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
                            star();
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
                            star();
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

