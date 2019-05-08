#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include"class_libary.h"
using namespace std;

int main(void){
    void star();
    Student C;
    C.basic_get_data();
    C.get_data();
    star();
    C.basic_show_data();
    C.show_data();
    star();
    Professor D;
    D.basic_get_data();
    D.sub_get_data();
    D.get_data();


    ofstream Studentfile("C:\орн▒\codeblocks\XMUC++\Student_file.dat",ios::binary);
    Studentfile.write((char*)&C,sizeof(C));
    Studentfile.close();



system("pause");
return 0;
}
void star(){
    cout<<"*********************************************"<<endl;
}

