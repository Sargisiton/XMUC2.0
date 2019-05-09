#include<iostream>
#include<cstdlib>
using namespace std;

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
class studentNode:public Record{
    private:
		string student_ID;
		string dorm;
		string major;
		int grade;
		StudentNode*next;
	public:
	     void get_data()
                {   string stid;string dor;string ma;int a;
                    cout<<"Inter your ID:";getline(cin,stid);
                    cout<<"Inter your Dorm:";getline(cin,dor);
                    cout<<"Inter your major:";getline(cin,ma);
                    cout<<"Inter your grade:";(cin>>a).get();
                }
          void show_data(){
                    cout<<"ID:"<<student_ID<<endl;
                    cout<<"Dorm:"<<dorm<<endl;
                    cout<<"Major:"<<major<<endl;
                    cout<<"Grade:"<<grade<<endl;
                }



         friend class Student;
};



