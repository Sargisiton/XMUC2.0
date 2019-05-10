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
         friend class Student;
};



