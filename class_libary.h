#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
static int a[2];
class PersonalChoiceUI{//介面一的類別
    public:
        void show(){
        cout<<"1.Student"<<endl;
        cout<<"2.Professor"<<endl;
        cout<<"3.Worker"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Please input(1-4):";
        }
        void choice(){
        cin>>a[0];
        }
        void dective(){
        if(a[0==4]){
            cout <<"Thanks to you."<<endl;
        }
        else{;}
        }
};
class AbilityChoiceUI{//介面二的類別
    public:
        void show(){
        cout<<"1.Input record"<<endl;
        cout<<"2.Show record"<<endl;
        cout<<"3.Fix record"<<endl;
        cout<<"4.Delete record"<<endl;
        cout<<"5.Find record"<<endl;
        cout<<"6.Quit"<<endl;
        cout<<"Please input(1-6):";
        }
        void choice(){
        cin>>a[1];
        }


};
class Record
{
	protected:
		string name;
		char sex;
		string identity;
		string birthday;
		string address;
		int age;
    public:
        Record(){}
		void basic_get_data()
		{

			cout<<"Inter your Name:";getline(cin,name);
			cout<<"Inter your Sex:";cin.get(sex);
			cout<<"Inter your identity:";getline(cin,identity);
			cout<<"Inter your birthday:";getline(cin,birthday);
			cout<<"Inter your address:";getline(cin,address);
			cout<<"Inter your age:";(cin>>age).get();
		}
		void basic_show_data(){
            cout<<"Name:"<<name<<endl;
            cout<<"Sex:"<<sex<<endl;
            cout<<"Identity:"<<identity<<endl;
            cout<<"Birthday:"<<birthday<<endl;
            cout<<"Address:"<<address<<endl;
            cout<<"Age:"<<age<<endl;

		}
};
class Student:public Record
{
	protected:
		string student_ID;
		string dorm;
		string major;
		int grade;
	public:
	    Student():Record(){}
		void get_data()
		{

			cout<<"Inter your ID:";getline(cin,student_ID);
			cout<<"Inter your Dorm:";getline(cin,dorm);
			cout<<"Inter your major:";getline(cin,major);
			cout<<"Inter your grade:";(cin>>grade).get();
		}
		void show_data(){
            cout<<"ID:"<<student_ID<<endl;
            cout<<"Dorm:"<<dorm<<endl;
            cout<<"Major:"<<major<<endl;
            cout<<"Grade:"<<grade<<endl;
		}
};
class Staff:public Record //: public Staff
{
	protected:
		string job_number;
		string apartment;
		double work_time ;
		double salary;
    public:
        Staff():Record(){}
        void sub_get_data()
		{

			cout<<"Inter your Job Number:";getline(cin,job_number);
			cout<<"Inter your Apartment:";getline(cin,apartment);
			cout<<"Inter your Work Time:";(cin>>work_time).get();
			cout<<"Inter your Salary:";(cin>>salary).get();
		}
		void sub_show_data(){
            cout<<"Job Number:"<<job_number<<endl;
            cout<<"Apartment:"<<apartment<<endl;
            cout<<"Work Time:"<<work_time<<endl;
            cout<<"Salary:"<<salary<<endl;
		}

};
class Professor :public Staff
{
	protected:
		string teach_major;
		string science;
		int num_of_student;
    public:
        Professor():Staff(){}
        void get_data(){
            cout<<"Inter your Teach Major:";getline(cin,teach_major);
			cout<<"Inter your Science:";getline(cin,science);
			cout<<"Inter your Number of Student:";(cin>>num_of_student).get();
        }
        void show_data(){
            cout<<"Teach Major:"<<teach_major<<endl;
            cout<<"Science:"<<science<<endl;
            cout<<"Number of Student:"<<num_of_student<<endl;
		}
};
class Worker: public Staff
{
	protected:
		string type_of_work;
    public:
        Worker():Staff(){}
        void get_data(){
            cout<<"Inter your Type of Work:";getline(cin,type_of_work);
        }
        void show_data(){
            cout<<"Type of Work:"<<type_of_work<<endl;
		}
};
