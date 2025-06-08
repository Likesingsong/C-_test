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
	Graduate(int num, const string& name, char gender, const string& birth, const string& id, int class_no, const string& subject,
		Teacher& adviser);
	//复制构造函数
	Graduate(Graduate& graduate);
	//打印信息
	void Show();
	//getSubject
	const string& getSubject() const;
	//setSubject
	void setSubject(const string& subject);
	//getAdviserName（只返回导师的名字）
	const string& getAdviserName() const;
	//setAdviser
	void setAdviser(Teacher adviser);

protected:
	string subject;
	Teacher adviser;
};

#endif //INC_1_5_GRADUATE_H
