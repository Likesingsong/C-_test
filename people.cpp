//
// Created by dell on 2022-5-12.
//

#include "People.h"
//�вι��캯������
People::People(int num, const std::string& name, char gender, const std::string& birth, const std::string& id) :
	_number(num), _name(name), _gender(gender), _birth(birth), _id(id) {
}
//���ƹ��캯������
People::People(const People& people) {
	_number = people._number;
	_name = people._name;
	_gender = people._gender;
	_birth = people._birth;
	_id = people._id;
}


//��Ա����Show����
void People::Show() {
	cout << "�����:" << _number << ",������:" << _name << ",�Ա���:" << _gender << ",����������:" << _birth << ",���֤����:" << _id;
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