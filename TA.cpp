//
// Created by dell on 2022-5-12.
//

#include "TA.h"
//有参构造函数定义
TA::TA(int num, const string &n, char g, const string &birth, const string &idcard, const string &principalship,
       const string &department, int cNo, const string &sub, Teacher &adv) :
       People(num,n,g,birth,idcard),
       Teacher(num,n,g,birth,idcard,principalship,department),
       Student(num,n,g,birth,idcard,cNo),
       Graduate(num,n,g,birth,idcard,cNo,sub,adv){}
//复制构造函数定义
TA::TA(TA &ta) :Graduate(ta){
    Principalship = ta.Principalship;
    Department = ta.Department;
}
//成员函数Show定义
void TA::Show() {
    Teacher::Show();
    cout<<",班号是:"<<classNo<<",专业是:"<<Subject<<",导师是:"<<Adviser.getName();
}


