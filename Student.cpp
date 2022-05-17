//
// Created by dell on 2022-5-12.
//

#include "Student.h"
//有参构造函数定义
Student::Student(int num, const string &n, char g, const string &birth, const string &id, int cNo) :
        People(num,n,g,birth,id),classNo(cNo){}
//复制构造函数定义
Student::Student(Student &student)  : People(student) {
    classNo = student.classNo;
}
//成员函数Show定义
void Student::Show() {
    People::Show();
    cout<<"\n班号是:"<<classNo;
}

int Student::getClassNo() const {
    return classNo;
}

void Student::setClassNo(int classNo) {
    Student::classNo = classNo;
}
