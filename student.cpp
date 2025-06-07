//
// Created by dell on 2022-5-12.
//

#include "Student.h"
//有参构造函数定义
// 修复构造函数定义，确保参数类型与声明一致
Student::Student(int num, const string& name, char gender, const string& birth, const string& id, int class_no) :
    People(num, name, gender, birth, id), class_no(class_no) {
}
//复制构造函数定义
Student::Student(Student &student)  : People(student) {
    class_no = student.class_no;
}
//成员函数Show定义
void Student::Show() {
    People::Show();
    cout<<"\n班号是:"<< class_no;
}

int Student::getClassNo() const {
    return class_no;
}

void Student::setClassNo(int classNo) {
    Student::class_no = classNo;
}
