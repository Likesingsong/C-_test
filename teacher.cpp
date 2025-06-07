//
// Created by dell on 2022-5-12.
//

#include "Teacher.h"
//有参构造函数定义
Teacher::Teacher(int num, const string& name, char gender, const string& birth, const string& id,
	const string& principalship, const string& department) :
	People(num, name, gender, birth, id), principalship(principalship), department(department) {
}
//复制构造函数定义
Teacher::Teacher(Teacher& teacher) : People(teacher) {
	principalship = teacher.principalship;
	department = teacher.department;
}
//成员函数Show定义
void Teacher::Show() {
	People::Show();
	cout << "\n职务是:" << principalship << ",部门是:" << department;
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



