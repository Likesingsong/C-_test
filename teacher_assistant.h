//
// Created by dell on 2022-5-12.
//

#ifndef INC_1_5_TA_H
#define INC_1_5_TA_H

#include "Teacher.h"
#include "Graduate.h"

class TA : public Teacher, public Graduate {
public:
    //无参构造函数
    TA() = default;
    //析构函数
    ~TA() = default;
    //有参构造函数
    TA(int num, const string& name, char gender, const string& birth, const string &idcard, const string &principalship,
       const string &department, int class_no,  const string &subject, Teacher &adviser);
    //复制构造函数
    TA(TA &ta);
    //打印信息
    void Show();
};

#endif //INC_1_5_TA_H
