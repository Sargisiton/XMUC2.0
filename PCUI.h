#include<iostream>
#include<cstdlib>
using namespace std;
void star(){
    cout<<"************************"<<endl;
}

class PersonalChoiceUI{//�����@�����O
    private:
        int a;
    public:
        void show(){
        cout<<"1.Student"<<endl;
        cout<<"2.Professor"<<endl;
        cout<<"3.Worker"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Please input(1-4):";
        }
        void choice(){
                (cin>>a).get();
                cout<<endl;
                star();
        }
        void dective(){
            switch(a){
                case 1:cout<<"EXECUTE student ability.";
                       break;//�ЫئU���O���
                case 2:cout<<"EXECUTE professor ability.";
                       break;
                case 3:cout<<"EXECUTE worker ability.";
                       break;
                case 4:cout<<"Thank you to use this system."<<endl;system("pause");return ;
                       break;//��������
            }


        }
};
