//
// Created by dell on 2022-5-12.
//

#include "People.h"

//有参构造函数定义
People::People(int num, const std::string& name, char gender, const std::string& birth, const std::string& id) :
	_number(num), _name(name), _gender(gender), _birth(birth), _id(id) {
}
//复制构造函数定义
People::People(const People& people) {
	_number = people._number;
	_name = people._name;
	_gender = people._gender;
	_birth = people._birth;
	_id = people._id;
}

//成员函数Show定义
void People::Show() {
	cout << "编号是:" << _number << ",姓名是:" << _name << ",性别是:" << _gender << ",出生日期是:" << _birth << ",身份证号是:" << _id;
}

const string& People::getName() const {
	return _name;
}

void People::setName(const string& name) {
	_name = name;
}

const string& People::getBirth() const {
	return _birth;
}

void People::setBirth(const string& birth) {
	_birth = birth;
}

const string& People::getId() const {
	return _id;
}

void People::setId(const string& id) {
	_id = id;
}

int People::getNumber() const {
	return _number;
}

void People::setNumber(int number) {
	_number = number;
}

char People::getGender() const {
	return _gender;
}

void People::setGender(char gender) {
	_gender = gender;
}
