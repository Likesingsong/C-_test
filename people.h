//
// Created by dell on 2022-5-12.
//

#pragma once

#include <iostream>
#include <string>
using namespace std;

class People {
public:
	//�޲ι��캯��
	People() {}
	//��������
	~People() {}
	//�вι��캯��
	People(int num, const string& name, char gender, const string& birth, const string& id);
	//���ƹ��캯��
	People(const People& people);
	//��ӡ��Ϣ
	void Show();
	//getName
	const string& getName() const;
	//setName
	void setName(const string& name);
	//getBirth
	const string& getBirth() const;
	//setBirth
	void setBirth(const string& birth);
	//getId
	const string& getId() const;
	//setId
	void setId(const string& id);
	//getGender
	char getGender() const;
	//setGender
	void setGender(char gender);
	//getNumber
	int getNumber() const;
	//setNumber
	void setNumber(int number);

protected:
	string _name, _birth, _id;
	char _gender;
	int _number;
};
