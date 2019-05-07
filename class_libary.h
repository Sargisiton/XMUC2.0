#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
class PersonalChoiceUI{
    private:
        ABilityChoiceUI*next;
        Student*next;
        Professor*next;
        Worker*next;
    public:
        PersonalChoiceUI(){};
        void show(){
        int a;
        cout<<"1.Student"<<endl;
        cout<<"2.Professor"<<endl;
        cout<<"3.Worker"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Please input(1-4):";
        cin>>a;
        }
};
class ABilityChoiceUI{};;
class record{
    protected:
		char name[10];
		bool sex;
		char identity[18];
		char birthday[10];
		char address[20];
		int age;
};
class staff{
    protected:
		char job_number[20];
		char apartment[10];
		double work_time ;
		double salary;
};
class Student{
    protected:
		char student_ID[20];
		char dorm[10];
		char major[10];
		int grade;
};
class Professor{
    protected:
		char teach_major[10];
		char science[20];
		int num_of_student;
};
class Worker{
    protected:
		char type_of_work[20];
};
