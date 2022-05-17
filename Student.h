//
// Created by dell on 2022-5-12.
//

#ifndef INC_1_5_STUDENT_H
#define INC_1_5_STUDENT_H
#include "People.h"
class Student : virtual public People{
public:
    //无参构造函数
    Student() = default;
    //析构函数
    ~Student()= default;
    //有参构造函数
    Student(int num, const string &n, char g, const string &birth, const string &id,int cNo);
    //复制构造函数
    Student(Student &student);
    //打印信息
    void Show();
    //getClassNo
    int getClassNo() const;
    //setClassNo
    void setClassNo(int classNo);

protected:
    int classNo;
};


#endif //INC_1_5_STUDENT_H
