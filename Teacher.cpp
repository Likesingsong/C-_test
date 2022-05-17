//
// Created by dell on 2022-5-12.
//

#include "Teacher.h"
//有参构造函数定义
Teacher::Teacher(int num, const string &n, char g, const string &birth,const string &id,
                 const string &principalship,const string &department) :
                 People(num, n, g, birth, id), Principalship(principalship),Department(department) {}
//复制构造函数定义
Teacher::Teacher(Teacher &teacher)  : People(teacher) {
    Principalship = teacher.Principalship;
    Department = teacher.Department;
}
//成员函数Show定义
void Teacher::Show() {
    People::Show();
    cout<<"\n职务是:"<<Principalship<<",部门是:"<<Department;
}

const string &Teacher::getPrincipalship() const {
    return Principalship;
}

void Teacher::setPrincipalship(const string &principalship) {
    Principalship = principalship;
}

const string &Teacher::getDepartment() const {
    return Department;
}

void Teacher::setDepartment(const string &department) {
    Department = department;
}



