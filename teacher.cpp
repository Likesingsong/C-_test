//
// Created by dell on 2022-5-12.
//

#include "Teacher.h"
//�вι��캯������
Teacher::Teacher(int num, const string& name, char gender, const string& birth, const string& id,
	const string& principalship, const string& department) :
	People(num, name, gender, birth, id), principalship(principalship), department(department) {
}
//���ƹ��캯������
Teacher::Teacher(Teacher& teacher) : People(teacher) {
	principalship = teacher.principalship;
	department = teacher.department;
}
//��Ա����Show����
void Teacher::Show() {
	People::Show();
	cout << "\nְ����:" << principalship << ",������:" << department;
}

const string& Teacher::getPrincipalship() const {
	return principalship;
}

void Teacher::setPrincipalship(const string& principalship) {
	Teacher::principalship = principalship;
}

const string& Teacher::getDepartment() const {
	return department;
}

void Teacher::setDepartment(const string& department) {
	Teacher::department = department;
}



