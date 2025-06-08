//
// Created by dell on 2022-5-12.
//

#ifndef INC_1_5_STUDENT_H
#define INC_1_5_STUDENT_H
#include "People.h"
#include <string>
class Student : virtual public People {
public:
	//�޲ι��캯��
	Student() = default;
	//��������
	~Student() = default;
	//�вι��캯��
	Student(int num, const std::string& name, char gender, const string& birth, const std::string& id, int class_no);
	//���ƹ��캯��
	Student(Student& student);
	//��ӡ��Ϣ
	void Show();
	//getClassNo
	int getClassNo() const;
	//setClassNo
	void setClassNo(int classNo);

protected:
	int class_no;
};

#endif //INC_1_5_STUDENT_H
