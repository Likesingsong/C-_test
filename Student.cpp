//
// Created by dell on 2022-5-12.
//

#include "Student.h"
//�вι��캯������
Student::Student(int num, const string &n, char g, const string &birth, const string &id, int cNo) :
        People(num,n,g,birth,id),classNo(cNo){}
//���ƹ��캯������
Student::Student(Student &student)  : People(student) {
    classNo = student.classNo;
}
//��Ա����Show����
void Student::Show() {
    People::Show();
    cout<<"\n�����:"<<classNo;
}

int Student::getClassNo() const {
    return classNo;
}

void Student::setClassNo(int classNo) {
    Student::classNo = classNo;
}
