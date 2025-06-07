//
// Created by dell on 2022-5-12.
//

#ifndef INC_1_5_TEACHER_H
#define INC_1_5_TEACHER_H
#include "People.h"
#include <string>
using namespace std;
class Teacher :virtual public People{
public:
    //�޲ι���
    Teacher() = default;
    //��������
    ~Teacher() = default;
    //�вι���
    Teacher(int num, const string& name, char gender, const string& birth, const string& id, const string &principalship,
            const string &department);
    //���ƹ���
    Teacher(Teacher &teacher);
    //getPrincipalship
    const string &getPrincipalship() const;
    //setPrincipalship
    void setPrincipalship(const string &principalship);
    //getDepartment
    const string &getDepartment() const;
    //setDepartment
    void setDepartment(const string &department);
    //��ӡ��Ϣ
    void Show();

protected:
    string principalship,department;
};
#endif //INC_1_5_TEACHER_H
