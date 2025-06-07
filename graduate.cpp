//
// Created by dell on 2022-5-12.
//

#include "Graduate.h"
//有参构造函数定义
Graduate::Graduate(int num, const string& name, char gender, const string& birth, const string& id, int class_no, const string& subject,
    Teacher& adviser) : Student(num, name, gender, birth, id, class_no), subject(subject), adviser(adviser) {
}
//成员函数Show定义
void Graduate::Show() {
    Student::Show();
    cout<<",专业是:"<<subject<<",导师是:"<<adviser.getName();
}
//复制构造函数定义
Graduate::Graduate(Graduate &graduate) : Student(graduate){
    subject = graduate.subject;
    adviser = graduate.adviser;
}

void Graduate::setSubject(const string& subject) {
    Graduate::subject = subject;
}

const string &Graduate::getSubject() const {
    return subject;
}

void Graduate::setAdviser(Teacher adviser){
    Graduate::adviser = adviser;
}

const string &Graduate::getAdviserName() const {
    return adviser.getName();
}






