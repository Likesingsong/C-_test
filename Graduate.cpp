//
// Created by dell on 2022-5-12.
//

#include "Graduate.h"
//有参构造函数定义
Graduate::Graduate(int num, const string &n, char g, const string &birth, const string &id, int cNo,
                   const string &sub,Teacher &adv) :
                   Student(num,n,g,birth,id,cNo),Subject(sub), Adviser(adv){}
//成员函数Show定义
void Graduate::Show() {
    Student::Show();
    cout<<",专业是:"<<Subject<<",导师是:"<<Adviser.getName();
}
//复制构造函数定义
Graduate::Graduate(Graduate &graduate) : Student(graduate){
    Subject = graduate.Subject;
    Adviser = graduate.Adviser;
}

const string &Graduate::getSubject() const {
    return Subject;
}

void Graduate::setSubject(const string &subject) {
    Subject = subject;
}

void Graduate::setAdviser(Teacher adviser){
    Adviser = adviser;
}

const string &Graduate::getAdviserName() const {
    return Adviser.getName();
}






