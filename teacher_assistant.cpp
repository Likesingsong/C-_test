//
// Created by dell on 2022-5-12.
//

#include "TA.h"
//�вι��캯������
TA::TA(int num, const string& name, char gender, const string& birth, const string& idcard, const string& principalship,
	const string& department, int class_no, const string& subject, Teacher& adviser) :
	People(num, name, gender, birth, idcard),
	Teacher(num, name, gender, birth, idcard, principalship, department),
	Student(num, name, gender, birth, idcard, class_no),
	Graduate(num, name, gender, birth, idcard, class_no, subject, adviser) {
}
//���ƹ��캯������
TA::TA(TA& ta) :Graduate(ta) {
	principalship = ta.principalship;
	department = ta.department;
}
//��Ա����Show����
void TA::Show() {
	Teacher::Show();
	cout << ",�����:" << class_no << ",רҵ��:" << subject << ",��ʦ��:" << adviser.getName();
}


