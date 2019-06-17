#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
//安安你好哇

void read_file(){
    int SIZE = 100;
    char line[SIZE];
    
    fstream fin;
    fin.open("student_file.txt",ios::in);
    while(fin.getline(line,sizeof(line),'\n')){
        cout<<line<<endl;
    }
    
  
    
}

void write_file(){
    
    ofstream outstudent("student_file.txt", ios::out);
    if(!outstudent){
        cerr << "fail to create the file";
        exit(1);
    }
    cout<<"輸入學號，姓名，系所"<<endl;
    cout<<"enter end-of-file to input.\n?";
    
    
    int id;
    string student_name;
    string department;
    
    while(cin >> id >> student_name >> department){
        outstudent<< id <<' '<< student_name << ' '<< department <<endl;
        cout<<"? ";
    }
    
}



int main() {
    write_file();
    read_file();
    
}
