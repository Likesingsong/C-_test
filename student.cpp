//
// Created by dell on 2022-5-12.
//

#include "Student.h"

//�вι��캯������
Student::Student(int num, const string& name, char gender, const string& birth, const string& id, int class_no) :
    People(num, name, gender, birth, id), class_no(class_no) {
}
//���ƹ��캯������
Student::Student(Student &student)  : People(student) {
    class_no = student.class_no;
}
//��Ա����Show����
void Student::Show() {
    People::Show();
    cout<<"\n�����:"<< class_no;
}

int Student::getClassNo() const {
    return class_no;
}

void Student::setClassNo(int classNo) {
    Student::class_no = classNo;
}
