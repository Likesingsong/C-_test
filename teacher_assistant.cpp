//
// Created by dell on 2022-5-12.
//

#include "TA.h"
//有参构造函数定义
TA::TA(int num, const string& name, char gender, const string& birth, const string& idcard, const string& principalship,
	const string& department, int class_no, const string& subject, Teacher& adviser) :
	People(num, name, gender, birth, idcard),
	Teacher(num, name, gender, birth, idcard, principalship, department),
	Student(num, name, gender, birth, idcard, class_no),
	Graduate(num, name, gender, birth, idcard, class_no, subject, adviser) {
}
//复制构造函数定义
TA::TA(TA& ta) :Graduate(ta) {
	principalship = ta.principalship;
	department = ta.department;
}
//成员函数Show定义
void TA::Show() {
	Teacher::Show();
	cout << ",班号是:" << class_no << ",专业是:" << subject << ",导师是:" << adviser.getName();
}


