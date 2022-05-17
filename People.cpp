//
// Created by dell on 2022-5-12.
//

#include "People.h"
//有参构造函数定义
People::People(int num, const string &n, char g, const string &birth, const string &id) :
        number(num), Name(n), Gender(g), Birth(birth), Id(id) {}
//复制构造函数定义
People::People(People &people) {
    number = people.number;
    Name = people.Name;
    Gender = people.Gender;
    Birth = people.Birth;
    Id = people.Id;
}
//成员函数Show定义
void People::Show() {
    cout << "编号是:" << number << ",姓名是:" << Name << ",性别是:" << Gender << ",出生日期是:" << Birth << ",身份证号是:" << Id;
}

const string &People::getName() const {
    return Name;
}

void People::setName(const string &name) {
    Name = name;
}

const string &People::getBirth() const {
    return Birth;
}

void People::setBirth(const string &birth) {
    Birth = birth;
}

const string &People::getId() const {
    return Id;
}

void People::setId(const string &id) {
    Id = id;
}

int People::getNumber() const {
    return number;
}

void People::setNumber(int number) {
    People::number = number;
}

char People::getGender() const {
    return Gender;
}

void People::setGender(char gender) {
    Gender = gender;
}