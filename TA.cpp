//
// Created by dell on 2022-5-12.
//

#include "TA.h"
//�вι��캯������
TA::TA(int num, const string &n, char g, const string &birth, const string &idcard, const string &principalship,
       const string &department, int cNo, const string &sub, Teacher &adv) :
       People(num,n,g,birth,idcard),
       Teacher(num,n,g,birth,idcard,principalship,department),
       Student(num,n,g,birth,idcard,cNo),
       Graduate(num,n,g,birth,idcard,cNo,sub,adv){}
//���ƹ��캯������
TA::TA(TA &ta) :Graduate(ta){
    Principalship = ta.Principalship;
    Department = ta.Department;
}
//��Ա����Show����
void TA::Show() {
    Teacher::Show();
    cout<<",�����:"<<classNo<<",רҵ��:"<<Subject<<",��ʦ��:"<<Adviser.getName();
}


