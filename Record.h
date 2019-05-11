class Record
{
	protected:
		std::string name;
		char sex;
		std::string identity;
		std::string birthday;
		std::string address;
		int age;
};
class StudentNode:public Record{
    private:
		std::string student_ID;
		std::string dorm;
		std::string major;
		int grade;
};
class Staff:public Record {
	protected:
		std::string job_number;
		std::string apartment;
		double work_time ;
		double salary;
};//: public Staff
class Professor :public Staff{
	protected:
		std::string teach_major;
		std::string science;
		int num_of_student;
};
class Worker: public Staff{
	protected:
		std::string type_of_work;
		Worker*next;
};





