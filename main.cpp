#include <iostream>
#include "People.h"
#include "Student.h"
#include "Teacher.h"
#include "Graduate.h"
#include "TA.h"

using namespace std;

int main() {
    //创建People类对象 jack
    People jack(1, "jack", 'M', "1999-11-01", "001");
    //创建Student类对象 tony
    Student tony(2, "tome", 'M', "2000-05-16", "002", 2);
    //创建Teacher类对象 alice,lily
    Teacher alice(3, "alice", 'F', "1994-02-17", "003", "3班班主任", "管理部");
    Teacher lily(4, "lily", 'F', "1995-12-28", "112", "2班班主任", "学习部");

    //创建Graduate类对象 blue
    Graduate blue(5, "blue", 'M', "1999-09-10", "004", 2, "计算机", alice);
    //创建TA类对象 ruby
    TA ruby(6, "李浩", 'M', "1999-06-14", "005", "3班助教", "管理部", 3, "计算机", alice);
    // 打印每个对象的信息(Show函数)
    cout << "人员的信息是:" << endl;
    jack.Show();
    cout << endl;
    cout << "学生的信息是:" << endl;
    tony.Show();
    cout << endl;
    cout << "老师的信息是:" << endl;
    alice.Show();
    cout << endl;
    /**由于定义了虚基类，在Teacher类和Student类中只产生一份拷贝
     * 测试中初始化People类的信息只存在于Teacher类那一分支
     * 因此Graduate类定义的blue对象中编号、姓名、性别、出生日期、身份证号为空值
     */
//    cout << "研究生的信息是:" << endl;
//    blue.Show();
//    cout << endl;
    cout << "助教的信息是:" << endl;
    ruby.Show();
    cout << endl;
    /**
     * 以助教对象ruby为例测试get和set函数
     */
    //修改助教对象lh的信息(编号：7,姓名：李红,性别：F,出生日期："1998-10-14,身份证号：123,班号：2,职务：2班助教,部门：学习部,专业：软件工程,导师：lily)
    ruby.setNumber(7);//
    ruby.setName("李红");
    ruby.setGender('F');
    ruby.setBirth("1998-10-14");
    ruby.setId("123");
    ruby.setClassNo(2);
    ruby.setPrincipalship("2班助教");
    ruby.setDepartment("学习部");
    ruby.setSubject("软件工程");
    ruby.setAdviser(lily);
    //通过get函数输出修改后lh的信息
    cout << "通过get函数输出lh的信息:" << endl;
    cout << "编号是:" << ruby.getNumber() << ",姓名是:" << ruby.getName() << ",性别是:" << ruby.getGender() << ",出生日期是:" <<
         ruby.getBirth() << ",身份证号是:" << ruby.getId() << "\n班号是:" << ruby.getClassNo() << ",职务是:"
         << ruby.getPrincipalship() << ",部门是:" <<
         ruby.getDepartment() << ",专业是:" << ruby.getSubject() << ",导师是:" << ruby.getAdviserName() << endl;
    return 0;
}
