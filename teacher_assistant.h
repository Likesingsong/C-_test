//
// Created by dell on 2022-5-12.
//

#ifndef INC_1_5_TA_H
#define INC_1_5_TA_H

#include "Teacher.h"
#include "Graduate.h"

class TA : public Teacher, public Graduate {
public:
    //�޲ι��캯��
    TA() = default;
    //��������
    ~TA() = default;
    //�вι��캯��
    TA(int num, const string& name, char gender, const string& birth, const string &idcard, const string &principalship,
       const string &department, int class_no,  const string &subject, Teacher &adviser);
    //���ƹ��캯��
    TA(TA &ta);
    //��ӡ��Ϣ
    void Show();
};

#endif //INC_1_5_TA_H
