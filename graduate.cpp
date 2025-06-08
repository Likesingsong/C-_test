//
// Created by dell on 2022-5-12.
//

#include "Graduate.h"
//�вι��캯������
Graduate::Graduate(int num, const string& name, char gender, const string& birth, const string& id, int class_no, const string& subject,
    Teacher& adviser) : Student(num, name, gender, birth, id, class_no), subject(subject), adviser(adviser) {
}
//��Ա����Show����
void Graduate::Show() {
    Student::Show();
    cout<<",רҵ��:"<<subject<<",��ʦ��:"<<adviser.getName();
}
//���ƹ��캯������
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
