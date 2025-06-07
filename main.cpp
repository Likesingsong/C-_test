#include <iostream>
#include "People.h"
#include "Student.h"
#include "Teacher.h"
#include "Graduate.h"
#include "TA.h"

using namespace std;

int main() {
    //����People����� jack
    People jack(1, "jack", 'M', "1999-11-01", "001");
    //����Student����� tony
    Student tony(2, "tome", 'M', "2000-05-16", "002", 2);
    //����Teacher����� alice,lily
    Teacher alice(3, "alice", 'F', "1994-02-17", "003", "3�������", "����");
    Teacher lily(4, "lily", 'F', "1995-12-28", "112", "2�������", "ѧϰ��");

    //����Graduate����� blue
    Graduate blue(5, "blue", 'M', "1999-09-10", "004", 2, "�����", alice);
    //����TA����� ruby
    TA ruby(6, "���", 'M', "1999-06-14", "005", "3������", "����", 3, "�����", alice);
    // ��ӡÿ���������Ϣ(Show����)
    cout << "��Ա����Ϣ��:" << endl;
    jack.Show();
    cout << endl;
    cout << "ѧ������Ϣ��:" << endl;
    tony.Show();
    cout << endl;
    cout << "��ʦ����Ϣ��:" << endl;
    alice.Show();
    cout << endl;
    /**���ڶ���������࣬��Teacher���Student����ֻ����һ�ݿ���
     * �����г�ʼ��People�����Ϣֻ������Teacher����һ��֧
     * ���Graduate�ඨ���blue�����б�š��������Ա𡢳������ڡ����֤��Ϊ��ֵ
     */
//    cout << "�о�������Ϣ��:" << endl;
//    blue.Show();
//    cout << endl;
    cout << "���̵���Ϣ��:" << endl;
    ruby.Show();
    cout << endl;
    /**
     * �����̶���rubyΪ������get��set����
     */
    //�޸����̶���lh����Ϣ(��ţ�7,���������,�Ա�F,�������ڣ�"1998-10-14,���֤�ţ�123,��ţ�2,ְ��2������,���ţ�ѧϰ��,רҵ���������,��ʦ��lily)
    ruby.setNumber(7);//
    ruby.setName("���");
    ruby.setGender('F');
    ruby.setBirth("1998-10-14");
    ruby.setId("123");
    ruby.setClassNo(2);
    ruby.setPrincipalship("2������");
    ruby.setDepartment("ѧϰ��");
    ruby.setSubject("�������");
    ruby.setAdviser(lily);
    //ͨ��get��������޸ĺ�lh����Ϣ
    cout << "ͨ��get�������lh����Ϣ:" << endl;
    cout << "�����:" << ruby.getNumber() << ",������:" << ruby.getName() << ",�Ա���:" << ruby.getGender() << ",����������:" <<
         ruby.getBirth() << ",���֤����:" << ruby.getId() << "\n�����:" << ruby.getClassNo() << ",ְ����:"
         << ruby.getPrincipalship() << ",������:" <<
         ruby.getDepartment() << ",רҵ��:" << ruby.getSubject() << ",��ʦ��:" << ruby.getAdviserName() << endl;
    return 0;
}
