//
// Created by dell on 2022-5-12.
//

#ifndef INC_1_5_GRADUATE_H
#define INC_1_5_GRADUATE_H

#include "Student.h"
#include "Teacher.h"

class Graduate : virtual public Student {
public:
    //无参构造函数
    Graduate() = default;
    //析构函数
    ~Graduate() = default;
    //有参构造函数
    Graduate(int num, const string &n, char g, const string &birth, const string &id, int cNo, const string &sub,
             Teacher &adv);
    //复制构造函数
    Graduate(Graduate &graduate);
    //打印信息
    void Show();
    //getSubject
    const string &getSubject() const;
    //setSubject
    void setSubject(const string &subject);
    //getAdviserName（只返回导师的名字）
    const string &getAdviserName() const;
    //setAdviser
    void setAdviser(Teacher adviser);

protected:
    string Subject;
    Teacher Adviser;
};


#endif //INC_1_5_GRADUATE_H
