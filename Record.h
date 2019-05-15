class AbilityUI{
public:
    int b;
    void show();
    void choice();
    void EXECUTEPCUI();
};
class Record:public AbilityUI
{
	protected:
		std::string name;
		char sex;
		std::string identity;
		std::string birthday;
		std::string address;
		int age;
    public:
        Record(){}
        void basic_get_data();
        void basic_show_data();
        Record& operator==(const Record&the_other);
};
class Student:public Record{
    protected:
		std::string student_ID;
		std::string dorm;
		std::string major;
		int grade;
    public:
        Student():Record(){}
        void get_data();
        void show_data();
        void into_file();
        void dective();
        void out_file();
        void close_file();


};
class Staff:public Record {
	protected:
		std::string job_number;
		std::string apartment;
		double work_time ;
		double salary;
    public:
        Staff():Record(){}
        void sub_get_data();
        void sub_show_data();
};//: public Staff
class Professor :public Staff{
	protected:
		std::string teach_major;
		std::string science;
		int num_of_student;
    public:
        Professor():Staff(){}
        void get_data();
        void dective();
        void show_data();
        void into_file();
        void out_file();
};
class Worker: public Staff{
	protected:
		std::string type_of_work;
    public:
        Worker():Staff(){}
        void get_data();
        void dective();
        void show_data();
        void into_file();
        void out_file();
};





