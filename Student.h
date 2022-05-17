//
// Created by dell on 2022-5-12.
//

#ifndef INC_1_5_STUDENT_H
#define INC_1_5_STUDENT_H
#include "People.h"
class Student : virtual public People{
public:
    //�޲ι��캯��
    Student() = default;
    //��������
    ~Student()= default;
    //�вι��캯��
    Student(int num, const string &n, char g, const string &birth, const string &id,int cNo);
    //���ƹ��캯��
    Student(Student &student);
    //��ӡ��Ϣ
    void Show();
    //getClassNo
    int getClassNo() const;
    //setClassNo
    void setClassNo(int classNo);

protected:
    int classNo;
};


#endif //INC_1_5_STUDENT_H
