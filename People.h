//
// Created by dell on 2022-5-12.
//

#ifndef INC_1_5_PEOPLE_H
#define INC_1_5_PEOPLE_H

#include <iostream>

using namespace std;

class People {
public:
    //无参构造函数
    People() {}
    //析构函数
    ~People() {}
    //有参构造函数
    People(int num, const string &n, char g, const string &birth, const string &id);
    //复制构造函数
    People(People &people);
    //打印信息
    void Show();
    //getName
    const string &getName() const;
    //setName
    void setName(const string &name);
    //getBirth
    const string &getBirth() const;
    //setBirth
    void setBirth(const string &birth);
    //getId
    const string &getId() const;
    //setId
    void setId(const string &id);
    //getGender
    char getGender() const;
    //setGender
    void setGender(char gender);
    //getNumber
    int getNumber() const;
    //setNumber
    void setNumber(int number);

protected:
    string Name, Birth, Id;
    char Gender;
    int number;
};


#endif //INC_1_5_PEOPLE_H
